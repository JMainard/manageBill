#include "dialoginvoicecomplete.h"
#include "ui_dialoginvoicecomplete.h"
#include "dialogclient.h"
#include <QSqlQuery>
#include <QDebug>
#include <QString>

DialogInvoiceComplete::DialogInvoiceComplete( QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInvoiceComplete)
{
    ui->setupUi(this);
   /* if(ui->labelInvoicePaid->text()=="Yes")
    {
        ui->pushButtonBillIsPaid->setEnabled(false);
    }
    else{
        ui->pushButtonBillIsPaid->setEnabled(true);
    }*/
}

DialogInvoiceComplete::~DialogInvoiceComplete()
{
    delete ui;
}

void DialogInvoiceComplete::on_pushButtonPDFInvoice_clicked()
{

}

void DialogInvoiceComplete::on_pushButtonBack_clicked()
{
    reject();
}

void DialogInvoiceComplete::on_pushButtonBillIsPaid_clicked()
{
qDebug() << "Bill is paid ";
    //Update of the bill to check of yes and if bill paid button block
    QString nameTable;
    QString billPaid;
    QString billColumn;
    switch (modF) {
    case 1:{
        //CLient
        nameTable = "billClient";
        billPaid = "bcBillPaid";
        billColumn ="bcId";
       } break;
    case 2 :{
        nameTable = "billSupplier";
        billPaid = " bsBillPaid";
        billColumn ="bsId";
    }
        break;
    case 3 : {
        nameTable = "billPersonnel";
        billPaid = "bpBillPaid";
        billColumn = "bpId";
    }
    }
    QString update =("update "+nameTable+" set "+billPaid+"=1 where "+billColumn+" = "+id+"");
qDebug() << update;
    QSqlQuery requestUpdate (update);
    ui->labelInvoicePaid->setText("Yes");
    ui->pushButtonBillIsPaid->setEnabled(false);


}

void DialogInvoiceComplete::fillTableProduct(QString product)
{
qDebug() << "fillTableProduct()";
    //Fill table product for client/supplier/personnel
    int lines =0;
    ui->tableWidgetProduct->setRowCount(0);
    QSqlQuery requestProduct(product);
    while(requestProduct.next()){
        ui->tableWidgetProduct->setRowCount(ui->tableWidgetProduct->rowCount()+1);
        QString name = requestProduct.value(1).toString();
        QString priceWithVAT = requestProduct.value(2).toString();
        QString vat = requestProduct.value(3).toString();
        QString netPrice = requestProduct.value(4).toString();
        QString quantity =requestProduct.value(5).toString();
        QString toq = requestProduct.value(6).toString();

        ui->tableWidgetProduct->setItem(lines,0,new QTableWidgetItem(name));
        ui->tableWidgetProduct->setItem(lines,1,new QTableWidgetItem(priceWithVAT));
        ui->tableWidgetProduct->setItem(lines,2,new QTableWidgetItem(vat));
        ui->tableWidgetProduct->setItem(lines,3,new QTableWidgetItem(netPrice));
        ui->tableWidgetProduct->setItem(lines,4,new QTableWidgetItem(quantity));
        ui->tableWidgetProduct->setItem(lines,5,new QTableWidgetItem(toq));

    }
   ui->tableWidgetProduct->resizeRowsToContents();

}

void DialogInvoiceComplete::fillLabel(QString invoice, int mod)
{
qDebug() << "FillLabel";
    QString labelBillPaid;
    QSqlQuery requestInvoice (invoice);
    requestInvoice.next();
    QString labelFirstName;
    QString labelName;
    QString familyNameClient ;
    QString companyNameClient;
    switch (mod) {
    case 1:{
        //Client
        labelFirstName = requestInvoice.value(5).toString();
        familyNameClient = requestInvoice.value(6).toString();
        companyNameClient = requestInvoice.value(7).toString();
        labelName = familyNameClient +" "+companyNameClient;

qDebug() << "Label Name : " << labelName;
       } break;
    case 2: {
        //Supplier
        labelName = requestInvoice.value(5).toString();
        ui->labelFirstName->clear();
       } break;
    case 3 :{
        //Employee
       labelFirstName = requestInvoice.value(5).toString();
       labelName=requestInvoice.value(6).toString();
    }break;
    }

    if (requestInvoice.value(4).toInt()==1){
        labelBillPaid = "Yes";
    }
    else{
        labelBillPaid = "No";
    }

    QString labelBillingDate = requestInvoice.value(0).toString();
    QString labelPaymentDate = requestInvoice.value(1).toString();
    QString labelTotalAmount = requestInvoice.value(2).toString();
    QString labelReason = requestInvoice.value(3).toString();

    ui->labelInvoicePaid->setText(labelBillPaid);
    ui->labelBillingDate->setText(labelBillingDate);
    ui->labelPaymentDate->setText(labelPaymentDate);
    ui->labelAmount->setText(labelTotalAmount);
    ui->labelReason->setText(labelReason);
    ui->labelName->setText(labelName);
    ui->labelFirstName->setText(labelFirstName);




}

void DialogInvoiceComplete::recupId(QString idInvoice, int mod)
{
    id = idInvoice;
    modF= mod ;
    //Fill all label with basic info of invoice
qDebug() << "recupId /get info of invoice ";
    //Mod let u know if the Id INVOICE  is for client,supplier,personnel  client = 1 , supplier=2 , personnel =3
qDebug() << "Mod: "<<mod ;
    switch (mod) {
    case 1:{
qDebug()<< "Cest un client" ;
        //Client
       QString invoiceClient = ("select vBcBillingDate, vBcPaymentDate, vBcTotalAmount, vBcReason, vBcBillPaid, vCliFirstName, vCliFamilyName, vCliCompanyName from vClientInvoice where vBcId = "+idInvoice+"");
       fillLabel(invoiceClient,mod);
       QString productClient =("select vBcId, vProdWording, vCpPriceWithVAT, vVatPercent, vCpPriceWithoutVAT, vCpQuantity, vToqWording from vProductInvoiceClient where vBcId="+idInvoice+"");
       fillTableProduct(productClient);
    } break;
    case 2:{
        //Supplier
        QString invoiceSupplier = ("select vBsBillingDate, vBsPaymentDate, vBsTotalAmount, vBsReason, vBsBillPaid, vSupCompanyName from vSupplierInvoice where vBsId = "+idInvoice+"");
        fillLabel(invoiceSupplier,mod);
        QString productSupplier =("select vBsId, vProdWording, vSpPriceWithVAT, vVatPercent, vSpPriceWithoutVAT, vSpQuantity, vToqWording from vProductInvoiceSupplier where vBsId="+idInvoice+"");
        fillTableProduct(productSupplier);
qDebug() << "InvoiceSupplier : " << invoiceSupplier;
qDebug() << "ProductSupplier :" << productSupplier;
    }break;
    case 3:{
        //Personnel
        QString invoicePersonnel =("select vBpBillingDate, vBpPaymentDate, vBpTotalAmount, vBpReason, vBpBillPaid, vPerFirstName, vPerFamilyName from vEmployeeInvoice where vBpId = "+idInvoice+"");
        fillLabel(invoicePersonnel,mod);
        QString productPersonnel = ("select vBpId, vProdWording, vPpPriceWithVAT, vVatPercent, vPpPriceWithoutVAT, vPpQuantity, vToqWording from vProductInvoiceEmployee where vBpId="+idInvoice+"");
        fillTableProduct(productPersonnel);
qDebug() << "Invoice Personnel" << invoicePersonnel;
qDebug() << "Products personnel" << productPersonnel;
        break;
        }
    }
}



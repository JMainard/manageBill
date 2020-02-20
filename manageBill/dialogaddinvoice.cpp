#include "dialogaddinvoice.h"
#include "ui_dialogaddinvoice.h"
#include "dialogaddproducts.h"
#include "dialogadd.h"
#include "dialogadd.h"
#include <QDebug>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>

DialogAddInvoice::DialogAddInvoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddInvoice)
{
    ui->setupUi(this);
    ui->comboBoxCategory_2->addItem("Choose",0);
    fillProduct();
    lines = 0;
    ui->tableWidgetProduct->setRowCount(0);
    ui->pushButtonAdd->setEnabled(false);
}

DialogAddInvoice::~DialogAddInvoice()
{
    delete ui;
}

void DialogAddInvoice::addInvoice(int modInvoice)
{
    mod=modInvoice;
}

void DialogAddInvoice::on_pushButtonAdd_clicked()
{
    //Get all info from lineEdit
    QString billingDate = ui->lineEditBillingDate->text();
    QString paymentDate = ui->lineEditPaymentDate->text();
    QString totalAmount = ui->lineEditTotalAmount->text();
    QString reason = ui->lineEditReason->text();
    QString billPaid;
    if (ui->checkBoxBillPaid->isChecked()){
    billPaid = "1";
    }
    else{
        billPaid ="0";
    }

qDebug() << "push button add Invoice ";
    switch (mod) {
    case 1:{
    //Request to add invoice for a  client
        //In first add billClient
        //Second add clientProducts
        //Get id of invoice client
         QString idInvoiceClient = ("select max(bcId) bcId from billClient ");
         QSqlQuery requestIdInvoiceClient (idInvoiceClient);
         requestIdInvoiceClient.next();
         QString idBillClient = requestIdInvoiceClient.value("bcId").toString();
         QString addInvoiceClient =("insert into billClient values("+idBillClient+",'"+billingDate+"','"+paymentDate+"',"+totalAmount+",'"+reason+"',"+billPaid+",' ',"+id+");");
         QSqlQuery requestAddInvoiceClient (addInvoiceClient);
         requestAddInvoiceClient.exec();
    }break;
    case 2:{
    //Request to add invoice for a supplier
        QString idInvoiceSupplier = ("select max(supId) supId from billSupplier" );
        QSqlQuery requestIdInvoiceSupplier (idInvoiceSupplier);
        requestIdInvoiceSupplier.next();
        QString idBillSupplier = requestIdInvoiceSupplier.value("supId").toString();
        QString addInvoiceSupplier = ("insert into billSupplier values ("+idBillSupplier+",'"+billingDate+"','"+paymentDate+"',"+totalAmount+",'"+reason+"',"+billPaid+",' ',"+id+");");
        QSqlQuery requestAddInvoiceSupplier (addInvoiceSupplier);
        requestAddInvoiceSupplier.exec();

    }break;
    case 3:{
    //Request to add invoice for a employee
        QString idInvoiceEmployee =("select max(perId) perId from billPersonnel");
        QSqlQuery requestIdInvoiceEmployee (idInvoiceEmployee);
        requestIdInvoiceEmployee.next();
        QString idBillEmployee = requestIdInvoiceEmployee.value("perId").toString();
        QString addInvoiceEmployee = ("insert into billPersonnel values ("+idBillEmployee+",'"+billingDate+"','"+paymentDate+"',"+totalAmount+",'"+reason+"',"+billPaid+",' ',"+id+");");
        QSqlQuery requestAddInvoiceEmployee (addInvoiceEmployee);
        requestAddInvoiceEmployee.exec();
qDebug() << billingDate;
qDebug() << paymentDate;
qDebug() << totalAmount;
qDebug() << reason;
qDebug() <<  billPaid;
    } break;

    }
}

void DialogAddInvoice::on_pushButtonBack_clicked()
{
    reject();
}

void DialogAddInvoice::on_pushButtonAddHuman_clicked()
{
    //create a switch to open add with good form
    DialogAdd addHuman;
    switch (mod) {
    case 1:{
qDebug()<< "Add human in add Invoice Client";
        addHuman.addClient();
    }break;
    case 2 :{
qDebug()<< "Add human in add Invoice Client";
        addHuman.addSupplier();
    } break;
    case 3:{
qDebug()<< "Add human in add Invoice Client";
        addHuman.addEmployee();
    }break;
    }
    addHuman.exec();
}

void DialogAddInvoice::on_pushButtonSearch_clicked()
{
qDebug() << "Push button search (client/supplier/employee";
    ui->labelName->clear();
    ui->labelFirstName->clear();
    switch (mod) {
    case 1:{
        //Request by vat number for client
        QString searchClient =("select vCliCompanyName, vCliFirstName, vCliFamilyName, vCliId from vNameClient where vCliVatNumber ='"+ui->lineEditSearch->text()+"';");
    QSqlQuery requestSearchCient (searchClient);
    requestSearchCient.next();

    if(requestSearchCient.isNull(false)){
qDebug() << "Error in client vatNumber";
        ui->labelName->setText("Error try again pls");
        ui->pushButtonAdd->setEnabled(false);
    }
    else{
        id = requestSearchCient.value("vCliId").toInt();
        QString cliCompanyName = requestSearchCient.value("vCliCompanyName").toString();
        QString cliFirstName = requestSearchCient.value("vCliFirstName").toString();
        QString cliFamilyName = requestSearchCient.value("vCliFamilyName").toString();
        ui->labelName->setText(cliCompanyName+" "+cliFamilyName);
        ui->labelFirstName->setText(cliFirstName);
        ui->pushButtonAdd->setEnabled(true);
    }
    }break;
    case 2:{
        //Request by vat number for supplier
        QString searchSupplier =("select vSupCompanyName, vSupId from vNameSupplier where vSupVatNumber ='"+ui->lineEditSearch->text()+"';");
        QSqlQuery requestSearchSupplier (searchSupplier);
        requestSearchSupplier.next();
        if (requestSearchSupplier.isNull(false)){
qDebug() << "Care error in supplier vatNumber";
        ui->labelName->setText("Error try again");
        ui->pushButtonAdd->setEnabled(false);
        }
        else{
           id = requestSearchSupplier.value("vSupId").toInt();
           QString supCompanyName = requestSearchSupplier.value("vSupCompanyName").toString();
           ui->labelName->setText(supCompanyName);
           ui->pushButtonAdd->setEnabled(true);
        }
    }break;
    case 3:{
        //request by vat number for employee
        QString searchEmployee =("select vPerFirstName, vPerFamilyName, vPerId from vNamePersonnel where vPerVatNumber ='"+ui->lineEditSearch->text()+"';");
        QSqlQuery requestSearchEmployee (searchEmployee);
        requestSearchEmployee.next();
        if (requestSearchEmployee.isNull(false)){
qDebug() << "Attention il a une erreur";
          ui->labelName->setText("Retry a correct vatNumber");
          ui->pushButtonAdd->setEnabled(false);
        }
        else{
        id = requestSearchEmployee.value("vPerId").toInt();
        QString perFirstName = requestSearchEmployee.value("vPerFirstName").toString();
        QString perFamilyName = requestSearchEmployee.value("vPerFamilyName").toString();
        ui->labelName->setText(perFamilyName);
        ui->labelFirstName->setText(perFirstName);
        ui->pushButtonAdd->setEnabled(true);

    }
qDebug() << searchEmployee;
    }break;

    }
}

void DialogAddInvoice::on_comboBoxCategory_2_currentTextChanged(const QString &arg1)
{
    ui->comboBoxSCategory->clear();
    ui->comboBoxProduct_2->clear();
    //Fill subCategory
    QString id = ui->comboBoxCategory_2->currentData().toString();
    QString fillSCategory = ("select vSCatId, vSCatWording from vFillSCategory where vCatId='"+id+"';");
    QSqlQuery requestFillSCategory (fillSCategory);
    ui->comboBoxSCategory->addItem("Choose",0);
    while (requestFillSCategory.next()){
        int id = requestFillSCategory.value("vSCatId").toInt();
        QString  subCategory = requestFillSCategory.value("vSCatWording").toString();
        ui->comboBoxSCategory->addItem(subCategory,id);
    }
        //Fill product
        QString fillProd = ("select vProdId, vProdWording from vFillProduct where vCatId ='"+id+"';");
        QSqlQuery requestFillProd (fillProd);
        while (requestFillProd.next()){
            int prodId = requestFillProd.value("vProdId").toInt();
            QString prodWording = requestFillProd.value("vProdWording").toString();
            ui->comboBoxProduct_2->addItem(prodWording, prodId);
        }
}

void DialogAddInvoice::on_comboBoxSCategory_currentTextChanged(const QString &arg1)
{
    ui->comboBoxProduct_2->clear();
    //Fill Product
    QString idSCategory = ui->comboBoxSCategory->currentData().toString();
    QString fillProduct =("select vProdId, vProdWording from vFillProduct where vSCatId="+idSCategory+";");
    QSqlQuery requestFillProduct (fillProduct);
    while (requestFillProduct.next()){
        int idProd = requestFillProduct.value("vProdId").toInt();
        QString products = requestFillProduct.value("vProdWording").toString();
        ui->comboBoxProduct_2->addItem(products,idProd);
    }
}

void DialogAddInvoice::on_pushButtonAddNewProduct_clicked()
{
    //OPen dialog add new product
    DialogAddProducts dialogAddProd;
    dialogAddProd.exec();
}

void DialogAddInvoice::on_pushButtonAddProductToInvoice_clicked()
{
qDebug() << "Add product to table/Invoice : ";
    QString prodName = ui->comboBoxProduct_2->currentText();
    QString quantity = ui->lineEditPrice_2->text();
    QString price = ui->lineEditPrice_2->text();
    QString vatPercent = ui->comboBoxVAT_2->currentText();
    QString netPrice = ui->lineEditNetPrice_3->text();
     //Request to get type of quantity
    QString findToq  =("select vToqWording from vFindToq where vProdId ='"+ui->comboBoxProduct_2->currentData().toString()+"';");
    QSqlQuery requestFindToq(findToq);
    requestFindToq.next();
    QString toqWording = requestFindToq.value("vToqWording").toString();

    ui->tableWidgetProduct->setRowCount(ui->tableWidgetProduct->rowCount()+1);
    ui->tableWidgetProduct->setItem(lines,0,new QTableWidgetItem(prodName));
    ui->tableWidgetProduct->setItem(lines,1,new QTableWidgetItem(quantity));
    ui->tableWidgetProduct->setItem(lines,2,new QTableWidgetItem(price));
    ui->tableWidgetProduct->setItem(lines,3,new QTableWidgetItem(vatPercent));
    ui->tableWidgetProduct->setItem(lines,4,new QTableWidgetItem(netPrice));
    ui->tableWidgetProduct->setItem(lines,5,new QTableWidgetItem(toqWording));
    lines++;
}

void DialogAddInvoice::fillProduct()
{
    qDebug() << "Fill product";
        //Fill comboBox in first
        ui->comboBoxProduct_2->clear();
        ui->comboBoxVAT_2->clear();
        QString fillCategory =("select vCatId, vCatWording from vCategory");
        QSqlQuery requestFillCategory (fillCategory);
        while (requestFillCategory.next()){
            int id = requestFillCategory.value("vCatId").toInt();
            QString category =requestFillCategory.value("vCatWording").toString();
            ui->comboBoxCategory_2->addItem(category,id);
        }
        QString fillVAT = ("select vVatId, vVatPercent from vVatPercent");
        QSqlQuery requestFillVat (fillVAT);
        while (requestFillVat.next()) {
            int idVat = requestFillVat.value("vVatId").toInt();
            QString percentVat = requestFillVat.value("vVatPercent").toString();
            ui->comboBoxVAT_2->addItem(percentVat,idVat);
        }
}

void DialogAddInvoice::insertProduct()
{
    //Read the table and add all product to the clientProducts/supplierProducts/personnelProducts ...

}


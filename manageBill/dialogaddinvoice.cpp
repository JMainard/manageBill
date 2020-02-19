#include "dialogaddinvoice.h"
#include "ui_dialogaddinvoice.h"
#include "dialogadd.h"
#include "dialoginvoiceproduct.h"
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

void DialogAddInvoice::fillTableProduct(QString prodId, QString quantity, QString price, QString vatId, QString netPrice)
{
qDebug() << "Fill table product to add in new invoice :";
    //FIll table to add product;
    //Get name of the product (to dodge a idea where we get 2 same name)
    QString nameProd= ("select vProdWording , vProdToqWording from vFillTableProductAddInvoice where vProdId ="+prodId+";");
    QSqlQuery requestProdName (nameProd);
    requestProdName.next();
    QString prodName = requestProdName.value("vProdWording").toString();
    QString toqWording = requestProdName.value("vProdToqWording").toString();

    QString percentVat = ("select vVatPercent from vVatPercent where vVatId = "+vatId+";");
    QSqlQuery requestVatPercent (percentVat );
    requestVatPercent.next();
    QString vatPercent = requestVatPercent.value("vVatPercent").toString();
qDebug() << prodName;
qDebug() << quantity;
qDebug() << price;
qDebug() << vatPercent;
qDebug() << netPrice;
qDebug() << toqWording;
    //Get type of quantity with prodId
    ui->labelFirstName->setText("CA FONCTIONNEAAAHAHHAHHA");
    ui->tableWidgetProduct->setRowCount((ui->tableWidgetProduct->rowCount()+1));
    ui->tableWidgetProduct->setItem(1,0,new QTableWidgetItem (prodName));
    ui->tableWidgetProduct->setItem(1,1,new QTableWidgetItem (quantity));
    ui->tableWidgetProduct->setItem(1,2,new QTableWidgetItem (price));
    ui->tableWidgetProduct->setItem(1,3,new QTableWidgetItem (vatPercent));
    ui->tableWidgetProduct->setItem(1,4,new QTableWidgetItem (netPrice)) ;
    ui->tableWidgetProduct->setItem(1,5,new QTableWidgetItem (toqWording));

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

    }break;
    case 2:{
    //Request to add invoice for a supplier

    }break;
    case 3:{
    //Request to add invoice for a employee
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

void DialogAddInvoice::on_pushButtonAddProduct_clicked()
{
qDebug() << "Push Button add product to table ";
    DialogInvoiceProduct a;
    a.exec();
}

void DialogAddInvoice::on_pushButtonSearch_clicked()
{
qDebug() << "Push button search (client/supplier/employee";
    ui->labelName->clear();
    ui->labelFirstName->clear();
    switch (mod) {
    case 1:{
        //Request by vat number for client
        QString searchClient =("select vCliCompanyName, vCliFirstName, vCliFamilyName from vNameClient where vCliVatNumber ='"+ui->lineEditSearch->text()+"';");
    QSqlQuery requestSearchCient (searchClient);
    requestSearchCient.first();
    QString cliCompanyName = requestSearchCient.value("vCliCompanyName").toString();
    QString cliFirstName = requestSearchCient.value("vCliFirstName").toString();
    QString cliFamilyName = requestSearchCient.value("vCliFamilyName").toString();
    ui->labelName->setText(cliCompanyName+" "+cliFamilyName);
    ui->labelFirstName->setText(cliFirstName);
    }break;
    case 2:{
        //Request by vat number for supplier
        QString searchSupplier =("select vSupCompanyName from vNameSupplier where vSupVatNumber ='"+ui->lineEditSearch->text()+"';");
        QSqlQuery requestSearchSupplier (searchSupplier);
        requestSearchSupplier.first();
        QString supCompanyName = requestSearchSupplier.value("vSupCompanyName").toString();
        ui->labelName->setText(supCompanyName);
    }break;
    case 3:{
        //request by vat number for employee
        QString searchEmployee =("select vPerFirstName, vPerFamilyName from vNamePersonnel where vPerVatNumber ='"+ui->lineEditSearch->text()+"';");
        QSqlQuery requestSearchEmployee (searchEmployee);
        requestSearchEmployee.next();
        if (requestSearchEmployee.isNull(false)){
qDebug() << "Attention il a une erreur";
          ui->labelName->setText("Retry a  vat he is incorrect");
          ui->pushButtonAdd->setEnabled(false);
          ui->pushButtonAddProduct->setEnabled(false);
        }
        else{
        QString perFirstName = requestSearchEmployee.value("vPerFirstName").toString();
        QString perFamilyName = requestSearchEmployee.value("vPerFamilyName").toString();
        ui->labelName->setText(perFamilyName);
        ui->labelFirstName->setText(perFirstName);
        ui->pushButtonAdd->setEnabled(true);
        ui->pushButtonAddProduct->setEnabled(true);

    }
qDebug() << searchEmployee;
    }break;

    }
}



























#include "dialogproducts.h"
#include "ui_dialogproducts.h"
#include "dialogaddproducts.h"
#include <QSqlQuery>
#include <QString>
#include <QDebug>
DialogProducts::DialogProducts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogProducts)
{
    ui->setupUi(this);
    fillComboBoxCategory();
}

DialogProducts::~DialogProducts()
{
    delete ui;
}

void DialogProducts::fillComboBoxCategory()
{
 QSqlQuery requestCategory ("select vCatId, vCatWording  from vCategory;");

 while (requestCategory.next()){

     int catId = requestCategory.value("vCatId").toInt();
     QString catWording = requestCategory.value("vCatWording").toString();
     ui->comboBoxCategory->addItem(catWording,catId);

 }
}

void DialogProducts::on_pushButtonBack_clicked()
{
    reject();
}

void DialogProducts::on_pushButtonAddProduct_clicked()
{
    DialogAddProducts a;
    a.exec();
}

void DialogProducts::on_comboBoxCategory_currentTextChanged(const QString &arg1)
{
qDebug() << "comboBoxCategory";
qDebug() << arg1;
    ui->comboBoxSCategory->clear();
    ui->comboBoxName->clear();
    QString category= ui->comboBoxCategory->currentData().toString();

    //every time change category we fill sub Category and Products
       QString fillSCategory =(" select vSCatId,vSCatWording from vFillSCategory where vCatId='"+category+"'");
       QSqlQuery requestFillSCategory(fillSCategory);
       ui->comboBoxSCategory->addItem("Choose",0);
       while (requestFillSCategory.next()){
           int catId = requestFillSCategory.value("vSCatId").toInt();
           QString catWording = requestFillSCategory.value("vSCatWording").toString();

          ui->comboBoxSCategory->addItem(catWording,catId);
       }
}

void DialogProducts::on_comboBoxSCategory_currentTextChanged(const QString &arg1)
{
qDebug() << "comboBox sub Category ";
    //clear content of comboBOW WITH PRODUCT
    ui->comboBoxName->clear();
    //same as Category but just fill products
    QString sCategory=ui->comboBoxSCategory->currentData().toString();
    QString category=ui->comboBoxCategory->currentData().toString();
qDebug() << sCategory;
    //If we reset to noSubCategory
    if (sCategory=="0"){
qDebug() << "Category==0";
        QString fillProductWithCategory =("select vProdId, vProdWording from vFillProduct where vcatId='"+category+"'");
        QSqlQuery requesfillProductWithCategory0(fillProductWithCategory);

        while (requesfillProductWithCategory0.next()){
            int prodId = requesfillProductWithCategory0.value("vProdId").toInt();
            QString prodWording = requesfillProductWithCategory0.value("vProdWording").toString();

           ui->comboBoxName->addItem(prodWording,prodId);
        }
    }
    else {
        QString fillProductWithSCategory =("select vProdId,vProdWording from vFillProduct where vSCatId='"+sCategory+"'");
        QSqlQuery requestFillProductWithSCategory(fillProductWithSCategory);

        while (requestFillProductWithSCategory.next()) {
            int prodId = requestFillProductWithSCategory.value("vProdId").toInt();
            QString ProdWording =requestFillProductWithSCategory.value("vProdWording").toString();

            ui->comboBoxName->addItem(ProdWording,prodId);
           }
    }
}


void DialogProducts::on_pushButtonSearch_clicked()
{
// We  show all invoice with product select
    ui->tableWidgetInvoice->clearContents();
    int lines = 0;
    ui->tableWidgetInvoice->setRowCount(0);
    QString prodId = ui->comboBoxName->currentData().toString();

    QString findInvoiceSupplier = ("select vBsBillingDate, vBsPaymentDate, vBsTotalAmount, vBsReason, vBsBillPaid, vSupCompanyName from vInvoicePerProductSupplier where vProdId='"+prodId+"'");
qDebug() << "REQUEST Supplier : " + findInvoiceSupplier;
    QSqlQuery requestFindInvoiceSupplier(findInvoiceSupplier);
    while (requestFindInvoiceSupplier.next()){
        ui->tableWidgetInvoice->setRowCount(ui->tableWidgetInvoice->rowCount()+1);
        QString supBillingDate = requestFindInvoiceSupplier.value("vBsBillingDate").toString();
        QString supPaymentDate =  requestFindInvoiceSupplier.value("vBsPaymentDate").toString();
        QString supTotalAmount = requestFindInvoiceSupplier.value("vBsTotalAmount").toString();
        QString supReason = requestFindInvoiceSupplier.value("vBsReason").toString();
        QString supCompanyName = requestFindInvoiceSupplier.value("vSupCompanyName").toString();
        QString supBillPaid;
        if (requestFindInvoiceSupplier.value("vBsBillPaid").toInt()==0){
            supBillPaid="No";
        }
        else {
            supBillPaid="Yes";
        }
        ui->tableWidgetInvoice->setItem(lines,0,new QTableWidgetItem(supCompanyName));
        ui->tableWidgetInvoice->setItem(lines,1,new QTableWidgetItem(supBillingDate));
        ui->tableWidgetInvoice->setItem(lines,2,new QTableWidgetItem(supPaymentDate));
        ui->tableWidgetInvoice->setItem(lines,3,new QTableWidgetItem(supTotalAmount));
        ui->tableWidgetInvoice->setItem(lines,4,new QTableWidgetItem(supReason));
        ui->tableWidgetInvoice->setItem(lines,5,new QTableWidgetItem(supBillPaid));
        lines++;
    }


    QString findInvoiceClient = ("select vBcBillingDate,vBcPaymentDate,vBcTotalAmount,vBcReason, vBcBillPaid, vCliFirstName, vCliFamilyName, vCliCompanyName from vInvoicePerProductClient where vProdId='"+prodId+"'");
qDebug ()<< "REQUETS CLIENT : " + findInvoiceClient;
    QSqlQuery requestFindInvoiceClient(findInvoiceClient);
    while (requestFindInvoiceClient.next()) {
        ui->tableWidgetInvoice->setRowCount(ui->tableWidgetInvoice->rowCount()+1);
        QString cliBillingDate = requestFindInvoiceClient.value("vBcBillingDate").toString();
        QString cliPaymentDate =  requestFindInvoiceClient.value("vBcPaymentDate").toString();
        QString cliTotalAmount = requestFindInvoiceClient.value("vBcTotalAmount").toString();
        QString cliReason = requestFindInvoiceClient.value("vBcReason").toString();
        QString cliCompanyName = requestFindInvoiceClient.value("vCliCompanyName").toString();
        QString cliFirstName = requestFindInvoiceClient.value("vCliFirstName").toString();
        QString cliFamilyName = requestFindInvoiceClient.value("vCliFamilyName").toString();
        QString cliBillPaid;
        if(requestFindInvoiceClient.value("vBcBillPaid").toInt()==0){
            cliBillPaid = "No";
        }
        else {
            cliBillPaid= "Yes";
        }

        ui->tableWidgetInvoice->setItem(lines,0,new QTableWidgetItem(cliCompanyName+" "+cliFamilyName+" "+cliFirstName));
        ui->tableWidgetInvoice->setItem(lines,1,new QTableWidgetItem(cliBillingDate));
        ui->tableWidgetInvoice->setItem(lines,2,new QTableWidgetItem(cliPaymentDate));
        ui->tableWidgetInvoice->setItem(lines,3,new QTableWidgetItem(cliTotalAmount));
        ui->tableWidgetInvoice->setItem(lines,4,new QTableWidgetItem(cliReason));
        ui->tableWidgetInvoice->setItem(lines,5,new QTableWidgetItem(cliBillPaid));
        lines++;
    }

    QString findInvoicePersonnel =("select vBpBillingDate, vBpPaymentDate, vBpTotalAmount, vBpReason, vBpBillPaid, vPersFamilyName, vPersFirstName from vInvoicePerProductPersonnel where vProdId='"+prodId+"'");
qDebug() << " REQUEST PERSONNEL : " +findInvoicePersonnel;
    QSqlQuery requestFindInvoicePersonnel (findInvoicePersonnel);
    while (requestFindInvoicePersonnel.next()) {
        ui->tableWidgetInvoice->setRowCount(ui->tableWidgetInvoice->rowCount()+1);
        QString perBillingDate = requestFindInvoicePersonnel.value("vBpBillingDate").toString();
        QString perPaymentDate =  requestFindInvoicePersonnel.value("vBpPaymentDate").toString();
        QString perTotalAmount = requestFindInvoicePersonnel.value("vBpTotalAmount").toString();
        QString perReason = requestFindInvoicePersonnel.value("vBpReason").toString();
        QString perFamilyName = requestFindInvoicePersonnel.value("vPersFamilyName").toString();
        QString perFirstName = requestFindInvoicePersonnel.value("vPersFirstName").toString();
        QString perBillPaid;
        if(requestFindInvoicePersonnel.value("vBpBillPaid").toInt()==0){
            perBillPaid = "No";
        }
        else {
            perBillPaid= "Yes";
        }

        ui->tableWidgetInvoice->setItem(lines,0,new QTableWidgetItem(perFamilyName+" "+perFirstName));
        ui->tableWidgetInvoice->setItem(lines,1,new QTableWidgetItem(perBillingDate));
        ui->tableWidgetInvoice->setItem(lines,2,new QTableWidgetItem(perPaymentDate));
        ui->tableWidgetInvoice->setItem(lines,3,new QTableWidgetItem(perTotalAmount));
        ui->tableWidgetInvoice->setItem(lines,4,new QTableWidgetItem(perReason));
        ui->tableWidgetInvoice->setItem(lines,5,new QTableWidgetItem(perBillPaid));
        lines++;
    }
    ui->tableWidgetInvoice->resizeRowsToContents();

}

























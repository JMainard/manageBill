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
       ui->comboBoxSCategory->addItem("",0);
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

    QString prodId = ui->comboBoxName->currentData().toString();
    QString findInvoiceSupplier = ("select bsBillingDate,bsPaymentDate,bsTotalAmount,bsReason,bsBillPaid from billSupplier inner join supplierProducts on supplierProducts.bsId=billSupplier.bsId inner join supplier on supplier.supId=billSupplier.supId  where supplierProducts.prodId='"+prodId+"'");
    QSqlQuery requestFindInvoiceSupplier(findInvoiceSupplier);

    QString findInvoiceClient = ("select bcBillingDate,bcPaymentDate,bcTotalAmount,bcReason,bcBillPaid from billClient inner join clientProducts on clientProducts.bcId=billClient.bcId inner join client on client.cliId=billClient.cliId where clientProducts.prodId='"+prodId+"'");
    QSqlQuery requestFindInvoiceClient(findInvoiceClient);

    QString findInvoicePersonnel =("select bpBillingDate, bpPaymentDate, bpTotalAmount, bpReason, bpBillPaid from billPersonnel inner join persoProducts on persoProducts.bpId=billPersonnel.bpId inner join personnel on personnel.perId=billPersonnel.persId where persoProducts.prodId='"+prodId+"'");
    QSqlQuery requestFindInvoicePersonnel (findInvoicePersonnel);


}

























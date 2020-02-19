#include "dialoginvoiceproduct.h"
#include "ui_dialoginvoiceproduct.h"
#include "dialogaddproducts.h"
#include <QSqlQuery>
#include <QString>
#include <QDebug>
#include "dialogaddinvoice.h"

DialogInvoiceProduct::DialogInvoiceProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInvoiceProduct)
{
    ui->setupUi(this);
    ui->comboBoxCategory->addItem("Choose",0);
    fillProduct();
}

DialogInvoiceProduct::~DialogInvoiceProduct()
{
    delete ui;
}

void DialogInvoiceProduct::on_pushButtonAddProduct_clicked()
{
    DialogAddProducts a;
    a.exec();
}

void DialogInvoiceProduct::on_pushButtonAddInvoice_clicked()
{
   //Add product to table in QDialog addInvoice
    //we get all information and push in other table
    QString idProd = ui->comboBoxProduct->currentData().toString();
    QString quantity = ui->lineEditQuantity->text();
    QString price = ui->lineEditPrice->text();
    QString idVat = ui->comboBoxVAT->currentData().toString();
    QString netPrice = ui->lineEditNetPrice->text();
    DialogAddInvoice a;
            a.fillTableProduct(idProd, quantity, price, idVat, netPrice);

qDebug() << "Start the fill ";
}

void DialogInvoiceProduct::on_pushButtonBack_clicked()
{
    reject();
}

void DialogInvoiceProduct::fillProduct()
{
qDebug() << "Fill product";
    //Fill comboBox in first
    ui->comboBoxProduct->clear();
    ui->comboBoxVAT->clear();
    QString fillCategory =("select vCatId, vCatWording from vCategory");
    QSqlQuery requestFillCategory (fillCategory);
    while (requestFillCategory.next()){
        int id = requestFillCategory.value("vCatId").toInt();
        QString category =requestFillCategory.value("vCatWording").toString();
        ui->comboBoxCategory->addItem(category,id);
    }
    QString fillVAT = ("select vVatId, vVatPercent from vVatPercent");
    QSqlQuery requestFillVat (fillVAT);
    while (requestFillVat.next()) {
        int idVat = requestFillVat.value("vVatId").toInt();
        QString percentVat = requestFillVat.value("vVatPercent").toString();
        ui->comboBoxVAT->addItem(percentVat,idVat);
    }
}

void DialogInvoiceProduct::on_comboBoxCategory_currentTextChanged(const QString &arg1)
{
    ui->comboBoxSubCategory->clear();
    ui->comboBoxProduct->clear();
    //Fill subCategory
    QString id = ui->comboBoxCategory->currentData().toString();
    QString fillSCategory = ("select vSCatId, vSCatWording from vFillSCategory where vCatId='"+id+"';");
    QSqlQuery requestFillSCategory (fillSCategory);
    ui->comboBoxSubCategory->addItem("Choose",0);
    while (requestFillSCategory.next()){
        int id = requestFillSCategory.value("vSCatId").toInt();
        QString  subCategory = requestFillSCategory.value("vSCatWording").toString();
        ui->comboBoxSubCategory->addItem(subCategory,id);
    }
        //Fill product
        QString fillProd = ("select vProdId, vProdWording from vFillProduct where vCatId ='"+id+"';");
        QSqlQuery requestFillProd (fillProd);
        while (requestFillProd.next()){
            int prodId = requestFillProd.value("vProdId").toInt();
            QString prodWording = requestFillProd.value("vProdWording").toString();
            ui->comboBoxProduct->addItem(prodWording, prodId);
        }
}

void DialogInvoiceProduct::on_comboBoxSubCategory_currentTextChanged(const QString &arg1)
{
    ui->comboBoxProduct->clear();
    //Fill Product
    QString idSCategory = ui->comboBoxSubCategory->currentData().toString();
    QString fillProduct =("select vProdId, vProdWording from vFillProduct where vSCatId="+idSCategory+";");
    QSqlQuery requestFillProduct (fillProduct);
    while (requestFillProduct.next()){
        int idProd = requestFillProduct.value("vProdId").toInt();
        QString products = requestFillProduct.value("vProdWording").toString();
        ui->comboBoxProduct->addItem(products,idProd);
    }
}












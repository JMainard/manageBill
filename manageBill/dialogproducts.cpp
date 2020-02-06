#include "dialogproducts.h"
#include "ui_dialogproducts.h"
#include "dialogaddproducts.h"
#include <QSqlQuery>
#include <QString>
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

void DialogProducts::on_pushButtonSearch_clicked()
{

}

void DialogProducts::on_comboBoxSCategory_currentIndexChanged(int index)
{

}

void DialogProducts::on_comboBoxCategory_currentIndexChanged(int index)
{

}

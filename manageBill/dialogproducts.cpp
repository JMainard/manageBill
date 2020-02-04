#include "dialogproducts.h"
#include "ui_dialogproducts.h"
#include "dialogaddinvoice.h"
#include "dialogaddproducts.h"

DialogProducts::DialogProducts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogProducts)
{
    ui->setupUi(this);
}

DialogProducts::~DialogProducts()
{
    delete ui;
}

void DialogProducts::on_pushButtonBack_clicked()
{
    reject();
}

void DialogProducts::on_pushButtonAddProduct_clicked()
{
    DialogAddInvoice a;
    a.exec();
}

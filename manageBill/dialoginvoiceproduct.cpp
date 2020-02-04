#include "dialoginvoiceproduct.h"
#include "ui_dialoginvoiceproduct.h"

DialogInvoiceProduct::DialogInvoiceProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInvoiceProduct)
{
    ui->setupUi(this);
}

DialogInvoiceProduct::~DialogInvoiceProduct()
{
    delete ui;
}

void DialogInvoiceProduct::on_pushButton_3_clicked()
{

}

void DialogInvoiceProduct::on_pushButton_2_clicked()
{

}

void DialogInvoiceProduct::on_pushButton_clicked()
{

}

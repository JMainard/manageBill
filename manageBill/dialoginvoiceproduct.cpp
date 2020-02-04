#include "dialoginvoiceproduct.h"
#include "ui_dialoginvoiceproduct.h"
#include "dialogaddproducts.h"

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

void DialogInvoiceProduct::on_pushButtonAddProduct_clicked()
{
    DialogAddProducts a;
    a.exec();
}

void DialogInvoiceProduct::on_pushButtonAddInvoice_clicked()
{

}

void DialogInvoiceProduct::on_pushButtonBack_clicked()
{
 reject();
}

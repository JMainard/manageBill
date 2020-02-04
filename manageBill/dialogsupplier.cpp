#include "dialogsupplier.h"
#include "ui_dialogsupplier.h"
#include "dialogaddinvoice.h"
#include "dialogadd.h"

DialogSupplier::DialogSupplier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSupplier)
{
    ui->setupUi(this);
}

DialogSupplier::~DialogSupplier()
{
    delete ui;
}

void DialogSupplier::on_pushButtonAddInvoice_clicked()
{
    DialogAddInvoice a;
    a.exec();
}

void DialogSupplier::on_pushButtonAddSupplier_clicked()
{
 DialogAdd a;
 a.exec();
}

void DialogSupplier::on_pushButtonBack_clicked()
{
    reject();
}

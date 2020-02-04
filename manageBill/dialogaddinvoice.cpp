#include "dialogaddinvoice.h"
#include "ui_dialogaddinvoice.h"
#include "dialogadd.h"

DialogAddInvoice::DialogAddInvoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddInvoice)
{
    ui->setupUi(this);
}

DialogAddInvoice::~DialogAddInvoice()
{
    delete ui;
}


void DialogAddInvoice::on_pushButtonAdd_clicked()
{

}

void DialogAddInvoice::on_pushButtonBack_clicked()
{
    reject();
}


void DialogAddInvoice::on_pushButtonAddHuman_clicked()
{
    DialogAdd a;
    a.exec();
}

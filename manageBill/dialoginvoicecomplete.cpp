#include "dialoginvoicecomplete.h"
#include "ui_dialoginvoicecomplete.h"

DialogInvoiceComplete::DialogInvoiceComplete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInvoiceComplete)
{
    ui->setupUi(this);
}

DialogInvoiceComplete::~DialogInvoiceComplete()
{
    delete ui;
}

void DialogInvoiceComplete::on_pushButtonPDFInvoice_clicked()
{

}

void DialogInvoiceComplete::on_pushButtonBack_clicked()
{
    reject();
}

void DialogInvoiceComplete::on_pushButtonBillIsPaid_clicked()
{

}

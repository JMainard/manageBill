#include "dialogclient.h"
#include "ui_dialogclient.h"
#include "dialogproducts.h"
#include "dialoginvoicecomplete.h"
#include "dialogaddinvoice.h"
#include "dialogadd.h"
DialogClient::DialogClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogClient)
{
    ui->setupUi(this);
}

DialogClient::~DialogClient()
{
    delete ui;
}

void DialogClient::on_pushButtonAddClient_clicked()
{
  DialogAdd a;
  a.exec();
}

void DialogClient::on_tableWidgetInvoice_cellDoubleClicked(int row, int column)
{
    DialogInvoiceComplete a;
    a.exec();
}

void DialogClient::on_pushButtonAddInvoice_clicked()
{
 DialogAddInvoice a;
 a.exec();
}

void DialogClient::on_pushButtonSearch_clicked()
{

}

void DialogClient::on_pushButtonBack_clicked()
{
   reject();
}

#include "dialogaddinvoice.h"
#include "ui_dialogaddinvoice.h"
#include "dialogadd.h"
#include "dialoginvoiceproduct.h"
#include "dialogadd.h"
#include <QDebug>
#include <QSqlQuery>
#include <QString>

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

void DialogAddInvoice::addInvoice(int modInvoice)
{
    mod=modInvoice;
}

void DialogAddInvoice::on_pushButtonAdd_clicked()
{
    switch (mod) {
    case 1:{
    //Request to add invoice for a  client
    }break;
    case 2:{
    //Request to add invoice for a supplier

    }break;
    case 3:{
    //Request to add invoice for a employee

    } break;

    }
}

void DialogAddInvoice::on_pushButtonBack_clicked()
{
    reject();
}


void DialogAddInvoice::on_pushButtonAddHuman_clicked()
{
    //create a switch to open add with good form
    DialogAdd addHuman;
    switch (mod) {
    case 1:{
qDebug()<< "Add human in add Invoice Client";
        addHuman.addClient();
    }break;
    case 2 :{
qDebug()<< "Add human in add Invoice Client";
        addHuman.addSupplier();
    } break;
    case 3:{
qDebug()<< "Add human in add Invoice Client";
        addHuman.addEmployee();
    }break;
    }
    addHuman.exec();
}

void DialogAddInvoice::on_pushButtonAddProduct_clicked()
{
    DialogInvoiceProduct a;
    a.exec();
}

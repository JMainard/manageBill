#include "dialogemployee.h"
#include "ui_dialogemployee.h"
#include "dialogadd.h"
#include "dialogaddinvoice.h"
#include <QString>
#include <QSqlQuery>
#include <QDebug>
DialogEmployee::DialogEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEmployee)
{
    ui->setupUi(this);
    //Init comboBow with its 2 option
    ui->comboBoxSearch->addItem("Vat",1);
    ui->comboBoxSearch->addItem("Family Name",2);
}

DialogEmployee::~DialogEmployee()
{
    delete ui;
}

void DialogEmployee::on_pushButtonBack_clicked()
{
 reject();
}

void DialogEmployee::on_pushButtonSearch_clicked()
{
    //We get comboData and Name/Vat enter in lineEdit
    QString comboBoxSearch = ui->comboBoxSearch->currentData().toString();
    QString text = ui->lineEditEmployee->text();
    switch (comboBoxSearch) {
    case "1":
        //Search by Family Name
        QString employee = ("select vPerFamilyName, vPerFirstName, vPerVATNumber, vPerStreet, vPerCity, vCouWording, vPerPostCode, vPerEmail, vPerDOYNumber, vPerPhoneMobile, vClWording from vPersonnel where vPerFamilyName='"+text+"'");
        QSqlQuery
        break;

    case "2":
        //Search by vat number
        break;
    }
}

void DialogEmployee::on_pushButtonAddEmployee_clicked()
{
    DialogAdd a;
    a.exec();

}

void DialogEmployee::on_pushButtonAddSalary_clicked()
{
    DialogAddInvoice a;
    a.exec();
}

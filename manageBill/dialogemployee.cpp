#include "dialogemployee.h"
#include "ui_dialogemployee.h"
#include "dialogadd.h"
#include "dialogaddinvoice.h"
#include <QString>
#include <QSqlQuery>
#include <QDebug>
#include "dialoginvoicecomplete.h"
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
qDebug() << "button SEARCH ";
    //clear tables
    ui->tableWidgetEmployee->clearContents();
    ui->tableWidgetInvoice->clearContents();
    //We get comboData and Name/Vat enter in lineEdit
    int comboBoxSearch = ui->comboBoxSearch->currentData().toInt();
//qDebug()<< "ID VAT OR COMPANY " << comboBoxSearch;
    QString text = ui->lineEditEmployee->text();
    QString employee;
    switch (comboBoxSearch) {
    case 2:
        //Search by Family Name
         employee = ("select vPerFamilyName, vPerFirstName, vPerVATNumber, vPerStreet, vPerCity, vCouWording, vPerPostCode, vPerEmail, vPerDOYNumber, vPerPhoneMobile, vClWording from vPersonnel where vPerFamilyName like '%"+text+"%'");
        break;
    case 1:
        //Search by vat number
         employee = ("select vPerFamilyName, vPerFirstName, vPerVATNumber, vPerStreet, vPerCity, vCouWording, vPerPostCode, vPerEmail, vPerDOYNumber, vPerPhoneMobile, vClWording from vPersonnel where vPerVATNumber like '%"+text+"%'");
        break;
    }
        QSqlQuery requestEmployee(employee);
//qDebug() <<employee;
        int lines=0;
        ui->tableWidgetEmployee->setRowCount(0);
        while (requestEmployee.next()) {
            ui->tableWidgetEmployee->setRowCount(ui->tableWidgetEmployee->rowCount()+1);
            QString familyName = requestEmployee.value("vPerFamilyName").toString();
            QString firstName = requestEmployee.value("vPerFirstName").toString();
            QString vatNumber = requestEmployee.value("vPerVATNumber").toString();
            QString street = requestEmployee.value("vPerStreet").toString();
            QString city = requestEmployee.value("vPerCity").toString();
            QString country = requestEmployee.value("vCouWording").toString();
            QString postCode = requestEmployee.value("vPerPostCode").toString();
            QString email = requestEmployee.value("vPerEmail").toString();
            QString doyNumber = requestEmployee.value("vPerDOYNumber").toString();
            QString phone = requestEmployee.value("vPerPhoneMobile").toString();
            QString contactLanguage = requestEmployee.value("vClWording").toString();

            ui->tableWidgetEmployee->setItem(lines,0,new QTableWidgetItem(familyName));
            ui->tableWidgetEmployee->setItem(lines,1,new QTableWidgetItem(firstName));
            ui->tableWidgetEmployee->setItem(lines,2,new QTableWidgetItem(vatNumber));
            ui->tableWidgetEmployee->setItem(lines,3,new QTableWidgetItem(street));
            ui->tableWidgetEmployee->setItem(lines,4,new QTableWidgetItem(city));
            ui->tableWidgetEmployee->setItem(lines,5,new QTableWidgetItem(country));
            ui->tableWidgetEmployee->setItem(lines,6,new QTableWidgetItem(postCode));
            ui->tableWidgetEmployee->setItem(lines,7,new QTableWidgetItem(email));
            ui->tableWidgetEmployee->setItem(lines,8,new QTableWidgetItem(doyNumber));
            ui->tableWidgetEmployee->setItem(lines,9,new QTableWidgetItem(phone));
            ui->tableWidgetEmployee->setItem(lines,10,new QTableWidgetItem(contactLanguage));

            lines++;
        }
        ui->tableWidgetEmployee->resizeColumnsToContents();

}

void DialogEmployee::on_pushButtonAddEmployee_clicked()
{
    DialogAdd dialogAddEmployee(this);
    dialogAddEmployee.addEmployee();
    dialogAddEmployee.exec();

}

void DialogEmployee::on_pushButtonAddSalary_clicked()
{
    DialogAddInvoice dialogAddInvoice;
    dialogAddInvoice.addInvoiceEmployee();
    dialogAddInvoice.exec();
}

void DialogEmployee::on_tableWidgetEmployee_cellDoubleClicked(int row, int column)
{
qDebug() << "Table widget cell select ";
    ui->tableWidgetInvoice->clearContents();
    //we search by vat
    QString vat = ui->tableWidgetEmployee->item(row,2)->text();
    QString employeeInvoice = ("select vBpId, vBpBillingDate, vBpPaymentDate, vBpTotalAmount, vBpReason, vBpBillPaid from vEmployeeInvoice where vPerVatNumber ='"+vat+"'");
//qDebug() << "Request : " << employeeInvoice ;
    QSqlQuery requestEmployeeInvoice (employeeInvoice);
    int lines=0;
    ui->tableWidgetInvoice->setRowCount(0);
    while (requestEmployeeInvoice.next()) {
        ui->tableWidgetInvoice->setRowCount(ui->tableWidgetInvoice->rowCount()+1);
        QString id = requestEmployeeInvoice.value("vBpId").toString();
//qDebug() << id;
        QString billingDate = requestEmployeeInvoice.value("vBpBillingDate").toString();
        QString paymentDate = requestEmployeeInvoice.value("vBpPaymentDate").toString();
        QString totalAmount = requestEmployeeInvoice.value("vBpTotalAmount").toString();
        QString reason = requestEmployeeInvoice.value("vBpReason").toString();
        QString billPaid;
        if (requestEmployeeInvoice.value("vBpBillPaid").toInt()==1){
            billPaid = "Yes";
        }
        else{
            billPaid ="No";
        }

        ui->tableWidgetInvoice->setItem(lines,0,new QTableWidgetItem(id));
        ui->tableWidgetInvoice->setItem(lines,1,new QTableWidgetItem(billingDate));
        ui->tableWidgetInvoice->setItem(lines,2,new QTableWidgetItem(paymentDate));
        ui->tableWidgetInvoice->setItem(lines,3,new QTableWidgetItem(totalAmount));
        ui->tableWidgetInvoice->setItem(lines,4,new QTableWidgetItem(reason));
        ui->tableWidgetInvoice->setItem(lines,5,new QTableWidgetItem(billPaid));
        lines++;
    }
    ui->tableWidgetInvoice->resizeColumnsToContents();
}

void DialogEmployee::on_tableWidgetInvoice_cellDoubleClicked(int row, int column)
{
qDebug() << " Double clicked Table invoice to show complete invoice";
        //We recup bcId and retake all information to have complete Invoice
        QString idInvoice = ui->tableWidgetInvoice->item(row,0)->text();
        DialogInvoiceComplete dialogCompleteInvoiceEmployee;
        dialogCompleteInvoiceEmployee.recupId(idInvoice,3); // 1 its for the mod and know if the idInvoice its ofr client,supplier or personnel
        dialogCompleteInvoiceEmployee.exec();
}

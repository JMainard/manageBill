#include "dialogbalances.h"
#include "ui_dialogbalances.h"
#include <QString>
#include <QVariant>
#include <QDebug>
#include <QSqlQuery>

DialogBalances::DialogBalances(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogBalances)
{
    ui->setupUi(this);
    fillComboBox();

}

DialogBalances::~DialogBalances()
{
    delete ui;
}

void DialogBalances::fillComboBox()
{
    //Fill with choose/client/supplier/employee
    ui->comboBoxCategory->addItem("Choose",0);
    ui->comboBoxCategory->addItem("Client",1);
    ui->comboBoxCategory->addItem("Supplier",2);
    ui->comboBoxCategory->addItem("Employee",3);
}

void DialogBalances::on_pushButtonBack_clicked()
{
    reject();
}

void DialogBalances::on_checkBoxGlobal_clicked()
{
    //Enable/disbles line edit if the global balance is checked or not
    if (ui->checkBoxGlobal->isChecked()){
        ui->lineEditVAT->setEnabled(false);
        ui->lineEditVAT->clear();
    }
    else{
        ui->lineEditVAT->setEnabled(true);
    }
}

void DialogBalances::on_pushButtonOk_clicked()
{
    //Clear contents of table minus and plus
    //and clear label
    ui->tableWidgetMinus->clearContents();
    ui->tableWidgetMinus->setRowCount(0);

    ui->tableWidgetPlus->clearContents();
    ui->tableWidgetPlus->setRowCount(0);
    ui->labelTitle->clear();
    //We get var choose  by user
    QString dateStart = ui->dateEditFrom->date().toString("yyyy-MM-dd");
    QString dateEnd = ui->dateEditTo->date().toString("yyyy-MM-dd");
    QString balanceIndividual;
    QString ttInvoice;
     if (ui->checkBoxGlobal->isChecked()){
qDebug() << "GLOBAL BALANCE :";
        //So we search a global balance
        //In first table we put all invoice client = +
        //In second table i put all invoice supplier and employee
        //3 requests
        QString clientInvoice = ("select vBcBillingDate, vBcPaymentDate, vBcTotalAmount from vClientInvoice where vBcBillingDate between '"+dateStart+"' and '"+dateEnd+"';");
        QString supplierInvoice = ("select vBsBillingDate, vBsPaymentDate, vBsTotalAmount from vSupplierInvoice where vBsBillingDate between '"+dateStart+"' and '"+dateEnd+"';");
        QString employeeInvoice = ("select vBpBillingDate, vBpPaymentDate, vBpTotalAmount from vEmployeeInvoice where vBpBillingDate between '"+dateStart+"' and '"+dateEnd+"';");

        fillTablePlus(clientInvoice);
        fillTableMinusGlobal(supplierInvoice, employeeInvoice);
        fillTTInvoiceGlobal(dateStart,dateEnd);
    }else
    {
        //So we search by employee or supplier or Client and know how many you loose
         int mod = ui->comboBoxCategory->currentData().toInt();
         QString vatNumber  = ui->lineEditVAT->text();
         switch (mod) {
         case 1: {
            //Client so in the left table  and result will be positif with bill paid or not paid
            balanceIndividual =("select vBcBillingDate, vBcPaymentDate, vBcTotalAmount from vClientInvoice where vVatNumber like '%"+vatNumber+"%' and vBcBillingDate between '"+dateStart+"' and '"+dateEnd+"';");
            fillTablePlus(balanceIndividual);
            ttInvoice = ("select sum(bcTotalAmount) as ttInvoice  from billClient inner join client on client.cliId=billClient.cliId where cliVATNumber like '%"+vatNumber+"%' and bcBillingDate between '"+dateStart+"' and '"+dateEnd+"';");
            fillTTInvoice(ttInvoice);
         }break;
         case 2:{
            //Supplier so in the right table and result will be negativ with bill paid or not paid
            balanceIndividual = ("select vBsBillingDate, vBsPaymentDate, vBsTotalAmount from vSupplierInvoice where vVatNumber like  '%"+vatNumber+"%' and vBsBillingDate between '"+dateStart+"' and '"+dateEnd+"';");
            fillTableMinus(balanceIndividual);
            ttInvoice = ("select sum(bsTotalAmount) as ttInvoice from billSupplier inner join supplier on supplier.supId=billSupplier.supId where supVATNumber like '%"+vatNumber+"%' and bsBillingDate between '"+dateStart+"' and '"+dateEnd+"'");
            fillTTInvoice(ttInvoice);
         }break;
         case 3:{
            //Employee so int the right table and result will be negativ with bill paid or not paid
            balanceIndividual = ("select vBpBillingDate, vBpPaymentDate, vBpTotalAmount from vEmployeeInvoice where vPerVatNumber like  '%"+vatNumber+"%' and vBpBillingDate between '"+dateStart+"' and '"+dateEnd+"';");
            fillTableMinus(balanceIndividual);
            ttInvoice = ("select sum(bpTotalAmount) as ttInvoice from billPersonnel inner join personnel on personnel.perId=billPersonnel.perId where perVATNumber like '%"+vatNumber+"%' and bpBillingDate between '"+dateStart+"' and '"+dateEnd+"' ");
            fillTTInvoice(ttInvoice);
         }break;
         }
     }
}

void DialogBalances::fillTablePlus(QString request)
{
qDebug() << "Fill table plus ";
qDebug() << "Request client : " << request;
    //We call this void for global balance with client and individual client when we choose client on comboBox
    QSqlQuery requestFillTablePlus (request);
    int lines =0;
    ui->tableWidgetPlus->setRowCount(0);
    while (requestFillTablePlus.next()){
        ui->tableWidgetPlus->setRowCount(ui->tableWidgetPlus->rowCount()+1);
        QString billingDate = requestFillTablePlus.value(0).toString();
        QString paymentDate = requestFillTablePlus.value(1).toString();
        QString totalAmount = requestFillTablePlus.value(2).toString();

        ui->tableWidgetPlus->setItem(lines,0,new QTableWidgetItem(billingDate));
        ui->tableWidgetPlus->setItem(lines,1,new QTableWidgetItem(paymentDate));
        ui->tableWidgetPlus->setItem(lines,2,new QTableWidgetItem(totalAmount));
        lines++;
    }
    ui->tableWidgetPlus->resizeRowsToContents();
}

void DialogBalances::fillTableMinus(QString request)
{
qDebug() << "Fill table minus";
qDebug() << request;
    //we call this void for global Balance and individual client for supplier/employee and global
    QSqlQuery requestFillTableMinus (request);
    int lines =0;
    ui->tableWidgetMinus->setRowCount(0);
    while (requestFillTableMinus.next()) {
    ui->tableWidgetMinus->setRowCount(ui->tableWidgetMinus->rowCount()+1);
    QString billingDate = requestFillTableMinus.value(0).toString();
    QString paymentDate = requestFillTableMinus.value(1).toString();
    QString totalAmount = requestFillTableMinus.value(2).toString();

    ui->tableWidgetMinus->setItem(lines,0,new QTableWidgetItem(billingDate));
    ui->tableWidgetMinus->setItem(lines,1, new QTableWidgetItem(paymentDate));
    ui->tableWidgetMinus->setItem(lines,2, new QTableWidgetItem(totalAmount));
    lines++;
    }
    ui->tableWidgetMinus->resizeRowsToContents();
}

void DialogBalances::fillTTInvoice(QString request)
{
qDebug() << "fill total Invoice ";
qDebug() << request;
    QSqlQuery requestTTInvoice(request);
    requestTTInvoice.next();
    QString total = requestTTInvoice.value("ttInvoice").toString();
    ui->labelResult->setText(total);
}

void DialogBalances::on_comboBoxCategory_currentTextChanged(const QString &arg1)
{
qDebug() << " comboBoxCategory text changed";
/*    if(arg1=="Choose" && !(ui->checkBoxGlobal->isChecked())){
        ui->pushButtonOk->setEnabled(false);
    }
    else{
        ui->pushButtonOk->setEnabled(true);
    }*/
}

void DialogBalances::fillTableMinusGlobal(QString requestSup, QString requestEmp)
{
qDebug() << "fillTableMinusGlobal";
qDebug() << "request supplier : "<<requestSup;
qDebug() << "Request employee : "<<requestEmp;
    int lines=0;
    ui->tableWidgetMinus->setRowCount(0);
    QSqlQuery requestFillTableSup (requestSup);
    while (requestFillTableSup.next()){
        ui->tableWidgetMinus->setRowCount(ui->tableWidgetMinus->rowCount()+1);
        QString billingDate = requestFillTableSup.value(0).toString();
        QString paymentDate = requestFillTableSup.value(1).toString();
        QString totalAmount = requestFillTableSup.value(2).toString();

        ui->tableWidgetMinus->setItem(lines,0,new QTableWidgetItem(billingDate));
        ui->tableWidgetMinus->setItem(lines,1,new QTableWidgetItem(paymentDate));
        ui->tableWidgetMinus->setItem(lines,2,new QTableWidgetItem(totalAmount));
        lines++;
    }
    QSqlQuery requestFillTableEmp (requestEmp);
    while (requestFillTableEmp.next()){
        ui->tableWidgetMinus->setRowCount(ui->tableWidgetMinus->rowCount()+1);
        QString billingDate = requestFillTableEmp.value(0).toString();
        QString paymentDate = requestFillTableEmp.value(1).toString();
        QString totalAmount = requestFillTableEmp.value(2).toString();

        ui->tableWidgetMinus->setItem(lines,0,new QTableWidgetItem(billingDate));
        ui->tableWidgetMinus->setItem(lines,1,new QTableWidgetItem(paymentDate));
        ui->tableWidgetMinus->setItem(lines,2,new QTableWidgetItem(totalAmount));
        lines++;
    }
    ui->tableWidgetMinus->resizeRowsToContents();
}

void DialogBalances::fillTTInvoiceGlobal(QString dateStart, QString dateEnd)
{
    //TO know the result when you check global balances
    QString ttInvoiceClient = ("select sum(bcTotalAmount) as ttInvoiceClient  from billClient inner join client on client.cliId=billClient.cliId where bcBillingDate between '"+dateStart+"' and '"+dateEnd+"';");
    QString ttInvoiceSupplier =("select sum(bsTotalAmount) as ttInvoiceSupplier from billSupplier inner join supplier on supplier.supId=billSupplier.supId where bsBillingDate between '"+dateStart+"' and '"+dateEnd+"'");
    QString ttInvoiceEmployee = ("select sum(bpTotalAmount) as ttInvoiceEmployee from billPersonnel inner join personnel on personnel.perId=billPersonnel.perId where bpBillingDate between '"+dateStart+"' and '"+dateEnd+"' ");

    qDebug() << "fill total Invoice ";
        QSqlQuery requestTTInvoiceClient(ttInvoiceClient);
        requestTTInvoiceClient.next();
        int totalClient = requestTTInvoiceClient.value("ttInvoiceClient").toInt();

        QSqlQuery requestTTInvoiceSupplier(ttInvoiceSupplier);
        requestTTInvoiceSupplier.next();
        int totalSupplier = requestTTInvoiceSupplier.value("ttInvoiceSupplier").toInt();

        QSqlQuery requestTTInvoiceEmployee(ttInvoiceEmployee);
        requestTTInvoiceEmployee.next();
        int totalEmployee = requestTTInvoiceEmployee.value("ttInvoiceEmployee").toInt();

        int total  = totalClient - (totalEmployee +totalSupplier);
        QString Total = QString::number(total);
        ui->labelResult->setText(Total);


}





















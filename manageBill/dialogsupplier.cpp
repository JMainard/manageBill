#include "dialogsupplier.h"
#include "ui_dialogsupplier.h"
#include "dialogaddinvoice.h"
#include "dialogadd.h"
#include <QDebug>
#include <QString>
#include <QSqlQuery>

DialogSupplier::DialogSupplier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSupplier)
{
    ui->setupUi(this);
    ui->comboBoxSearch->addItem("Company Name",1);
    ui->comboBoxSearch->addItem("VAT",2);
}

DialogSupplier::~DialogSupplier()
{
    delete ui;
}

void DialogSupplier::on_pushButtonAddInvoice_clicked()
{
    DialogAddInvoice dialogInvoice;
    dialogInvoice.addInvoiceSupplier();
    dialogInvoice.exec();
}

void DialogSupplier::on_pushButtonAddSupplier_clicked()
{
 DialogAdd dialogAddSupplier;
 dialogAddSupplier.addSupplier();
 dialogAddSupplier.exec();
}

void DialogSupplier::on_pushButtonBack_clicked()
{
    reject();
}

void DialogSupplier::on_pushButtonSearch_clicked()
{
qDebug() << "pushButtonSearch";
    //Clear contents of tables
    ui->tableWidgetInvoice->clearContents();
    ui->tableWidgetSupplier->clearContents();
    QString requestSup;
    int var= ui->comboBoxSearch->currentData().toInt();
    switch (var) {
    case 2:
qDebug() << "case 2";
        //Research by Vat
        requestSup =("select vSupCompanyName, vSupVatNumber, vSupPhone, vSupEmail, vSupStreet, vSupCity, vSupCountry, vSupPostCode, vSupContactLanguage, vSupDoyNumber from vSupplier where vSupVatNumber like '%"+ui->lineEditSearch->text()+"%'");
    break;
    case 1:
qDebug() << "case 1";
        //Research by companyName
        requestSup =("select vSupCompanyName, vSupVatNumber, vSupPhone, vSupEmail, vSupStreet, vSupCity, vSupCountry, vSupPostCode, vSupContactLanguage, vSupDoyNumber from vSupplier where vSupCompanyName like '%"+ui->lineEditSearch->text()+"%'");
    break;
    }
        int numLigne=0;
        ui->tableWidgetSupplier->setRowCount(0);// We set 0 row in the table
        QSqlQuery requestSupplier (requestSup);
        while(requestSupplier.next())
        {
          ui->tableWidgetSupplier->setRowCount((ui->tableWidgetSupplier->rowCount()+1)); // We add a row and write on her
          QString companyName = requestSupplier.value("vSupCompanyName").toString();
          QString vatNumber = requestSupplier.value("vSupVatNumber").toString();
          QString phone= requestSupplier.value("vSupPhone").toString();
          QString email = requestSupplier.value("vSupEmail").toString();
          QString street= requestSupplier.value("vSupStreet").toString();
          QString city= requestSupplier.value("vSupCity").toString();
          QString country= requestSupplier.value("vSupCountry").toString();
          QString postCode= requestSupplier.value("vSupPostCode").toString();
          QString contactLanguage= requestSupplier.value("vSupContactLanguage").toString();
          QString doyNumber= requestSupplier.value("vSupDoyNumber").toString();
qDebug()<< postCode;
          //We set the different data in the good column/
          ui->tableWidgetSupplier->setItem(numLigne,0,new QTableWidgetItem (companyName)); //set Order for the item in tableWidget
          ui->tableWidgetSupplier->setItem(numLigne,1,new QTableWidgetItem (vatNumber));
          ui->tableWidgetSupplier->setItem(numLigne,2,new QTableWidgetItem (phone));
          ui->tableWidgetSupplier->setItem(numLigne,3,new QTableWidgetItem (email));
          ui->tableWidgetSupplier->setItem(numLigne,4,new QTableWidgetItem (street));
          ui->tableWidgetSupplier->setItem(numLigne,5,new QTableWidgetItem (city));
          ui->tableWidgetSupplier->setItem(numLigne,6,new QTableWidgetItem (country));
          ui->tableWidgetSupplier->setItem(numLigne,7,new QTableWidgetItem (postCode));
          ui->tableWidgetSupplier->setItem(numLigne,8,new QTableWidgetItem (contactLanguage));
          ui->tableWidgetSupplier->setItem(numLigne,9,new QTableWidgetItem (doyNumber));


          numLigne++; //we change of row so we add a new for the next client

        }
        requestSup.clear();
        ui->tableWidgetSupplier->resizeRowsToContents(); //We resize table if we have a row in more
}

void DialogSupplier::on_tableWidgetSupplier_cellDoubleClicked(int row, int column)
{
      ui->tableWidgetInvoice->clearContents();
      QString vatSupplierSelect = ui->tableWidgetSupplier->item(row,1)->text();
      QString requestInvoiceSupplier = ("select vBsId, vBsBillingDate, vBsPaymentDate, vBsTotalAmount, vBsReason, vBsBillPaid from vSupplierInvoice where vVatNumber='"+vatSupplierSelect+"';");
      QSqlQuery requestInvoiceTableSupplier(requestInvoiceSupplier);
qDebug() << requestInvoiceSupplier;
      int line = 0;
       ui->tableWidgetInvoice->setRowCount(0);

       while (requestInvoiceTableSupplier.next())
       {
          ui->tableWidgetInvoice->setRowCount(ui->tableWidgetInvoice->rowCount()+1);
          QString bcId = requestInvoiceTableSupplier.value("vBsId").toString();
          QString billingDate= requestInvoiceTableSupplier.value("vBsBillingDate").toString();
          QString paymentDate= requestInvoiceTableSupplier.value("vBsPaymentDate").toString();
          QString totalAmount = requestInvoiceTableSupplier.value("vBsTotalAmount").toString();
          QString reason = requestInvoiceTableSupplier.value("vBsReason").toString();
          QString billPaid;
          if(requestInvoiceTableSupplier.value("vBsBillPaid").toInt()==0){
              billPaid ="No";
          }
          else{
              billPaid="Yes";
          }
  qDebug() <<bcId;
         ui->tableWidgetInvoice->setItem(line,0,new QTableWidgetItem(bcId));
         ui->tableWidgetInvoice->setItem(line,1,new QTableWidgetItem(billingDate));
         ui->tableWidgetInvoice->setItem(line,2,new QTableWidgetItem(paymentDate));
         ui->tableWidgetInvoice->setItem(line,3,new QTableWidgetItem(totalAmount));
         ui->tableWidgetInvoice->setItem(line,4,new QTableWidgetItem(reason));
         ui->tableWidgetInvoice->setItem(line,5,new QTableWidgetItem(billPaid));

         line++;
       }
       ui->tableWidgetInvoice->resizeRowsToContents();

}

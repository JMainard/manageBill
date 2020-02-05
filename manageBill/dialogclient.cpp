#include "dialogclient.h"
#include "ui_dialogclient.h"
#include "dialogproducts.h"
#include "dialoginvoicecomplete.h"
#include "dialogaddinvoice.h"
#include "dialogadd.h"
#include <QSqlQuery>
#include <QString>
DialogClient::DialogClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogClient)
{
    ui->setupUi(this);
    //Set up ComboBow with 2 option Vat/Name
    ui->comboBoxSearch->addItem("Family/Company Name",1);
    ui->comboBoxSearch->addItem("VAT",2);
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

/**
 * @brief DialogClient::on_pushButtonSearch_clicked
 * We check what information we have on comboBox if its Name or Vat after we take the information of lineEdit
 * After we create a request and fill first table with all client find
 */
void DialogClient::on_pushButtonSearch_clicked()
{
 //Switch to adapt request between Vat and Name and adapt between CompanyCLient or not company.
    int var =ui->comboBoxSearch->currentText().toInt();
    switch (var) {
    case 1:
        if (ui->checkBoxCompanyClient->isChecked()==true) {
            QString requestCCV=("select vCliId, vCliCompanyName, vCliVatNumber, vCliEmail, vCliPhone,vCliMobilPhone, cCliStreet , vCliCity , vCliPostCode , vCliCountry, vCliDoyNumber from vCompanyClient where vCliVatNumber like '%"+ui->lineEditSearch->text()+"%';");
            QSqlQuery requestCompanyClientVAT(requestCCV);
            int numLigne=0;
            ui->tableWidgetClient->setRowCount(0);// We set 0 row in the table

            while(requestCompanyClientVAT.next())
            {
              ui->tableWidgetClient->setRowCount((ui->tableWidgetClient->rowCount()+1)); // We add a row and write on her
              int cliId = requestCompanyClientVAT.value("vCliId").toInt();
              QString cliCompanyName = requestCompanyClientVAT.value("vCliCompanyName").toString();
              QString cliVatNumber = requestCompanyClientVAT.value("vCliVatNumber").toString();
              QString cliEmail = requestCompanyClientVAT.value("vCliEmail").toString();
              QString cliPhone= requestCompanyClientVAT.value("vCliPhone").toString();
              QString cliMobilPhone= requestCompanyClientVAT.value("vCliMobilPhone").toString();
              QString cliStreet= requestCompanyClientVAT.value("vCliStreet").toString();
              QString cliCity= requestCompanyClientVAT.value("vCliCity").toString();
              QString cliPostCode= requestCompanyClientVAT.value("vCliPostCode").toString();
              QString cliCountry= requestCompanyClientVAT.value("vCliCountry").toString();
              QString cliDoyNumber= requestCompanyClientVAT.value("vCliDoyNumber").toString();

              //We set the different data in the good column/
              ui->tableWidgetClient->setItem(numLigne,0,new QTableWidgetItem (cliCompanyName)); //set Order for the item in tableWidget
              ui->tableWidgetClient->setItem(numLigne,1,new QTableWidgetItem (cliVatNumber));
              ui->tableWidgetClient->setItem(numLigne,2,new QTableWidgetItem (cliEmail));
              ui->tableWidgetClient->setItem(numLigne,3,new QTableWidgetItem (cliPhone));
              ui->tableWidgetClient->setItem(numLigne,4,new QTableWidgetItem (cliMobilPhone));
              ui->tableWidgetClient->setItem(numLigne,5,new QTableWidgetItem (cliStreet));
              ui->tableWidgetClient->setItem(numLigne,6,new QTableWidgetItem (cliCity));
              ui->tableWidgetClient->setItem(numLigne,7,new QTableWidgetItem (cliPostCode));
              ui->tableWidgetClient->setItem(numLigne,8,new QTableWidgetItem (cliCountry));
              ui->tableWidgetClient->setItem(numLigne,9,new QTableWidgetItem (cliDoyNumber));


              numLigne++; //we change of row so we add a new for the next client

            }
            ui->tableWidgetClient->resizeRowsToContents(); //We resize table if we have a row in more
        }
        else{
            QString requestICV=("select vCliId, vCliFirstName, vCliVatNumber, vCliEmail, vCliPhone,vCliMobilPhone, cCliStreet , vCliCity , vCliPostCode , vCliCountry, vCliDoyNumber from vIndividualClient where vCliVatNumber like '%"+ui->lineEditSearch->text()+"%';" );
            QSqlQuery requestIndividualClientVAT(requestICV);

            int numLigne=0;
            ui->tableWidgetClient->setRowCount(0);// We set 0 row in the table

            while(requestIndividualClientVAT.next())
            {
              ui->tableWidgetClient->setRowCount((ui->tableWidgetClient->rowCount()+1)); // We add a row and write on her
              int cliId = requestIndividualClientVAT.value("vCliId").toInt();
              QString cliFirstName = requestIndividualClientVAT.value("vCliFirstName").toString();
              QString cliFamilyName = requestIndividualClientVAT.value("vCliFamilyName").toString();
              QString cliVatNumber = requestIndividualClientVAT.value("vCliVatNumber").toString();
              QString cliEmail = requestIndividualClientVAT.value("vCliEmail").toString();
              QString cliPhone= requestIndividualClientVAT.value("vCliPhone").toString();
              QString cliMobilPhone= requestIndividualClientVAT.value("vCliMobilPhone").toString();
              QString cliStreet= requestIndividualClientVAT.value("vCliStreet").toString();
              QString cliCity= requestIndividualClientVAT.value("vCliCity").toString();
              QString cliPostCode= requestIndividualClientVAT.value("vCliPostCode").toString();
              QString cliCountry= requestIndividualClientVAT.value("vCliCountry").toString();
              QString cliDoyNumber= requestIndividualClientVAT.value("vCliDoyNumber").toString();

              //We set the different data in the good column/
              ui->tableWidgetClient->setItem(numLigne,0,new QTableWidgetItem (cliFamilyName + cliFirstName)); //set Order for the item in tableWidget
              ui->tableWidgetClient->setItem(numLigne,1,new QTableWidgetItem (cliVatNumber));
              ui->tableWidgetClient->setItem(numLigne,2,new QTableWidgetItem (cliEmail));
              ui->tableWidgetClient->setItem(numLigne,3,new QTableWidgetItem (cliPhone));
              ui->tableWidgetClient->setItem(numLigne,4,new QTableWidgetItem (cliMobilPhone));
              ui->tableWidgetClient->setItem(numLigne,5,new QTableWidgetItem (cliStreet));
              ui->tableWidgetClient->setItem(numLigne,6,new QTableWidgetItem (cliCity));
              ui->tableWidgetClient->setItem(numLigne,7,new QTableWidgetItem (cliPostCode));
              ui->tableWidgetClient->setItem(numLigne,8,new QTableWidgetItem (cliCountry));
              ui->tableWidgetClient->setItem(numLigne,9,new QTableWidgetItem (cliDoyNumber));


              numLigne++; //we change of row so we add a new for the next client

            }
            ui->tableWidgetClient->resizeRowsToContents(); //We resize table if we have a row in more
        }
        break;
    case 2:
        if (ui->checkBoxCompanyClient->isChecked()==true) {
            QString requestCCN=("select vCliId, vCliCompanyName, vCliVatNumber, vCliEmail, vCliPhone,vCliMobilPhone, cCliStreet , vCliCity , vCliPostCode , vCliCountry, vCliDoyNumber from vCompanyClient where vCliCompanyName like '%"+ui->lineEditSearch->text()+"%';");
            QSqlQuery requestCompanyClientName(requestCCN);

            int numLigne=0;
            ui->tableWidgetClient->setRowCount(0);// We set 0 row in the table

            while(requestCompanyClientName.next())
            {
              ui->tableWidgetClient->setRowCount((ui->tableWidgetClient->rowCount()+1)); // We add a row and write on her
              int cliId = requestCompanyClientName.value("vCliId").toInt();
              QString cliCompanyName = requestCompanyClientName.value("vCliCompanyName").toString();
              QString cliVatNumber = requestCompanyClientName.value("vCliVatNumber").toString();
              QString cliEmail = requestCompanyClientName.value("vCliEmail").toString();
              QString cliPhone= requestCompanyClientName.value("vCliPhone").toString();
              QString cliMobilPhone= requestCompanyClientName.value("vCliMobilPhone").toString();
              QString cliStreet= requestCompanyClientName.value("vCliStreet").toString();
              QString cliCity= requestCompanyClientName.value("vCliCity").toString();
              QString cliPostCode= requestCompanyClientName.value("vCliPostCode").toString();
              QString cliCountry= requestCompanyClientName.value("vCliCountry").toString();
              QString cliDoyNumber= requestCompanyClientName.value("vCliDoyNumber").toString();

              //We set the different data in the good column/
              ui->tableWidgetClient->setItem(numLigne,0,new QTableWidgetItem (cliCompanyName)); //set Order for the item in tableWidget
              ui->tableWidgetClient->setItem(numLigne,1,new QTableWidgetItem (cliVatNumber));
              ui->tableWidgetClient->setItem(numLigne,2,new QTableWidgetItem (cliEmail));
              ui->tableWidgetClient->setItem(numLigne,3,new QTableWidgetItem (cliPhone));
              ui->tableWidgetClient->setItem(numLigne,4,new QTableWidgetItem (cliMobilPhone));
              ui->tableWidgetClient->setItem(numLigne,5,new QTableWidgetItem (cliStreet));
              ui->tableWidgetClient->setItem(numLigne,6,new QTableWidgetItem (cliCity));
              ui->tableWidgetClient->setItem(numLigne,7,new QTableWidgetItem (cliPostCode));
              ui->tableWidgetClient->setItem(numLigne,8,new QTableWidgetItem (cliCountry));
              ui->tableWidgetClient->setItem(numLigne,9,new QTableWidgetItem (cliDoyNumber));


              numLigne++; //we change of row so we add a new for the next client

            }
            ui->tableWidgetClient->resizeRowsToContents(); //We resize table if we have a row in more
        }
        else{
            QString requestICN=("select vCliId, vCliFirstName, vCliVatNumber, vCliEmail, vCliPhone,vCliMobilPhone, cCliStreet , vCliCity , vCliPostCode , vCliCountry, vCliDoyNumber from vIndividualClient where vCliFirstName like '%"+ui->lineEditSearch->text()+"%';");
            QSqlQuery requestIndividualClientName(requestICN);
            int numLigne=0;
            ui->tableWidgetClient->setRowCount(0);// We set 0 row in the table

            while(requestIndividualClientName.next())
            {
              ui->tableWidgetClient->setRowCount((ui->tableWidgetClient->rowCount()+1)); // We add a row and write on her
              int cliId = requestIndividualClientName.value("vCliId").toInt();
              QString cliFirstName = requestIndividualClientName.value("vCliFirstName").toString();
              QString cliFamilyName = requestIndividualClientName.value("vCliFamilyName").toString();
              QString cliVatNumber = requestIndividualClientName.value("vCliVatNumber").toString();
              QString cliEmail = requestIndividualClientName.value("vCliEmail").toString();
              QString cliPhone= requestIndividualClientName.value("vCliPhone").toString();
              QString cliMobilPhone= requestIndividualClientName.value("vCliMobilPhone").toString();
              QString cliStreet= requestIndividualClientName.value("vCliStreet").toString();
              QString cliCity= requestIndividualClientName.value("vCliCity").toString();
              QString cliPostCode= requestIndividualClientName.value("vCliPostCode").toString();
              QString cliCountry= requestIndividualClientName.value("vCliCountry").toString();
              QString cliDoyNumber= requestIndividualClientName.value("vCliDoyNumber").toString();

              //We set the different data in the good column/
              ui->tableWidgetClient->setItem(numLigne,0,new QTableWidgetItem (cliFamilyName + cliFirstName)); //set Order for the item in tableWidget
              ui->tableWidgetClient->setItem(numLigne,1,new QTableWidgetItem (cliVatNumber));
              ui->tableWidgetClient->setItem(numLigne,2,new QTableWidgetItem (cliEmail));
              ui->tableWidgetClient->setItem(numLigne,3,new QTableWidgetItem (cliPhone));
              ui->tableWidgetClient->setItem(numLigne,4,new QTableWidgetItem (cliMobilPhone));
              ui->tableWidgetClient->setItem(numLigne,5,new QTableWidgetItem (cliStreet));
              ui->tableWidgetClient->setItem(numLigne,6,new QTableWidgetItem (cliCity));
              ui->tableWidgetClient->setItem(numLigne,7,new QTableWidgetItem (cliPostCode));
              ui->tableWidgetClient->setItem(numLigne,8,new QTableWidgetItem (cliCountry));
              ui->tableWidgetClient->setItem(numLigne,9,new QTableWidgetItem (cliDoyNumber));


              numLigne++; //we change of row so we add a new for the next client

            }
            ui->tableWidgetClient->resizeRowsToContents(); //We resize table if we have a row in more

        }
    }
}

void DialogClient::on_pushButtonBack_clicked()
{
   reject();
}

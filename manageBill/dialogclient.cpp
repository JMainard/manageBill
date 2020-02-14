    #include "dialogclient.h"
#include "ui_dialogclient.h"
#include "dialogproducts.h"
#include "dialoginvoicecomplete.h"
#include "dialogaddinvoice.h"
#include "dialogadd.h"
#include <QSqlQuery>
#include <QString>
#include <QDebug>
#include <QDate>
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
  DialogAdd dialogAddClient;
  dialogAddClient.addClient();
  dialogAddClient.exec();
}

void DialogClient::on_pushButtonAddInvoice_clicked()
{
 DialogAddInvoice dialogAddInvoice;
 dialogAddInvoice.addInvoiceClient();
 dialogAddInvoice.exec();
}

/**
 * @brief DialogClient::on_pushButtonSearch_clicked
 * We check what information we have on comboBox if its Name or Vat after we take the information of lineEdit
 * After we create a request and fill first table with all client find
 */
void DialogClient::on_pushButtonSearch_clicked()
{
 //We clear contents Tables when he retry a search
    ui->tableWidgetClient->clearContents();
    ui->tableWidgetInvoice->clearContents();
 //Switch to adapt request between Vat and Name and adapt between CompanyCLient or not company.
    int var =ui->comboBoxSearch->currentData().toInt();
    switch (var) {
    case 2:
        if (ui->checkBoxCompanyClient->isChecked()==true) {
qDebug() << "Je suis dans  company client VAT ";
            QString requestCCV=("select  vCliCompanyName, vCliVatNumber, vCliEmail, vCliPhone,vCliMobilPhone, vCliStreet , vCliCity , vCliPostCode , vCliCountry, vClWording, vCliDoyNumber from vCompanyClient where vCliVatNumber like '%"+ui->lineEditSearch->text()+"%';");
//qDebug() << requestCCV;
            QSqlQuery requestCompanyClientVAT(requestCCV);
            int numLigne=0;
            ui->tableWidgetClient->setRowCount(0);// We set 0 row in the table

            while(requestCompanyClientVAT.next())
            {
              ui->tableWidgetClient->setRowCount((ui->tableWidgetClient->rowCount()+1)); // We add a row and write on her
              QString cliCompanyName = requestCompanyClientVAT.value("vCliCompanyName").toString();
              QString cliVatNumber = requestCompanyClientVAT.value("vCliVatNumber").toString();
              QString cliEmail = requestCompanyClientVAT.value("vCliEmail").toString();
              QString cliPhone= requestCompanyClientVAT.value("vCliPhone").toString();
              QString cliMobilPhone= requestCompanyClientVAT.value("vCliMobilPhone").toString();
              QString cliStreet= requestCompanyClientVAT.value("vCliStreet").toString();
              QString cliCity= requestCompanyClientVAT.value("vCliCity").toString();
              QString cliPostCode= requestCompanyClientVAT.value("vCliPostCode").toString();
              QString cliCountry= requestCompanyClientVAT.value("vCliCountry").toString();
              QString language = requestCompanyClientVAT.value("vClWording").toString();
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
              ui->tableWidgetClient->setItem(numLigne,9,new QTableWidgetItem (language));
              ui->tableWidgetClient->setItem(numLigne,10,new QTableWidgetItem (cliDoyNumber));


              numLigne++; //we change of row so we add a new for the next client

            }
            ui->tableWidgetClient->resizeRowsToContents(); //We resize table if we have a row in more
        }
        else{
qDebug()<< "Je suis dans individual Client VAT";
            QString requestICV=("select vCliFamilyName, vCliFirstName, vCliVatNumber, vCliEmail, vCliPhone, vCliMobilPhone, vCliStreet, vCliCity, vCliPostCode, vCliCountry, vClWording, vCliDoyNumber from vIndividualClient where vCliVatNumber like '%"+ui->lineEditSearch->text()+"%';" );
            QSqlQuery requestIndividualClientVAT(requestICV);
//qDebug()<< requestICV;

            int numLigne=0;
            ui->tableWidgetClient->setRowCount(0);// We set 0 row in the table

            while(requestIndividualClientVAT.next())
            {
              ui->tableWidgetClient->setRowCount((ui->tableWidgetClient->rowCount()+1)); // We add a row and write on her
              QString cliFamilyName = requestIndividualClientVAT.value("vCliFamilyName").toString();
              QString cliFirstName = requestIndividualClientVAT.value("vCliFirstName").toString();             
              QString cliVatNumber = requestIndividualClientVAT.value("vCliVatNumber").toString();
              QString cliEmail = requestIndividualClientVAT.value("vCliEmail").toString();
              QString cliPhone= requestIndividualClientVAT.value("vCliPhone").toString();
              QString cliMobilPhone= requestIndividualClientVAT.value("vCliMobilPhone").toString();
              QString cliStreet= requestIndividualClientVAT.value("vCliStreet").toString();
              QString cliCity= requestIndividualClientVAT.value("vCliCity").toString();
              QString cliPostCode= requestIndividualClientVAT.value("vCliPostCode").toString();
              QString cliCountry= requestIndividualClientVAT.value("vCliCountry").toString();
              QString language = requestIndividualClientVAT.value("vClWording").toString();
              QString cliDoyNumber= requestIndividualClientVAT.value("vCliDoyNumber").toString();

              //We set the different data in the good column/
              ui->tableWidgetClient->setItem(numLigne,0,new QTableWidgetItem (cliFamilyName +" "+cliFirstName)); //set Order for the item in tableWidget
              ui->tableWidgetClient->setItem(numLigne,1,new QTableWidgetItem (cliVatNumber));
              ui->tableWidgetClient->setItem(numLigne,2,new QTableWidgetItem (cliEmail));
              ui->tableWidgetClient->setItem(numLigne,3,new QTableWidgetItem (cliPhone));
              ui->tableWidgetClient->setItem(numLigne,4,new QTableWidgetItem (cliMobilPhone));
              ui->tableWidgetClient->setItem(numLigne,5,new QTableWidgetItem (cliStreet));
              ui->tableWidgetClient->setItem(numLigne,6,new QTableWidgetItem (cliCity));
              ui->tableWidgetClient->setItem(numLigne,7,new QTableWidgetItem (cliPostCode));
              ui->tableWidgetClient->setItem(numLigne,8,new QTableWidgetItem (cliCountry));
              ui->tableWidgetClient->setItem(numLigne,9,new QTableWidgetItem (language));
              ui->tableWidgetClient->setItem(numLigne,10,new QTableWidgetItem (cliDoyNumber));

              numLigne++; //we change of row so we add a new for the next client

            }
            ui->tableWidgetClient->resizeRowsToContents(); //We resize table if we have a row in more
        }
        break;
    case 1:
qDebug()<<"case 1 ";
        if (ui->checkBoxCompanyClient->isChecked()==true) {
qDebug()<< "Je suis dans company Client Name ";
            QString requestCCN=("select vCliCompanyName, vCliVatNumber, vCliEmail, vCliPhone,vCliMobilPhone, vCliStreet , vCliCity , vCliPostCode , vCliCountry, vClWording, vCliDoyNumber from vCompanyClient where vCliCompanyName like '%"+ui->lineEditSearch->text()+"%';");
            QSqlQuery requestCompanyClientName(requestCCN);
qDebug()<<requestCCN;

            int numLigne=0;
            ui->tableWidgetClient->setRowCount(0);// We set 0 row in the table

            while(requestCompanyClientName.next())
            {
              ui->tableWidgetClient->setRowCount((ui->tableWidgetClient->rowCount()+1)); // We add a row and write on her
              QString cliCompanyName = requestCompanyClientName.value("vCliCompanyName").toString();
              QString cliVatNumber = requestCompanyClientName.value("vCliVatNumber").toString();
              QString cliEmail = requestCompanyClientName.value("vCliEmail").toString();
              QString cliPhone= requestCompanyClientName.value("vCliPhone").toString();
              QString cliMobilPhone= requestCompanyClientName.value("vCliMobilPhone").toString();
              QString cliStreet= requestCompanyClientName.value("vCliStreet").toString();
              QString cliCity= requestCompanyClientName.value("vCliCity").toString();
              QString cliPostCode= requestCompanyClientName.value("vCliPostCode").toString();
              QString cliCountry= requestCompanyClientName.value("vCliCountry").toString();
              QString language= requestCompanyClientName.value("vClWording").toString();
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
              ui->tableWidgetClient->setItem(numLigne,9,new QTableWidgetItem (language));
              ui->tableWidgetClient->setItem(numLigne,10,new QTableWidgetItem (cliDoyNumber));


              numLigne++; //we change of row so we add a new for the next client

            }
            ui->tableWidgetClient->resizeRowsToContents(); //We resize table if we have a row in more
        }
        else{
qDebug() <<"Je suis dans individual client Name";
            QString requestICN=("select  vCliFamilyName, vCliFirstName, vCliVatNumber, vCliEmail, vCliPhone,vCliMobilPhone, vCliStreet , vCliCity , vCliPostCode , vCliCountry, vClWording,vCliDoyNumber from vIndividualClient where vCliFirstName like '%"+ui->lineEditSearch->text()+"%';");
            QSqlQuery requestIndividualClientName(requestICN);
qDebug() << requestICN;

            int numLigne=0;
            ui->tableWidgetClient->setRowCount(0);// We set 0 row in the table

            while(requestIndividualClientName.next())
            {
              ui->tableWidgetClient->setRowCount((ui->tableWidgetClient->rowCount()+1)); // We add a row and write on her
              QString cliFamilyName = requestIndividualClientName.value("vCliFamilyName").toString();
              QString cliFirstName = requestIndividualClientName.value("vCliFirstName").toString();
              QString cliVatNumber = requestIndividualClientName.value("vCliVatNumber").toString();
              QString cliEmail = requestIndividualClientName.value("vCliEmail").toString();
              QString cliPhone= requestIndividualClientName.value("vCliPhone").toString();
              QString cliMobilPhone= requestIndividualClientName.value("vCliMobilPhone").toString();
              QString cliStreet= requestIndividualClientName.value("vCliStreet").toString();
              QString cliCity= requestIndividualClientName.value("vCliCity").toString();
              QString cliPostCode= requestIndividualClientName.value("vCliPostCode").toString();
              QString cliCountry= requestIndividualClientName.value("vCliCountry").toString();
              QString language= requestIndividualClientName.value("vClWording").toString();
              QString cliDoyNumber= requestIndividualClientName.value("vCliDoyNumber").toString();

              //We set the different data in the good column/
              ui->tableWidgetClient->setItem(numLigne,0,new QTableWidgetItem (cliFamilyName +" "+cliFirstName)); //set Order for the item in tableWidget
              ui->tableWidgetClient->setItem(numLigne,1,new QTableWidgetItem (cliVatNumber));
              ui->tableWidgetClient->setItem(numLigne,2,new QTableWidgetItem (cliEmail));
              ui->tableWidgetClient->setItem(numLigne,3,new QTableWidgetItem (cliPhone));
              ui->tableWidgetClient->setItem(numLigne,4,new QTableWidgetItem (cliMobilPhone));
              ui->tableWidgetClient->setItem(numLigne,5,new QTableWidgetItem (cliStreet));
              ui->tableWidgetClient->setItem(numLigne,6,new QTableWidgetItem (cliCity));
              ui->tableWidgetClient->setItem(numLigne,7,new QTableWidgetItem (cliPostCode));
              ui->tableWidgetClient->setItem(numLigne,8,new QTableWidgetItem (cliCountry));
              ui->tableWidgetClient->setItem(numLigne,9,new QTableWidgetItem (language));
              ui->tableWidgetClient->setItem(numLigne,10,new QTableWidgetItem (cliDoyNumber));


              numLigne++; //we change of row so we add a new for the next client

            }
            ui->tableWidgetClient->resizeRowsToContents(); //We resize table if we have a row in more

        }
    }
    //switch end
}

void DialogClient::on_pushButtonBack_clicked()
{
   reject();
}

void DialogClient::on_tableWidgetClient_cellDoubleClicked(int row, int column)
{
qDebug() << "Table Widget Client doubleClicked ";
    QString invoiceVAT = ui->tableWidgetClient->item(row,1)->text();
    QString requestInvoice = ("select vBcId, vBcBillingDate, vBcPaymentDate, vBcTotalAmount, vBcReason, vBcBillPaid from vClientInvoice where vVatNumber = '"+invoiceVAT+"';");
    QSqlQuery requestInvoiceTable(requestInvoice);
qDebug() << requestInvoice;
    int line = 0;
     ui->tableWidgetInvoice->setRowCount(0);

     while (requestInvoiceTable.next())
     {
        ui->tableWidgetInvoice->setRowCount(ui->tableWidgetInvoice->rowCount()+1);
        QString bcId = requestInvoiceTable.value("vBcId").toString();
        QString billingDate= requestInvoiceTable.value("vBcBillingDate").toString();
        QString paymentDate= requestInvoiceTable.value("vBcPaymentDate").toString();
        QString totalAmount = requestInvoiceTable.value("vBcTotalAmount").toString();
        QString reason = requestInvoiceTable.value("vBcReason").toString();
        QString billPaid;
        if(requestInvoiceTable.value("vBcBillPaid").toInt()==0){
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

void DialogClient::on_tableWidgetInvoice_cellDoubleClicked(int row, int column)
{
qDebug() << " Double clicked Table invoice to show complete invoice";
    //We recup bcId and retake all information to have complete Invoice
    QString idInvoice = ui->tableWidgetInvoice->item(row,0)->text();
    DialogInvoiceComplete dialogCompleteInvoiceClient;
    dialogCompleteInvoiceClient.recupId(idInvoice,1); // 1 its for the mod and know if the idInvoice its ofr client,supplier or personnel
    dialogCompleteInvoiceClient.exec();
}

#include "dialogadd.h"
#include "ui_dialogadd.h"
#include <QDebug>
#include <QString>
#include <QSqlQuery>

DialogAdd::DialogAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAdd)
{
    ui->setupUi(this);
    fillCountry();
    fillLanguage();

}

DialogAdd::~DialogAdd()
{
    delete ui;
}

void DialogAdd::addEmployee()
{
qDebug()<< " je veux add un employee";
    ui->checkBoxCompanyClient->setVisible(false);
    mod = 1;
}

void DialogAdd::addClient()
{
qDebug() <<" je veux add un nouveau client";
    mod =2;

 }

void DialogAdd::addSupplier()
{
    qDebug() << "je veux add un nouveau fournisseur";
    ui->lineEditFirstName->setVisible(false);
    ui->labelFirstName->setVisible(false);
    ui->labelIcon2Name->setVisible(false);
    ui->checkBoxCompanyClient->setVisible(false);
    mod = 3;

}

void DialogAdd::on_pushButtonBack_clicked()
{
   reject();
}

void DialogAdd::on_pushButtonAdd_clicked()
{
    //Switch to know what we add employee/client/supplier
    //Basic info for the 3 option ;
    QString phone = ui->lineEditPhone->text();
    QString mobilePhone = ui->lineEditMobilePhone->text();
    QString street = ui->lineEditStreet->text();
    QString city = ui->lineEditCity->text();
    QString postCode = ui->lineEditPostCode->text();
    QString email = ui->lineEditEmail->text();
    QString vat = ui->lineEditVAT->text();
    QString doy = ui->lineEditDOY->text();
    QString language = ui->comboBoxLanguage->currentData().toString();
    QString country = ui->comboBoxCountry->currentData().toString();
qDebug() << "Language Id : " << language << "Country Id" << country ;

    QString add;

    switch (mod) {
    case 1: {
        //We add an employee
        //We get int by max id
        QString getIdPersonnel =("select max(perId)+1 as idPerso from personnel");
        QSqlQuery requestIdPersonnel(getIdPersonnel);
        requestIdPersonnel.next();
        QString  idPerso= requestIdPersonnel.value("idPerso").toString();
        QString firstNameEmployee = ui->lineEditFirstName->text();
        QString familyNameEmployee = ui->lineEditName->text();
        add =("insert into personnel values ("+idPerso+",'"+firstNameEmployee+"','"+familyNameEmployee+"','"+phone+"','"+mobilePhone+"','"+street+"','"+postCode+"','"+city+"','"+email+"','"+vat+"','"+doy+"',"+language+","+country+")");
        typeAdd = "personnel";
    }break;

    case 2: {
        //We add a client
        QString getIdClient =("select max(cliId)+1 as idClient  from client");
        QSqlQuery requestIdClient (getIdClient);
        requestIdClient.next();
        QString  idClient=  requestIdClient.value("idClient").toString();

        QString companyNameClient;
        QString firstNameClient;
        QString familyNameClient;
        QString companyClient;
        if (ui->checkBoxCompanyClient->isChecked()){
            //client is a company
            companyNameClient= ui->lineEditName->text();
            firstNameClient =" ";
            familyNameClient=" ";
            companyClient="1";
            typeAdd = "company Client";
        }
        else {
        //client is a individual person
            companyNameClient=" ";
            firstNameClient = ui->lineEditFirstName->text();
            familyNameClient = ui->lineEditName->text();
            companyClient="0";
            typeAdd ="individualClient";
        }
         add = ("insert into client values ("+idClient+",'"+phone+"','"+mobilePhone+"','"+street+"','"+city+"','"+postCode+"','"+email+"','"+companyNameClient+"','"+firstNameClient+"','"+familyNameClient+"',"+companyClient+",'"+vat+"','"+doy+"',"+language+","+country+");");
    } break;
    case 3:{
        //We add a supplier
        //we get id
        QString getIdSupplier =("select max(supId)+1 as idSupplier from supplier");
        QSqlQuery requestIdSupplier(getIdSupplier);
        requestIdSupplier.next();
        QString  idSupplier=  requestIdSupplier.value("idSupplier").toString();
        QString companySupplier =ui->lineEditName->text();

         add=("insert into supplier values ("+idSupplier+",'"+companySupplier+"','"+phone+"','"+mobilePhone+"','"+street+"','"+city+"','"+postCode+"','"+email+"','"+vat+"','"+doy+"',"+language+","+country+");");
        typeAdd ="Add supplier";
    }break;
    }

    QSqlQuery requestAdd (add);
qDebug() << "Request "<< add;
qDebug()<< typeAdd;
}

void DialogAdd::fillCountry()
{
qDebug() << "Fill Country";
//Fill comboBox for country
 QString fillCountry =("select vCouId,vCouWording,vCouAlpha2 from vFillCountry");
 QSqlQuery requestFillCountry (fillCountry);
qDebug() << fillCountry;
 while (requestFillCountry.next()) {
     int id = requestFillCountry.value("vCouId").toInt();
     QString country = requestFillCountry.value("vCouWording").toString();
     QString alpha = requestFillCountry.value("vCouAlpha2").toString();
     QString name = country+ " ["+alpha+"]";
     ui->comboBoxCountry->addItem(name,id);

 }
}

void DialogAdd::fillLanguage()
{
qDebug() << "Fill Language";
//Fill comboBox for language
    QString fillLanguage =("select vClId,vClWording,vClAlpha2 from vFillLanguage");
    QSqlQuery requestFillLanguage (fillLanguage);
qDebug() << fillLanguage;

    while (requestFillLanguage.next()) {
        int id = requestFillLanguage.value("vClId").toInt();
        QString language =requestFillLanguage.value("vClWording").toString();
        QString alpha2 = requestFillLanguage.value("vClAlpha2").toString();
        QString name = language+" ["+alpha2+"]";

        ui->comboBoxLanguage->addItem(name,id);
    }
}


void DialogAdd::on_checkBoxCompanyClient_clicked()
{
    if(ui->checkBoxCompanyClient->isChecked()){
        //So we have a companyCLient so we disabled line edit first name
        ui->lineEditFirstName->setEnabled(false);
        ui->lineEditFirstName->clear();
    }
    else {
        ui->lineEditFirstName->setEnabled(true);
    }
}

#include "dialogconnectdatabase.h"
#include "ui_dialogconnectdatabase.h"
#include <QSqlQuery>
#include <QString>
#include <QSqlDatabase>

DialogConnectDatabase::DialogConnectDatabase(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConnectDatabase)
{
    ui->setupUi(this);
}

DialogConnectDatabase::~DialogConnectDatabase()
{
    delete ui;
}

void DialogConnectDatabase::on_pushButtonConnect_clicked()
{
    QSqlDatabase maBase = QSqlDatabase::addDatabase("QMYSQL");
    maBase.setHostName(ui->lineEditHostName->text());
    maBase.setDatabaseName(ui->lineEditDbName->text());
    maBase.setUserName(ui->lineEditUserName->text());
    maBase.setPassword(ui->lineEditPassword->text());
    bool bddOK = maBase.open();
    if(bddOK){
        accept();
    }
    else{
        ui->labelMessage->setText("Error, retry with good information");
    }
}

void DialogConnectDatabase::on_pushButtonCancel_clicked()
{
  reject();
}

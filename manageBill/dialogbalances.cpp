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
}

DialogBalances::~DialogBalances()
{
    delete ui;
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
    QDate date = ui->dateEditFrom->date();
    QDate dateEnd = ui->dateEditTo->date();
qDebug() << date;
qDebug() << dateEnd;

}

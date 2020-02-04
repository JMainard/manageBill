#include "dialogbalances.h"
#include "ui_dialogbalances.h"

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

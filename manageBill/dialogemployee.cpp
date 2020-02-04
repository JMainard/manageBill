#include "dialogemployee.h"
#include "ui_dialogemployee.h"
#include "dialogadd.h"

DialogEmployee::DialogEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogEmployee)
{
    ui->setupUi(this);
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

}

void DialogEmployee::on_pushButtonAddEmployee_clicked()
{
    DialogAdd a;
    a.exec();

}

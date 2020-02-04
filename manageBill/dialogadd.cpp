#include "dialogadd.h"
#include "ui_dialogadd.h"

DialogAdd::DialogAdd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAdd)
{
    ui->setupUi(this);
}

DialogAdd::~DialogAdd()
{
    delete ui;
}

void DialogAdd::on_pushButtonBack_clicked()
{
   reject();
}

void DialogAdd::on_pushButtonAdd_clicked()
{


}

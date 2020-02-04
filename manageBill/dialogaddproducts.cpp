#include "dialogaddproducts.h"
#include "ui_dialogaddproducts.h"

DialogAddProducts::DialogAddProducts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddProducts)
{
    ui->setupUi(this);
}

DialogAddProducts::~DialogAddProducts()
{
    delete ui;
}

void DialogAddProducts::on_pushButtonAdd_clicked()
{

}

void DialogAddProducts::on_pushButtonBack_clicked()
{
 reject();
}

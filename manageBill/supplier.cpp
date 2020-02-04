#include "supplier.h"
#include "ui_supplier.h"

supplier::supplier(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::supplier)
{
    ui->setupUi(this);
}

supplier::~supplier()
{
    delete ui;
}

#include "products.h"
#include "ui_products.h"

products::products(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::products)
{
    ui->setupUi(this);
}

products::~products()
{
    delete ui;
}

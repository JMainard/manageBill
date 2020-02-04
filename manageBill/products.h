#ifndef PRODUCTS_H
#define PRODUCTS_H
#include <QDialog>
#include <QMainWindow>

namespace Ui {
class products;
}

class products : public QDialog
{
    Q_OBJECT

public:
    explicit products(QWidget *parent = 0);
    ~products();

private:
    Ui::products *ui;
};

#endif // PRODUCTS_H

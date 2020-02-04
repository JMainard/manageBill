#ifndef SUPPLIER_H
#define SUPPLIER_H
#include <QDialog>
#include <QMainWindow>

namespace Ui {
class supplier;
}

class supplier : public QDialog
{
    Q_OBJECT

public:
    explicit supplier(QWidget *parent = 0);
    ~supplier();

private:
    Ui::supplier *ui;
};

#endif // SUPPLIER_H

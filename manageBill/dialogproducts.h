#ifndef DIALOGPRODUCTS_H
#define DIALOGPRODUCTS_H

#include <QDialog>

namespace Ui {
class DialogProducts;
}

class DialogProducts : public QDialog
{
    Q_OBJECT

public:
    explicit DialogProducts(QWidget *parent = 0);
    ~DialogProducts();

private slots:
    void on_pushButtonBack_clicked();

    void on_pushButtonAddProduct_clicked();

private:
    Ui::DialogProducts *ui;
};

#endif // DIALOGPRODUCTS_H

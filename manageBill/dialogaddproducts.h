#ifndef DIALOGADDPRODUCTS_H
#define DIALOGADDPRODUCTS_H

#include <QDialog>

namespace Ui {
class DialogAddProducts;
}

class DialogAddProducts : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddProducts(QWidget *parent = 0);
    ~DialogAddProducts();

private slots:

    void on_pushButtonAdd_clicked();

    void on_pushButtonBack_clicked();

private:
    Ui::DialogAddProducts *ui;
};

#endif // DIALOGADDPRODUCTS_H

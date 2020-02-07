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
    void fillComboBoxCategory();

    void on_pushButtonBack_clicked();

    void on_pushButtonAddProduct_clicked();

    void on_pushButtonSearch_clicked();

    void on_comboBoxCategory_currentTextChanged(const QString &arg1);

    void on_comboBoxSCategory_currentTextChanged(const QString &arg1);

private:
    Ui::DialogProducts *ui;
};

#endif // DIALOGPRODUCTS_H

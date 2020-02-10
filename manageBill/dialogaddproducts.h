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
    void fillComboBoxTOQ();

    void on_pushButtonAdd_clicked();

    void on_pushButtonBack_clicked();

    void fillComboBoxCategory();

    void on_comboBoxCategory_currentTextChanged(const QString &arg1);

    void on_comboBoxSCategory_currentTextChanged(const QString &arg1);

    void on_comboBoxTOQ_currentTextChanged(const QString &arg1);

private:
    Ui::DialogAddProducts *ui;
};

#endif // DIALOGADDPRODUCTS_H

#ifndef DIALOGADDINVOICE_H
#define DIALOGADDINVOICE_H

#include <QDialog>

namespace Ui {
class DialogAddInvoice;
}

class DialogAddInvoice : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddInvoice(QWidget *parent = 0);
    ~DialogAddInvoice();
    void addInvoice(int modInvoice);
    int mod;
    int lines;
    int id ; //SupId/CliId/PerId

private slots:
    void on_pushButtonAdd_clicked();

    void on_pushButtonBack_clicked();

    void on_pushButtonAddHuman_clicked();

    void on_pushButtonSearch_clicked();

    void on_comboBoxCategory_2_currentTextChanged(const QString &arg1);

    void on_comboBoxSCategory_currentTextChanged(const QString &arg1);

    void on_pushButtonAddNewProduct_clicked();

    void on_pushButtonAddProductToInvoice_clicked();

    void fillProduct();

    void insertProduct();

private:
    Ui::DialogAddInvoice *ui;
};

#endif // DIALOGADDINVOICE_H

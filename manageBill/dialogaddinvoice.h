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
    void fillTableProduct(QString prodId, QString quantity, QString price, QString vatId, QString netPrice);
    int mod;
    int lines;

private slots:
    void on_pushButtonAdd_clicked();

    void on_pushButtonBack_clicked();

    void on_pushButtonAddHuman_clicked();

    void on_pushButtonAddProduct_clicked();

    void on_pushButtonSearch_clicked();

private:
    Ui::DialogAddInvoice *ui;
};

#endif // DIALOGADDINVOICE_H

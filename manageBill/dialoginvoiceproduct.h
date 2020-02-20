#ifndef DIALOGINVOICEPRODUCT_H
#define DIALOGINVOICEPRODUCT_H
#include "dialogaddinvoice.h"
#include <QDialog>

namespace Ui {
class DialogInvoiceProduct;
}

class DialogInvoiceProduct : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInvoiceProduct(QWidget *parent = 0);
    ~DialogInvoiceProduct();

private slots:


    void on_pushButtonAddProduct_clicked();

    void on_pushButtonAddInvoice_clicked();

    void on_pushButtonBack_clicked();

    void fillProduct();

    void on_comboBoxCategory_currentTextChanged(const QString &arg1);

    void on_comboBoxSubCategory_currentTextChanged(const QString &arg1);

private:
    Ui::DialogInvoiceProduct *ui;
};

#endif // DIALOGINVOICEPRODUCT_H

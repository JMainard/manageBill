#ifndef DIALOGINVOICEPRODUCT_H
#define DIALOGINVOICEPRODUCT_H

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

private:
    Ui::DialogInvoiceProduct *ui;
};

#endif // DIALOGINVOICEPRODUCT_H

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

private:
    Ui::DialogInvoiceProduct *ui;
};

#endif // DIALOGINVOICEPRODUCT_H

#ifndef DIALOGINVOICECOMPLETE_H
#define DIALOGINVOICECOMPLETE_H

#include <QDialog>

namespace Ui {
class DialogInvoiceComplete;
}

class DialogInvoiceComplete : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInvoiceComplete(QWidget *parent = 0);
    ~DialogInvoiceComplete();

private slots:
    void on_pushButtonPDFInvoice_clicked();

    void on_pushButtonBack_clicked();

private:
    Ui::DialogInvoiceComplete *ui;
};

#endif // DIALOGINVOICECOMPLETE_H

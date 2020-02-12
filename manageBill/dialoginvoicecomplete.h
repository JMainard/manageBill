#ifndef DIALOGINVOICECOMPLETE_H
#define DIALOGINVOICECOMPLETE_H
#include <QString>
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

    void recupId(QString idInvoice, int mod);
    QString id;
    int modF;

private slots:
    void on_pushButtonPDFInvoice_clicked();

    void on_pushButtonBack_clicked();

    void on_pushButtonBillIsPaid_clicked();

    void fillTableProduct(QString product); //var where i write the request

    void fillLabel(QString invoice, int mod); //var where i write the request to know basic ingof of invoice

private:
    Ui::DialogInvoiceComplete *ui;
};

#endif // DIALOGINVOICECOMPLETE_H

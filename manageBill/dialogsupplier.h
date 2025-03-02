#ifndef DIALOGSUPPLIER_H
#define DIALOGSUPPLIER_H

#include <QDialog>

namespace Ui {
class DialogSupplier;
}

class DialogSupplier : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSupplier(QWidget *parent = 0);
    ~DialogSupplier();

private slots:
    void on_pushButtonAddInvoice_clicked();

    void on_pushButtonAddSupplier_clicked();

    void on_pushButtonBack_clicked();

    void on_pushButtonSearch_clicked();

    void on_tableWidgetSupplier_cellDoubleClicked(int row, int column);

    void on_tableWidgetInvoice_cellDoubleClicked(int row, int column);

private:
    Ui::DialogSupplier *ui;
};

#endif // DIALOGSUPPLIER_H

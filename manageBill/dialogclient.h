#ifndef DIALOGCLIENT_H
#define DIALOGCLIENT_H

#include <QDialog>

namespace Ui {
class DialogClient;
}

class DialogClient : public QDialog
{
    Q_OBJECT

public:
    explicit DialogClient(QWidget *parent = 0);
    ~DialogClient();

private slots:
    void on_pushButtonAddClient_clicked();

    void on_tableWidgetInvoice_cellDoubleClicked(int row, int column);

    void on_pushButtonAddInvoice_clicked();

    void on_pushButtonSearch_clicked();

    void on_pushButtonBack_clicked();

    void on_tableWidgetClient_cellDoubleClicked(int row, int column);

private:
    Ui::DialogClient *ui;
};

#endif // DIALOGCLIENT_H

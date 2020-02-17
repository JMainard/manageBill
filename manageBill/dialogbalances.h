#ifndef DIALOGBALANCES_H
#define DIALOGBALANCES_H

#include <QDialog>

namespace Ui {
class DialogBalances;
}

class DialogBalances : public QDialog
{
    Q_OBJECT

public:
    explicit DialogBalances(QWidget *parent = 0);
    ~DialogBalances();

private slots:
    void fillComboBox();

    void on_pushButtonBack_clicked();

    void on_checkBoxGlobal_clicked();

    void on_pushButtonOk_clicked();

    void fillTablePlus(QString request);

    void fillTableMinus( QString request);

    void fillTTInvoice (QString request);

    void on_comboBoxCategory_currentTextChanged(const QString &arg1);

    void fillTableMinusGlobal(QString requestSup, QString requestEmp);

    void fillTTInvoiceGlobal(QString dateStart, QString dateEnd);

private:
    Ui::DialogBalances *ui;
};

#endif // DIALOGBALANCES_H

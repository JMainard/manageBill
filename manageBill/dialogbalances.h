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
    void on_pushButtonBack_clicked();

    void on_checkBoxGlobal_clicked();

    void on_pushButtonOk_clicked();

private:
    Ui::DialogBalances *ui;
};

#endif // DIALOGBALANCES_H

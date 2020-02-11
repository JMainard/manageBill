#ifndef DIALOGEMPLOYEE_H
#define DIALOGEMPLOYEE_H

#include <QDialog>

namespace Ui {
class DialogEmployee;
}

class DialogEmployee : public QDialog
{
    Q_OBJECT

public:
    explicit DialogEmployee(QWidget *parent = 0);
    ~DialogEmployee();

private slots:
    void on_pushButtonBack_clicked();

    void on_pushButtonSearch_clicked();

    void on_pushButtonAddEmployee_clicked();

    void on_pushButtonAddSalary_clicked();

    void on_tableWidgetEmployee_cellDoubleClicked(int row, int column);

private:
    Ui::DialogEmployee *ui;
};

#endif // DIALOGEMPLOYEE_H

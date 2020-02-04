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

private:
    Ui::DialogEmployee *ui;
};

#endif // DIALOGEMPLOYEE_H

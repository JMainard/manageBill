#ifndef DIALOGADD_H
#define DIALOGADD_H

#include <QDialog>

namespace Ui {
class DialogAdd;
}

class DialogAdd : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAdd(QWidget *parent = 0);
    ~DialogAdd();
    void addEmployee();
    void addClient();
    void addSupplier();
    QString typeAdd;
    int mod; //to know if its employee/client/supplier

private slots:
    void on_pushButtonBack_clicked();

    void on_pushButtonAdd_clicked();

    void fillCountry();

    void fillLanguage();

    void on_checkBoxCompanyClient_clicked();

private:
    Ui::DialogAdd *ui;
};

#endif // DIALOGADD_H

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

private slots:
    void on_pushButtonBack_clicked();

    void on_pushButtonAdd_clicked();

private:
    Ui::DialogAdd *ui;
};

#endif // DIALOGADD_H

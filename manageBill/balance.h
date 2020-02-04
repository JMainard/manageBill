#ifndef BALANCE_H
#define BALANCE_H
#include <QDialog>
#include <QMainWindow>

namespace Ui {
class balance;
}

class balance : public QDialog
{
    Q_OBJECT

public:
    explicit balance(QWidget *parent = 0);
    ~balance();

private:
    Ui::balance *ui;
};

#endif // BALANCE_H

#ifndef CLIENT_H
#define CLIENT_H
#include <QDialog>
#include <QMainWindow>

namespace Ui {
class client;
}

class client : public QDialog
{
    Q_OBJECT

public:
    explicit client(QWidget *parent = 0);
    ~client();

private:
    Ui::client *ui;
};

#endif // CLIENT_H

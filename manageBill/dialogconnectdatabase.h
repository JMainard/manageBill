#ifndef DIALOGCONNECTDATABASE_H
#define DIALOGCONNECTDATABASE_H

#include <QDialog>

namespace Ui {
class DialogConnectDatabase;
}

class DialogConnectDatabase : public QDialog
{
    Q_OBJECT

public:
    explicit DialogConnectDatabase(QWidget *parent = 0);
    ~DialogConnectDatabase();

private slots:
    void on_pushButtonConnect_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::DialogConnectDatabase *ui;
};

#endif // DIALOGCONNECTDATABASE_H

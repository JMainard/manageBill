#include "mainwindow.h"
#include <QApplication>
#include <QIcon>
#include "dialogconnectdatabase.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DialogConnectDatabase dConnect;
    if(dConnect.exec()==QDialog::Accepted)
    {
        MainWindow w;
        w.show();
        return a.exec();
    }

}

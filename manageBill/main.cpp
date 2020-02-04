#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QIcon>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QSqlDatabase maBase = QSqlDatabase::addDatabase("QMYSQL");
    maBase.setHostName("localhost");
    maBase.setDatabaseName("manageBill");
    maBase.setUserName("jeremy");
    maBase.setPassword("jeremym");
    bool bddOK = maBase.open();
    if(bddOK){
    MainWindow w;
    w.show();
    return a.exec();
    }
    else{
        return 1;
    }
}

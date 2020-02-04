#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>
#include "dialogbalances.h"
#include "dialogclient.h"
#include "dialogproducts.h"
#include "dialogsupplier.h"
#include <QFileDialog>
#include <QDialog>
#include "dialogemployee.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    //Offre une demande deconfirmation/attention si on apuie sur la fleche en haut a droite de la main windows
    int resultat= QMessageBox::warning(this,tr("AppliGestion"),tr("Are you sure to close manageBill"),QMessageBox::Yes|QMessageBox::No, QMessageBox::No);
    switch(resultat) //Sert de condition si oui sinon comme une boucle if
    {
      case QMessageBox::Yes:
        event->accept();
        break;
       case QMessageBox::No:
        event->ignore();
        break;
    }

}

void MainWindow::on_pushButtonQuit_clicked()
{
    close();
}

void MainWindow::on_pushButtonBalance_clicked()
{
   DialogBalances a;
   a.exec();
}

void MainWindow::on_pushButtonSupplier_clicked()
{
   DialogSupplier a;
   a.exec();
}

void MainWindow::on_pushButtonClient_clicked()
{
   DialogClient a;
   a.exec();
}

void MainWindow::on_pushButtonProducts_clicked()
{
   DialogProducts a;
   a.exec();
}

void MainWindow::on_pushButtonEmployees_clicked()
{
    DialogEmployee a;
    a.exec();
}

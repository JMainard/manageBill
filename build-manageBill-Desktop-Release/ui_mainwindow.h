/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonBalance;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelWelcome;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonClient;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonSupplier;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonEmployees;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonProducts;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonQuit;
    QSpacerItem *horizontalSpacer_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(630, 411);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/receipt32.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(248, 245, 245);"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonBalance = new QPushButton(centralWidget);
        pushButtonBalance->setObjectName(QStringLiteral("pushButtonBalance"));
        pushButtonBalance->setAutoFillBackground(false);
        pushButtonBalance->setStyleSheet(QLatin1String("font: 75 14pt \"URW Palladio L\";\n"
"selection-color: rgb(52, 101, 164);\n"
""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/balance24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBalance->setIcon(icon1);
        pushButtonBalance->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(pushButtonBalance);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelWelcome = new QLabel(centralWidget);
        labelWelcome->setObjectName(QStringLiteral("labelWelcome"));
        labelWelcome->setStyleSheet(QStringLiteral("font: 75 17pt \"URW Palladio L\";"));

        horizontalLayout->addWidget(labelWelcome);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButtonClient = new QPushButton(centralWidget);
        pushButtonClient->setObjectName(QStringLiteral("pushButtonClient"));
        pushButtonClient->setStyleSheet(QLatin1String("\n"
"font: 75 14pt \"URW Palladio L\";"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/client24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonClient->setIcon(icon2);
        pushButtonClient->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(pushButtonClient);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButtonSupplier = new QPushButton(centralWidget);
        pushButtonSupplier->setObjectName(QStringLiteral("pushButtonSupplier"));
        pushButtonSupplier->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/image/supplier24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSupplier->setIcon(icon3);
        pushButtonSupplier->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(pushButtonSupplier);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButtonEmployees = new QPushButton(centralWidget);
        pushButtonEmployees->setObjectName(QStringLiteral("pushButtonEmployees"));
        pushButtonEmployees->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icon/image/employeeG24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonEmployees->setIcon(icon4);
        pushButtonEmployees->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(pushButtonEmployees);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        pushButtonProducts = new QPushButton(centralWidget);
        pushButtonProducts->setObjectName(QStringLiteral("pushButtonProducts"));
        pushButtonProducts->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icon/image/cart32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonProducts->setIcon(icon5);
        pushButtonProducts->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(pushButtonProducts);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        pushButtonQuit = new QPushButton(centralWidget);
        pushButtonQuit->setObjectName(QStringLiteral("pushButtonQuit"));
        pushButtonQuit->setStyleSheet(QLatin1String("font: 75 14pt \"URW Palladio L\";\n"
"color: rgb(204, 0, 0);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icon/image/cancel32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonQuit->setIcon(icon6);

        horizontalLayout_4->addWidget(pushButtonQuit);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);


        gridLayout->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 630, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Menu manageBill", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        pushButtonBalance->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pushButtonBalance->setText(QApplication::translate("MainWindow", "&Balance", Q_NULLPTR));
        labelWelcome->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Welcome !</p><p align=\"center\"><br/>Select your action</p></body></html>", Q_NULLPTR));
        pushButtonClient->setText(QApplication::translate("MainWindow", "&Clients", Q_NULLPTR));
        pushButtonSupplier->setText(QApplication::translate("MainWindow", "&Suppliers", Q_NULLPTR));
        pushButtonEmployees->setText(QApplication::translate("MainWindow", "&Employees", Q_NULLPTR));
        pushButtonProducts->setText(QApplication::translate("MainWindow", "&Products", Q_NULLPTR));
        pushButtonQuit->setText(QApplication::translate("MainWindow", "&Quit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

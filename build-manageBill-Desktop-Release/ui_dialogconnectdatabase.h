/********************************************************************************
** Form generated from reading UI file 'dialogconnectdatabase.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONNECTDATABASE_H
#define UI_DIALOGCONNECTDATABASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogConnectDatabase
{
public:
    QGridLayout *gridLayout_6;
    QLabel *labelMessage;
    QGridLayout *gridLayout_4;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QLabel *labelTitle;
    QGridLayout *gridLayout_2;
    QLabel *labelDbName;
    QLineEdit *lineEditDbName;
    QGridLayout *gridLayout;
    QLabel *labelHostName;
    QLineEdit *lineEditHostName;
    QGridLayout *gridLayout_3;
    QLabel *labelUserName;
    QLineEdit *lineEditUserName;
    QGridLayout *gridLayout_5;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *DialogConnectDatabase)
    {
        if (DialogConnectDatabase->objectName().isEmpty())
            DialogConnectDatabase->setObjectName(QStringLiteral("DialogConnectDatabase"));
        DialogConnectDatabase->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/receipt16.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogConnectDatabase->setWindowIcon(icon);
        gridLayout_6 = new QGridLayout(DialogConnectDatabase);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        labelMessage = new QLabel(DialogConnectDatabase);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));
        labelMessage->setStyleSheet(QLatin1String("color: rgb(204, 0, 0);\n"
"font: 75 14pt \"URW Palladio L\";"));

        gridLayout_6->addWidget(labelMessage, 5, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelPassword = new QLabel(DialogConnectDatabase);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));
        labelPassword->setStyleSheet(QLatin1String("font: 75 12pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_4->addWidget(labelPassword, 0, 0, 1, 1);

        lineEditPassword = new QLineEdit(DialogConnectDatabase);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));
        lineEditPassword->setStyleSheet(QStringLiteral("font: 75 12pt \"URW Palladio L\";"));

        gridLayout_4->addWidget(lineEditPassword, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 4, 0, 1, 1);

        labelTitle = new QLabel(DialogConnectDatabase);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QLatin1String("font: 75 15pt \"URW Palladio L\";\n"
"color:rgb(32, 74, 135)"));

        gridLayout_6->addWidget(labelTitle, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelDbName = new QLabel(DialogConnectDatabase);
        labelDbName->setObjectName(QStringLiteral("labelDbName"));
        labelDbName->setStyleSheet(QLatin1String("font: 75 12pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_2->addWidget(labelDbName, 0, 0, 1, 1);

        lineEditDbName = new QLineEdit(DialogConnectDatabase);
        lineEditDbName->setObjectName(QStringLiteral("lineEditDbName"));
        lineEditDbName->setStyleSheet(QStringLiteral("font: 75 12pt \"URW Palladio L\";"));

        gridLayout_2->addWidget(lineEditDbName, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelHostName = new QLabel(DialogConnectDatabase);
        labelHostName->setObjectName(QStringLiteral("labelHostName"));
        labelHostName->setStyleSheet(QLatin1String("font: 75 12pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout->addWidget(labelHostName, 0, 0, 1, 1);

        lineEditHostName = new QLineEdit(DialogConnectDatabase);
        lineEditHostName->setObjectName(QStringLiteral("lineEditHostName"));
        lineEditHostName->setStyleSheet(QStringLiteral("font: 75 12pt \"URW Palladio L\";"));

        gridLayout->addWidget(lineEditHostName, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelUserName = new QLabel(DialogConnectDatabase);
        labelUserName->setObjectName(QStringLiteral("labelUserName"));
        labelUserName->setStyleSheet(QLatin1String("font: 75 12pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_3->addWidget(labelUserName, 0, 0, 1, 1);

        lineEditUserName = new QLineEdit(DialogConnectDatabase);
        lineEditUserName->setObjectName(QStringLiteral("lineEditUserName"));
        lineEditUserName->setStyleSheet(QStringLiteral("font: 75 12pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(lineEditUserName, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 3, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        pushButtonConnect = new QPushButton(DialogConnectDatabase);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));
        pushButtonConnect->setStyleSheet(QLatin1String("font: 75 12pt \"URW Palladio L\";\n"
"color: rgb(114, 159, 207);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/check24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonConnect->setIcon(icon1);
        pushButtonConnect->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(pushButtonConnect, 0, 0, 1, 1);

        pushButtonCancel = new QPushButton(DialogConnectDatabase);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setStyleSheet(QLatin1String("font: 75 12pt \"URW Palladio L\";\n"
"color: rgb(204, 0, 0);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/cancel16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonCancel->setIcon(icon2);
        pushButtonCancel->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(pushButtonCancel, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 6, 0, 1, 1);


        retranslateUi(DialogConnectDatabase);

        QMetaObject::connectSlotsByName(DialogConnectDatabase);
    } // setupUi

    void retranslateUi(QDialog *DialogConnectDatabase)
    {
        DialogConnectDatabase->setWindowTitle(QApplication::translate("DialogConnectDatabase", "manageBill connexion database", Q_NULLPTR));
        labelMessage->setText(QApplication::translate("DialogConnectDatabase", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("DialogConnectDatabase", "Password : ", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("DialogConnectDatabase", "<html><head/><body><p align=\"center\">Connexion to database</p></body></html>", Q_NULLPTR));
        labelDbName->setText(QApplication::translate("DialogConnectDatabase", "Database Name :", Q_NULLPTR));
        labelHostName->setText(QApplication::translate("DialogConnectDatabase", "Host Name : ", Q_NULLPTR));
        labelUserName->setText(QApplication::translate("DialogConnectDatabase", "User Name :", Q_NULLPTR));
        pushButtonConnect->setText(QApplication::translate("DialogConnectDatabase", "&Connect", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("DialogConnectDatabase", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogConnectDatabase: public Ui_DialogConnectDatabase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNECTDATABASE_H

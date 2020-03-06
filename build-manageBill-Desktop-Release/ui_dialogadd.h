/********************************************************************************
** Form generated from reading UI file 'dialogadd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADD_H
#define UI_DIALOGADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DialogAdd
{
public:
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout;
    QLabel *labelIcon2Name;
    QLineEdit *lineEditFirstName;
    QLabel *labelFirstName;
    QLabel *labelIconName;
    QLineEdit *lineEditName;
    QLabel *labelName;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxCompanyClient;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QLabel *labelIconPhone;
    QLineEdit *lineEditPhone;
    QLabel *labelMobilePhone;
    QLabel *labelPhone;
    QLabel *labelIconMobilePhone;
    QLineEdit *lineEditMobilePhone;
    QGridLayout *gridLayout_3;
    QLabel *labelIconStreet;
    QLineEdit *lineEditStreet;
    QLabel *labelStreet;
    QComboBox *comboBoxCountry;
    QLabel *labelCountry;
    QLabel *labelIconCountry;
    QGridLayout *gridLayout_4;
    QLabel *labelIconPostCOde;
    QLabel *labelPostCode;
    QLabel *labelIconCity;
    QLineEdit *lineEditCity;
    QLineEdit *lineEditPostCode;
    QLabel *labelCity;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEditDOY;
    QLabel *labelIconDOY;
    QLabel *labelDOY;
    QLineEdit *lineEditVAT;
    QLabel *labelVAT;
    QLabel *labelIconVat;
    QGridLayout *gridLayout_6;
    QLabel *labelIconLanguage;
    QComboBox *comboBoxLanguage;
    QLabel *labelIconEmail;
    QLineEdit *lineEditEmail;
    QLabel *labelCountryLangage;
    QLabel *labelEmail;
    QPushButton *pushButtonBack;
    QPushButton *pushButtonAdd;

    void setupUi(QDialog *DialogAdd)
    {
        if (DialogAdd->objectName().isEmpty())
            DialogAdd->setObjectName(QStringLiteral("DialogAdd"));
        DialogAdd->resize(700, 500);
        DialogAdd->setMinimumSize(QSize(700, 500));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/receipt16.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogAdd->setWindowIcon(icon);
        gridLayout_8 = new QGridLayout(DialogAdd);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelIcon2Name = new QLabel(DialogAdd);
        labelIcon2Name->setObjectName(QStringLiteral("labelIcon2Name"));
        labelIcon2Name->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/form/id-card.png")));

        gridLayout->addWidget(labelIcon2Name, 0, 4, 1, 1);

        lineEditFirstName = new QLineEdit(DialogAdd);
        lineEditFirstName->setObjectName(QStringLiteral("lineEditFirstName"));

        gridLayout->addWidget(lineEditFirstName, 0, 5, 1, 1);

        labelFirstName = new QLabel(DialogAdd);
        labelFirstName->setObjectName(QStringLiteral("labelFirstName"));
        labelFirstName->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout->addWidget(labelFirstName, 0, 3, 1, 1);

        labelIconName = new QLabel(DialogAdd);
        labelIconName->setObjectName(QStringLiteral("labelIconName"));
        labelIconName->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/form/id-card.png")));

        gridLayout->addWidget(labelIconName, 0, 1, 1, 1);

        lineEditName = new QLineEdit(DialogAdd);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        gridLayout->addWidget(lineEditName, 0, 2, 1, 1);

        labelName = new QLabel(DialogAdd);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout->addWidget(labelName, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout, 0, 0, 1, 2);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 0, 0, 1, 1);

        checkBoxCompanyClient = new QCheckBox(DialogAdd);
        checkBoxCompanyClient->setObjectName(QStringLiteral("checkBoxCompanyClient"));

        gridLayout_7->addWidget(checkBoxCompanyClient, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 1, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelIconPhone = new QLabel(DialogAdd);
        labelIconPhone->setObjectName(QStringLiteral("labelIconPhone"));
        labelIconPhone->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/form/call.png")));

        gridLayout_2->addWidget(labelIconPhone, 0, 1, 1, 1);

        lineEditPhone = new QLineEdit(DialogAdd);
        lineEditPhone->setObjectName(QStringLiteral("lineEditPhone"));

        gridLayout_2->addWidget(lineEditPhone, 0, 2, 1, 1);

        labelMobilePhone = new QLabel(DialogAdd);
        labelMobilePhone->setObjectName(QStringLiteral("labelMobilePhone"));
        labelMobilePhone->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_2->addWidget(labelMobilePhone, 0, 3, 1, 1);

        labelPhone = new QLabel(DialogAdd);
        labelPhone->setObjectName(QStringLiteral("labelPhone"));
        labelPhone->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_2->addWidget(labelPhone, 0, 0, 1, 1);

        labelIconMobilePhone = new QLabel(DialogAdd);
        labelIconMobilePhone->setObjectName(QStringLiteral("labelIconMobilePhone"));
        labelIconMobilePhone->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/form/smartphone.png")));

        gridLayout_2->addWidget(labelIconMobilePhone, 0, 4, 1, 1);

        lineEditMobilePhone = new QLineEdit(DialogAdd);
        lineEditMobilePhone->setObjectName(QStringLiteral("lineEditMobilePhone"));

        gridLayout_2->addWidget(lineEditMobilePhone, 0, 5, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 2, 0, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelIconStreet = new QLabel(DialogAdd);
        labelIconStreet->setObjectName(QStringLiteral("labelIconStreet"));
        labelIconStreet->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/form/home-address.png")));

        gridLayout_3->addWidget(labelIconStreet, 0, 4, 1, 1);

        lineEditStreet = new QLineEdit(DialogAdd);
        lineEditStreet->setObjectName(QStringLiteral("lineEditStreet"));

        gridLayout_3->addWidget(lineEditStreet, 0, 5, 1, 1);

        labelStreet = new QLabel(DialogAdd);
        labelStreet->setObjectName(QStringLiteral("labelStreet"));
        labelStreet->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
""));

        gridLayout_3->addWidget(labelStreet, 0, 3, 1, 1);

        comboBoxCountry = new QComboBox(DialogAdd);
        comboBoxCountry->setObjectName(QStringLiteral("comboBoxCountry"));
        comboBoxCountry->setMinimumSize(QSize(143, 25));
        comboBoxCountry->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout_3->addWidget(comboBoxCountry, 0, 2, 1, 1);

        labelCountry = new QLabel(DialogAdd);
        labelCountry->setObjectName(QStringLiteral("labelCountry"));
        labelCountry->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelCountry, 0, 0, 1, 1);

        labelIconCountry = new QLabel(DialogAdd);
        labelIconCountry->setObjectName(QStringLiteral("labelIconCountry"));
        labelIconCountry->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/form/flags.png")));

        gridLayout_3->addWidget(labelIconCountry, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 3, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelIconPostCOde = new QLabel(DialogAdd);
        labelIconPostCOde->setObjectName(QStringLiteral("labelIconPostCOde"));
        labelIconPostCOde->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/form/letter.png")));

        gridLayout_4->addWidget(labelIconPostCOde, 0, 1, 1, 1);

        labelPostCode = new QLabel(DialogAdd);
        labelPostCode->setObjectName(QStringLiteral("labelPostCode"));
        labelPostCode->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_4->addWidget(labelPostCode, 0, 0, 1, 1);

        labelIconCity = new QLabel(DialogAdd);
        labelIconCity->setObjectName(QStringLiteral("labelIconCity"));
        labelIconCity->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/form/city.png")));

        gridLayout_4->addWidget(labelIconCity, 0, 4, 1, 1);

        lineEditCity = new QLineEdit(DialogAdd);
        lineEditCity->setObjectName(QStringLiteral("lineEditCity"));

        gridLayout_4->addWidget(lineEditCity, 0, 5, 1, 1);

        lineEditPostCode = new QLineEdit(DialogAdd);
        lineEditPostCode->setObjectName(QStringLiteral("lineEditPostCode"));

        gridLayout_4->addWidget(lineEditPostCode, 0, 2, 1, 1);

        labelCity = new QLabel(DialogAdd);
        labelCity->setObjectName(QStringLiteral("labelCity"));
        labelCity->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_4->addWidget(labelCity, 0, 3, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 4, 0, 1, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        lineEditDOY = new QLineEdit(DialogAdd);
        lineEditDOY->setObjectName(QStringLiteral("lineEditDOY"));

        gridLayout_5->addWidget(lineEditDOY, 0, 5, 1, 1);

        labelIconDOY = new QLabel(DialogAdd);
        labelIconDOY->setObjectName(QStringLiteral("labelIconDOY"));
        labelIconDOY->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/form/balance.png")));

        gridLayout_5->addWidget(labelIconDOY, 0, 4, 1, 1);

        labelDOY = new QLabel(DialogAdd);
        labelDOY->setObjectName(QStringLiteral("labelDOY"));
        labelDOY->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_5->addWidget(labelDOY, 0, 3, 1, 1);

        lineEditVAT = new QLineEdit(DialogAdd);
        lineEditVAT->setObjectName(QStringLiteral("lineEditVAT"));

        gridLayout_5->addWidget(lineEditVAT, 0, 2, 1, 1);

        labelVAT = new QLabel(DialogAdd);
        labelVAT->setObjectName(QStringLiteral("labelVAT"));
        labelVAT->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_5->addWidget(labelVAT, 0, 0, 1, 1);

        labelIconVat = new QLabel(DialogAdd);
        labelIconVat->setObjectName(QStringLiteral("labelIconVat"));
        labelIconVat->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/form/tax.png")));

        gridLayout_5->addWidget(labelIconVat, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 5, 0, 1, 2);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        labelIconLanguage = new QLabel(DialogAdd);
        labelIconLanguage->setObjectName(QStringLiteral("labelIconLanguage"));
        labelIconLanguage->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/form/language.png")));

        gridLayout_6->addWidget(labelIconLanguage, 0, 4, 1, 1);

        comboBoxLanguage = new QComboBox(DialogAdd);
        comboBoxLanguage->setObjectName(QStringLiteral("comboBoxLanguage"));

        gridLayout_6->addWidget(comboBoxLanguage, 0, 5, 1, 1);

        labelIconEmail = new QLabel(DialogAdd);
        labelIconEmail->setObjectName(QStringLiteral("labelIconEmail"));
        labelIconEmail->setPixmap(QPixmap(QString::fromUtf8(":/icon/image/form/email.png")));

        gridLayout_6->addWidget(labelIconEmail, 0, 1, 1, 1);

        lineEditEmail = new QLineEdit(DialogAdd);
        lineEditEmail->setObjectName(QStringLiteral("lineEditEmail"));

        gridLayout_6->addWidget(lineEditEmail, 0, 2, 1, 1);

        labelCountryLangage = new QLabel(DialogAdd);
        labelCountryLangage->setObjectName(QStringLiteral("labelCountryLangage"));
        labelCountryLangage->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_6->addWidget(labelCountryLangage, 0, 3, 1, 1);

        labelEmail = new QLabel(DialogAdd);
        labelEmail->setObjectName(QStringLiteral("labelEmail"));
        labelEmail->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
""));

        gridLayout_6->addWidget(labelEmail, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_6, 6, 0, 1, 2);

        pushButtonBack = new QPushButton(DialogAdd);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        pushButtonBack->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/undo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBack->setIcon(icon1);
        pushButtonBack->setIconSize(QSize(24, 24));

        gridLayout_8->addWidget(pushButtonBack, 7, 0, 1, 1);

        pushButtonAdd = new QPushButton(DialogAdd);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        pushButtonAdd->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/add24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAdd->setIcon(icon2);
        pushButtonAdd->setIconSize(QSize(24, 24));

        gridLayout_8->addWidget(pushButtonAdd, 7, 1, 1, 1);


        retranslateUi(DialogAdd);

        QMetaObject::connectSlotsByName(DialogAdd);
    } // setupUi

    void retranslateUi(QDialog *DialogAdd)
    {
        DialogAdd->setWindowTitle(QApplication::translate("DialogAdd", "manageBill Add new client/supplier/personnel$", Q_NULLPTR));
        labelIcon2Name->setText(QString());
        labelFirstName->setText(QApplication::translate("DialogAdd", "First Name :", Q_NULLPTR));
        labelIconName->setText(QString());
        labelName->setText(QApplication::translate("DialogAdd", "Family/Company Name :", Q_NULLPTR));
        checkBoxCompanyClient->setText(QApplication::translate("DialogAdd", "Company Client", Q_NULLPTR));
        labelIconPhone->setText(QString());
        labelMobilePhone->setText(QApplication::translate("DialogAdd", "Mobile Phone :", Q_NULLPTR));
        labelPhone->setText(QApplication::translate("DialogAdd", "Phone :", Q_NULLPTR));
        labelIconMobilePhone->setText(QString());
        labelIconStreet->setText(QString());
        labelStreet->setText(QApplication::translate("DialogAdd", "Street :", Q_NULLPTR));
        labelCountry->setText(QApplication::translate("DialogAdd", "Country :", Q_NULLPTR));
        labelIconCountry->setText(QString());
        labelIconPostCOde->setText(QString());
        labelPostCode->setText(QApplication::translate("DialogAdd", "Post Code :", Q_NULLPTR));
        labelIconCity->setText(QString());
        labelCity->setText(QApplication::translate("DialogAdd", "City :", Q_NULLPTR));
        labelIconDOY->setText(QString());
        labelDOY->setText(QApplication::translate("DialogAdd", "Doy Number :", Q_NULLPTR));
        labelVAT->setText(QApplication::translate("DialogAdd", "Vat Number :", Q_NULLPTR));
        labelIconVat->setText(QString());
        labelIconLanguage->setText(QString());
        labelIconEmail->setText(QString());
        labelCountryLangage->setText(QApplication::translate("DialogAdd", "Country Langage", Q_NULLPTR));
        labelEmail->setText(QApplication::translate("DialogAdd", "Email :", Q_NULLPTR));
        pushButtonBack->setText(QApplication::translate("DialogAdd", "&Back", Q_NULLPTR));
        pushButtonAdd->setText(QApplication::translate("DialogAdd", "&Add", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogAdd: public Ui_DialogAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADD_H

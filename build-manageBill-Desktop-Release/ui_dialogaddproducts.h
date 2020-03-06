/********************************************************************************
** Form generated from reading UI file 'dialogaddproducts.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDPRODUCTS_H
#define UI_DIALOGADDPRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DialogAddProducts
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QLabel *labelCategory;
    QComboBox *comboBoxCategory;
    QLabel *labelSubCategory;
    QComboBox *comboBoxSCategory;
    QLabel *labelor;
    QLineEdit *lineEditSCategory;
    QLabel *labelTOQ;
    QComboBox *comboBoxTOQ;
    QLabel *labelOrTOQ;
    QLineEdit *lineEditAddTOQ;
    QGridLayout *gridLayout;
    QPushButton *pushButtonBack;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonAdd;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *DialogAddProducts)
    {
        if (DialogAddProducts->objectName().isEmpty())
            DialogAddProducts->setObjectName(QStringLiteral("DialogAddProducts"));
        DialogAddProducts->resize(500, 375);
        DialogAddProducts->setMinimumSize(QSize(500, 300));
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu"));
        font.setBold(false);
        font.setWeight(50);
        DialogAddProducts->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/receipt16.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogAddProducts->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(DialogAddProducts);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelTitle = new QLabel(DialogAddProducts);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QLatin1String("font: 75 15pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_2->addWidget(labelTitle, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 2);

        labelName = new QLabel(DialogAddProducts);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelName, 1, 0, 1, 1);

        lineEditName = new QLineEdit(DialogAddProducts);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        gridLayout_3->addWidget(lineEditName, 1, 1, 1, 1);

        labelCategory = new QLabel(DialogAddProducts);
        labelCategory->setObjectName(QStringLiteral("labelCategory"));
        labelCategory->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelCategory, 2, 0, 1, 1);

        comboBoxCategory = new QComboBox(DialogAddProducts);
        comboBoxCategory->setObjectName(QStringLiteral("comboBoxCategory"));

        gridLayout_3->addWidget(comboBoxCategory, 2, 1, 1, 1);

        labelSubCategory = new QLabel(DialogAddProducts);
        labelSubCategory->setObjectName(QStringLiteral("labelSubCategory"));
        labelSubCategory->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelSubCategory, 3, 0, 1, 1);

        comboBoxSCategory = new QComboBox(DialogAddProducts);
        comboBoxSCategory->setObjectName(QStringLiteral("comboBoxSCategory"));

        gridLayout_3->addWidget(comboBoxSCategory, 3, 1, 1, 1);

        labelor = new QLabel(DialogAddProducts);
        labelor->setObjectName(QStringLiteral("labelor"));
        labelor->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelor, 4, 1, 1, 1);

        lineEditSCategory = new QLineEdit(DialogAddProducts);
        lineEditSCategory->setObjectName(QStringLiteral("lineEditSCategory"));

        gridLayout_3->addWidget(lineEditSCategory, 5, 1, 1, 1);

        labelTOQ = new QLabel(DialogAddProducts);
        labelTOQ->setObjectName(QStringLiteral("labelTOQ"));
        labelTOQ->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelTOQ, 6, 0, 1, 1);

        comboBoxTOQ = new QComboBox(DialogAddProducts);
        comboBoxTOQ->setObjectName(QStringLiteral("comboBoxTOQ"));

        gridLayout_3->addWidget(comboBoxTOQ, 6, 1, 1, 1);

        labelOrTOQ = new QLabel(DialogAddProducts);
        labelOrTOQ->setObjectName(QStringLiteral("labelOrTOQ"));
        labelOrTOQ->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelOrTOQ, 7, 1, 1, 1);

        lineEditAddTOQ = new QLineEdit(DialogAddProducts);
        lineEditAddTOQ->setObjectName(QStringLiteral("lineEditAddTOQ"));

        gridLayout_3->addWidget(lineEditAddTOQ, 8, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonBack = new QPushButton(DialogAddProducts);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/undo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBack->setIcon(icon1);
        pushButtonBack->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButtonBack, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);

        pushButtonAdd = new QPushButton(DialogAddProducts);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/add24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAdd->setIcon(icon2);
        pushButtonAdd->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButtonAdd, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 3, 1, 1);


        gridLayout_3->addLayout(gridLayout, 9, 0, 1, 2);


        retranslateUi(DialogAddProducts);

        QMetaObject::connectSlotsByName(DialogAddProducts);
    } // setupUi

    void retranslateUi(QDialog *DialogAddProducts)
    {
        DialogAddProducts->setWindowTitle(QApplication::translate("DialogAddProducts", "manageBill Add Products", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("DialogAddProducts", "<html><head/><body><p align=\"center\">Add Product</p></body></html>", Q_NULLPTR));
        labelName->setText(QApplication::translate("DialogAddProducts", "Name :", Q_NULLPTR));
        labelCategory->setText(QApplication::translate("DialogAddProducts", "Category :", Q_NULLPTR));
        labelSubCategory->setText(QApplication::translate("DialogAddProducts", "Sub category :", Q_NULLPTR));
        labelor->setText(QApplication::translate("DialogAddProducts", "or add  ", Q_NULLPTR));
        labelTOQ->setText(QApplication::translate("DialogAddProducts", "Type of quantity : ", Q_NULLPTR));
        labelOrTOQ->setText(QApplication::translate("DialogAddProducts", "or add", Q_NULLPTR));
        pushButtonBack->setText(QApplication::translate("DialogAddProducts", "&Back", Q_NULLPTR));
        pushButtonAdd->setText(QApplication::translate("DialogAddProducts", "&Add", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogAddProducts: public Ui_DialogAddProducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDPRODUCTS_H

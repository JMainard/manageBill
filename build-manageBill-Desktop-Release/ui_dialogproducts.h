/********************************************************************************
** Form generated from reading UI file 'dialogproducts.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPRODUCTS_H
#define UI_DIALOGPRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogProducts
{
public:
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonAddProduct;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_3;
    QLabel *labelCategory;
    QComboBox *comboBoxCategory;
    QLabel *labelSCategory;
    QComboBox *comboBoxSCategory;
    QLabel *labelName;
    QComboBox *comboBoxName;
    QPushButton *pushButtonSearch;
    QGridLayout *gridLayout_4;
    QLabel *labelTableProduct;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidgetInvoice;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButtonBack;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QDialog *DialogProducts)
    {
        if (DialogProducts->objectName().isEmpty())
            DialogProducts->setObjectName(QStringLiteral("DialogProducts"));
        DialogProducts->setWindowModality(Qt::NonModal);
        DialogProducts->resize(770, 400);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/receipt32.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogProducts->setWindowIcon(icon);
        DialogProducts->setSizeGripEnabled(false);
        DialogProducts->setModal(false);
        gridLayout_6 = new QGridLayout(DialogProducts);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelTitle = new QLabel(DialogProducts);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QLatin1String("font: 75 16pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout->addWidget(labelTitle, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pushButtonAddProduct = new QPushButton(DialogProducts);
        pushButtonAddProduct->setObjectName(QStringLiteral("pushButtonAddProduct"));
        pushButtonAddProduct->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/add24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAddProduct->setIcon(icon1);
        pushButtonAddProduct->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(pushButtonAddProduct, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelCategory = new QLabel(DialogProducts);
        labelCategory->setObjectName(QStringLiteral("labelCategory"));
        labelCategory->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelCategory, 0, 0, 1, 1);

        comboBoxCategory = new QComboBox(DialogProducts);
        comboBoxCategory->setObjectName(QStringLiteral("comboBoxCategory"));

        gridLayout_3->addWidget(comboBoxCategory, 0, 1, 1, 1);

        labelSCategory = new QLabel(DialogProducts);
        labelSCategory->setObjectName(QStringLiteral("labelSCategory"));
        labelSCategory->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelSCategory, 0, 2, 1, 1);

        comboBoxSCategory = new QComboBox(DialogProducts);
        comboBoxSCategory->setObjectName(QStringLiteral("comboBoxSCategory"));

        gridLayout_3->addWidget(comboBoxSCategory, 0, 3, 1, 1);

        labelName = new QLabel(DialogProducts);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelName, 0, 4, 1, 1);

        comboBoxName = new QComboBox(DialogProducts);
        comboBoxName->setObjectName(QStringLiteral("comboBoxName"));

        gridLayout_3->addWidget(comboBoxName, 0, 5, 1, 1);

        pushButtonSearch = new QPushButton(DialogProducts);
        pushButtonSearch->setObjectName(QStringLiteral("pushButtonSearch"));
        pushButtonSearch->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/check24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSearch->setIcon(icon2);
        pushButtonSearch->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(pushButtonSearch, 0, 6, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelTableProduct = new QLabel(DialogProducts);
        labelTableProduct->setObjectName(QStringLiteral("labelTableProduct"));
        labelTableProduct->setStyleSheet(QLatin1String("font: 75 14pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_4->addWidget(labelTableProduct, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 3, 0, 1, 1);

        tableWidgetInvoice = new QTableWidget(DialogProducts);
        if (tableWidgetInvoice->columnCount() < 6)
            tableWidgetInvoice->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetInvoice->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetInvoice->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetInvoice->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetInvoice->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetInvoice->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetInvoice->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidgetInvoice->setObjectName(QStringLiteral("tableWidgetInvoice"));
        tableWidgetInvoice->setMinimumSize(QSize(0, 200));
        tableWidgetInvoice->setAutoFillBackground(true);
        tableWidgetInvoice->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        tableWidgetInvoice->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidgetInvoice->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidgetInvoice->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetInvoice->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetInvoice->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetInvoice->horizontalHeader()->setDefaultSectionSize(150);

        gridLayout_6->addWidget(tableWidgetInvoice, 4, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        pushButtonBack = new QPushButton(DialogProducts);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        pushButtonBack->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/image/undo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBack->setIcon(icon3);
        pushButtonBack->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(pushButtonBack, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 5, 0, 1, 1);


        retranslateUi(DialogProducts);

        QMetaObject::connectSlotsByName(DialogProducts);
    } // setupUi

    void retranslateUi(QDialog *DialogProducts)
    {
        DialogProducts->setWindowTitle(QApplication::translate("DialogProducts", "manageBill Products", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("DialogProducts", "<html><head/><body><p align=\"center\">Products</p></body></html>", Q_NULLPTR));
        pushButtonAddProduct->setText(QApplication::translate("DialogProducts", "&Add Products", Q_NULLPTR));
        labelCategory->setText(QApplication::translate("DialogProducts", "Category :", Q_NULLPTR));
        labelSCategory->setText(QApplication::translate("DialogProducts", "Sub Category :", Q_NULLPTR));
        labelName->setText(QApplication::translate("DialogProducts", "Name :", Q_NULLPTR));
        pushButtonSearch->setText(QApplication::translate("DialogProducts", "&Ok", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTableProduct->setToolTip(QApplication::translate("DialogProducts", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelTableProduct->setText(QApplication::translate("DialogProducts", "<html><head/><body><p align=\"center\">Invoice :</p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetInvoice->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogProducts", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetInvoice->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogProducts", "Billing date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetInvoice->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogProducts", "Payment date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetInvoice->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogProducts", "Amount", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetInvoice->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogProducts", "Reason", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetInvoice->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogProducts", "Paid invoice", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        tableWidgetInvoice->setToolTip(QApplication::translate("DialogProducts", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButtonBack->setText(QApplication::translate("DialogProducts", "&Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogProducts: public Ui_DialogProducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPRODUCTS_H

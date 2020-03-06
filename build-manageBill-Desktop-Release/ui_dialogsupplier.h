/********************************************************************************
** Form generated from reading UI file 'dialogsupplier.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSUPPLIER_H
#define UI_DIALOGSUPPLIER_H

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
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSupplier
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonAddInvoice;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonAddSupplier;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_3;
    QLabel *labelSearch;
    QComboBox *comboBoxSearch;
    QLabel *labelEdit;
    QLineEdit *lineEditSearch;
    QPushButton *pushButtonSearch;
    QGridLayout *gridLayout_4;
    QLabel *labelTable1;
    QSpacerItem *horizontalSpacer_6;
    QTableWidget *tableWidgetSupplier;
    QGridLayout *gridLayout_5;
    QLabel *labelTable2;
    QSpacerItem *horizontalSpacer_7;
    QTableWidget *tableWidgetInvoice;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButtonBack;

    void setupUi(QDialog *DialogSupplier)
    {
        if (DialogSupplier->objectName().isEmpty())
            DialogSupplier->setObjectName(QStringLiteral("DialogSupplier"));
        DialogSupplier->resize(950, 500);
        DialogSupplier->setMinimumSize(QSize(950, 500));
        gridLayout_7 = new QGridLayout(DialogSupplier);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        labelTitle = new QLabel(DialogSupplier);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QLatin1String("font: 75 16pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout->addWidget(labelTitle, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        pushButtonAddInvoice = new QPushButton(DialogSupplier);
        pushButtonAddInvoice->setObjectName(QStringLiteral("pushButtonAddInvoice"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/add24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAddInvoice->setIcon(icon);
        pushButtonAddInvoice->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(pushButtonAddInvoice, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        pushButtonAddSupplier = new QPushButton(DialogSupplier);
        pushButtonAddSupplier->setObjectName(QStringLiteral("pushButtonAddSupplier"));
        pushButtonAddSupplier->setIcon(icon);
        pushButtonAddSupplier->setIconSize(QSize(24, 24));

        gridLayout_2->addWidget(pushButtonAddSupplier, 0, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 4, 1, 1);


        gridLayout_7->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelSearch = new QLabel(DialogSupplier);
        labelSearch->setObjectName(QStringLiteral("labelSearch"));
        labelSearch->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelSearch, 0, 0, 1, 1);

        comboBoxSearch = new QComboBox(DialogSupplier);
        comboBoxSearch->setObjectName(QStringLiteral("comboBoxSearch"));

        gridLayout_3->addWidget(comboBoxSearch, 0, 1, 1, 1);

        labelEdit = new QLabel(DialogSupplier);
        labelEdit->setObjectName(QStringLiteral("labelEdit"));
        labelEdit->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelEdit, 0, 2, 1, 1);

        lineEditSearch = new QLineEdit(DialogSupplier);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));

        gridLayout_3->addWidget(lineEditSearch, 0, 3, 1, 1);

        pushButtonSearch = new QPushButton(DialogSupplier);
        pushButtonSearch->setObjectName(QStringLiteral("pushButtonSearch"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/check24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSearch->setIcon(icon1);
        pushButtonSearch->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(pushButtonSearch, 0, 4, 1, 1);


        gridLayout_7->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelTable1 = new QLabel(DialogSupplier);
        labelTable1->setObjectName(QStringLiteral("labelTable1"));
        labelTable1->setStyleSheet(QLatin1String("font: 75 14pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_4->addWidget(labelTable1, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 3, 0, 1, 1);

        tableWidgetSupplier = new QTableWidget(DialogSupplier);
        if (tableWidgetSupplier->columnCount() < 10)
            tableWidgetSupplier->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetSupplier->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetSupplier->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetSupplier->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetSupplier->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetSupplier->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetSupplier->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetSupplier->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetSupplier->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetSupplier->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetSupplier->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tableWidgetSupplier->setObjectName(QStringLiteral("tableWidgetSupplier"));
        tableWidgetSupplier->setStyleSheet(QStringLiteral("font: 75 12pt \"URW Palladio L\";"));
        tableWidgetSupplier->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidgetSupplier->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidgetSupplier->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidgetSupplier->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetSupplier->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetSupplier->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetSupplier->horizontalHeader()->setDefaultSectionSize(150);

        gridLayout_7->addWidget(tableWidgetSupplier, 4, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        labelTable2 = new QLabel(DialogSupplier);
        labelTable2->setObjectName(QStringLiteral("labelTable2"));
        labelTable2->setStyleSheet(QLatin1String("font: 75 14pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_5->addWidget(labelTable2, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_7, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 5, 0, 1, 1);

        tableWidgetInvoice = new QTableWidget(DialogSupplier);
        if (tableWidgetInvoice->columnCount() < 6)
            tableWidgetInvoice->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetInvoice->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetInvoice->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetInvoice->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetInvoice->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetInvoice->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetInvoice->setHorizontalHeaderItem(5, __qtablewidgetitem15);
        tableWidgetInvoice->setObjectName(QStringLiteral("tableWidgetInvoice"));
        tableWidgetInvoice->setAutoFillBackground(true);
        tableWidgetInvoice->setStyleSheet(QStringLiteral("font: 75 12pt \"URW Palladio L\";"));
        tableWidgetInvoice->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidgetInvoice->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidgetInvoice->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidgetInvoice->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetInvoice->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetInvoice->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetInvoice->horizontalHeader()->setDefaultSectionSize(150);
        tableWidgetInvoice->verticalHeader()->setVisible(false);

        gridLayout_7->addWidget(tableWidgetInvoice, 6, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_8, 0, 3, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        pushButtonBack = new QPushButton(DialogSupplier);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        pushButtonBack->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/undo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBack->setIcon(icon2);
        pushButtonBack->setIconSize(QSize(24, 24));

        gridLayout_6->addWidget(pushButtonBack, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 7, 0, 1, 1);


        retranslateUi(DialogSupplier);

        QMetaObject::connectSlotsByName(DialogSupplier);
    } // setupUi

    void retranslateUi(QDialog *DialogSupplier)
    {
        DialogSupplier->setWindowTitle(QApplication::translate("DialogSupplier", "manageBill Supplier", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("DialogSupplier", "<html><head/><body><p align=\"center\">Supplier</p></body></html>", Q_NULLPTR));
        pushButtonAddInvoice->setText(QApplication::translate("DialogSupplier", "Add &Invoice", Q_NULLPTR));
        pushButtonAddSupplier->setText(QApplication::translate("DialogSupplier", "Add &Supplier", Q_NULLPTR));
        labelSearch->setText(QApplication::translate("DialogSupplier", "Search :", Q_NULLPTR));
        labelEdit->setText(QApplication::translate("DialogSupplier", "Vat/Name : ", Q_NULLPTR));
        pushButtonSearch->setText(QApplication::translate("DialogSupplier", "&Ok", Q_NULLPTR));
        labelTable1->setText(QApplication::translate("DialogSupplier", "Supplier :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetSupplier->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogSupplier", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetSupplier->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogSupplier", "Vat Number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetSupplier->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogSupplier", "Phone", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetSupplier->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogSupplier", "Email", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetSupplier->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogSupplier", "Street", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetSupplier->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogSupplier", "City", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetSupplier->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("DialogSupplier", "Country", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetSupplier->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("DialogSupplier", "Post Code", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetSupplier->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("DialogSupplier", "Contact Language", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetSupplier->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("DialogSupplier", "Doy Number", Q_NULLPTR));
        labelTable2->setText(QApplication::translate("DialogSupplier", "Invoice :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetInvoice->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("DialogSupplier", "Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetInvoice->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("DialogSupplier", "Billing date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetInvoice->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("DialogSupplier", "Payment date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetInvoice->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("DialogSupplier", "Amount", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetInvoice->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("DialogSupplier", "Reason", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetInvoice->horizontalHeaderItem(5);
        ___qtablewidgetitem15->setText(QApplication::translate("DialogSupplier", "Paid invoice", Q_NULLPTR));
        pushButtonBack->setText(QApplication::translate("DialogSupplier", "&Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogSupplier: public Ui_DialogSupplier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSUPPLIER_H

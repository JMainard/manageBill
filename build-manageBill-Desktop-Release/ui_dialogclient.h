/********************************************************************************
** Form generated from reading UI file 'dialogclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCLIENT_H
#define UI_DIALOGCLIENT_H

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
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogClient
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonAddInvoice;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonAddClient;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_4;
    QLabel *labelSearch;
    QComboBox *comboBoxSearch;
    QLabel *labelEdit;
    QLineEdit *lineEditSearch;
    QCheckBox *checkBoxCompanyClient;
    QPushButton *pushButtonSearch;
    QGridLayout *gridLayout_3;
    QLabel *labelTable1;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout_2;
    QLabel *labelTable2;
    QSpacerItem *horizontalSpacer_7;
    QTableWidget *tableWidgetInvoice;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButtonBack;
    QSpacerItem *horizontalSpacer_9;
    QTableWidget *tableWidgetClient;

    void setupUi(QDialog *DialogClient)
    {
        if (DialogClient->objectName().isEmpty())
            DialogClient->setObjectName(QStringLiteral("DialogClient"));
        DialogClient->resize(1070, 500);
        DialogClient->setMinimumSize(QSize(950, 500));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/receipt16.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogClient->setWindowIcon(icon);
        gridLayout_7 = new QGridLayout(DialogClient);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer, 0, 0, 1, 1);

        labelTitle = new QLabel(DialogClient);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QLatin1String("font: 75 16pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));
        labelTitle->setTextFormat(Qt::RichText);

        gridLayout_6->addWidget(labelTitle, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        pushButtonAddInvoice = new QPushButton(DialogClient);
        pushButtonAddInvoice->setObjectName(QStringLiteral("pushButtonAddInvoice"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/add24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAddInvoice->setIcon(icon1);
        pushButtonAddInvoice->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(pushButtonAddInvoice, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        pushButtonAddClient = new QPushButton(DialogClient);
        pushButtonAddClient->setObjectName(QStringLiteral("pushButtonAddClient"));
        pushButtonAddClient->setIcon(icon1);
        pushButtonAddClient->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(pushButtonAddClient, 0, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 4, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelSearch = new QLabel(DialogClient);
        labelSearch->setObjectName(QStringLiteral("labelSearch"));
        labelSearch->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        gridLayout_4->addWidget(labelSearch, 0, 0, 1, 1);

        comboBoxSearch = new QComboBox(DialogClient);
        comboBoxSearch->setObjectName(QStringLiteral("comboBoxSearch"));

        gridLayout_4->addWidget(comboBoxSearch, 0, 1, 1, 1);

        labelEdit = new QLabel(DialogClient);
        labelEdit->setObjectName(QStringLiteral("labelEdit"));
        labelEdit->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        gridLayout_4->addWidget(labelEdit, 0, 2, 1, 1);

        lineEditSearch = new QLineEdit(DialogClient);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));

        gridLayout_4->addWidget(lineEditSearch, 0, 3, 1, 1);

        checkBoxCompanyClient = new QCheckBox(DialogClient);
        checkBoxCompanyClient->setObjectName(QStringLiteral("checkBoxCompanyClient"));
        checkBoxCompanyClient->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        gridLayout_4->addWidget(checkBoxCompanyClient, 0, 4, 1, 1);

        pushButtonSearch = new QPushButton(DialogClient);
        pushButtonSearch->setObjectName(QStringLiteral("pushButtonSearch"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/check24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSearch->setIcon(icon2);

        gridLayout_4->addWidget(pushButtonSearch, 0, 5, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelTable1 = new QLabel(DialogClient);
        labelTable1->setObjectName(QStringLiteral("labelTable1"));
        labelTable1->setStyleSheet(QLatin1String("font: 75 14pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_3->addWidget(labelTable1, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_3, 3, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelTable2 = new QLabel(DialogClient);
        labelTable2->setObjectName(QStringLiteral("labelTable2"));
        labelTable2->setStyleSheet(QLatin1String("font: 75 14pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_2->addWidget(labelTable2, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_2, 5, 0, 1, 1);

        tableWidgetInvoice = new QTableWidget(DialogClient);
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
        tableWidgetInvoice->setMinimumSize(QSize(0, 150));
        tableWidgetInvoice->setAutoFillBackground(true);
        tableWidgetInvoice->setStyleSheet(QStringLiteral("font: 75 12pt \"URW Palladio L\";"));
        tableWidgetInvoice->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidgetInvoice->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidgetInvoice->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetInvoice->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetInvoice->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetInvoice->horizontalHeader()->setDefaultSectionSize(150);
        tableWidgetInvoice->verticalHeader()->setVisible(false);

        gridLayout_7->addWidget(tableWidgetInvoice, 6, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        pushButtonBack = new QPushButton(DialogClient);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        pushButtonBack->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/image/undo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBack->setIcon(icon3);
        pushButtonBack->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButtonBack, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout, 7, 0, 1, 1);

        tableWidgetClient = new QTableWidget(DialogClient);
        if (tableWidgetClient->columnCount() < 11)
            tableWidgetClient->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetClient->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetClient->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetClient->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetClient->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetClient->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetClient->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetClient->setHorizontalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetClient->setHorizontalHeaderItem(7, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetClient->setHorizontalHeaderItem(8, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetClient->setHorizontalHeaderItem(9, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetClient->setHorizontalHeaderItem(10, __qtablewidgetitem16);
        tableWidgetClient->setObjectName(QStringLiteral("tableWidgetClient"));
        tableWidgetClient->setMinimumSize(QSize(0, 100));
        tableWidgetClient->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));
        tableWidgetClient->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidgetClient->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidgetClient->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidgetClient->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetClient->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetClient->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetClient->horizontalHeader()->setDefaultSectionSize(150);
        tableWidgetClient->verticalHeader()->setVisible(false);

        gridLayout_7->addWidget(tableWidgetClient, 4, 0, 1, 1);


        retranslateUi(DialogClient);

        QMetaObject::connectSlotsByName(DialogClient);
    } // setupUi

    void retranslateUi(QDialog *DialogClient)
    {
        DialogClient->setWindowTitle(QApplication::translate("DialogClient", "manageBill Client", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        labelTitle->setToolTip(QApplication::translate("DialogClient", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        labelTitle->setWhatsThis(QApplication::translate("DialogClient", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        labelTitle->setText(QApplication::translate("DialogClient", "<html><head/><body><p align=\"center\">Client</p></body></html>", Q_NULLPTR));
        pushButtonAddInvoice->setText(QApplication::translate("DialogClient", "Add &Invoice", Q_NULLPTR));
        pushButtonAddClient->setText(QApplication::translate("DialogClient", "Add &Client", Q_NULLPTR));
        labelSearch->setText(QApplication::translate("DialogClient", "Search :", Q_NULLPTR));
        labelEdit->setText(QApplication::translate("DialogClient", "Vat/Name : ", Q_NULLPTR));
        checkBoxCompanyClient->setText(QApplication::translate("DialogClient", "Company client", Q_NULLPTR));
        pushButtonSearch->setText(QApplication::translate("DialogClient", "&Ok", Q_NULLPTR));
        labelTable1->setText(QApplication::translate("DialogClient", "Client :", Q_NULLPTR));
        labelTable2->setText(QApplication::translate("DialogClient", "Invoice :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetInvoice->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogClient", "Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetInvoice->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogClient", "Billing date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetInvoice->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogClient", "Payment date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetInvoice->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogClient", "Amount", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetInvoice->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogClient", "Reason", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetInvoice->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogClient", "Paid invoice", Q_NULLPTR));
        pushButtonBack->setText(QApplication::translate("DialogClient", "&Back", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetClient->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("DialogClient", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetClient->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("DialogClient", "Vat ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetClient->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("DialogClient", "Email", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetClient->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("DialogClient", "Phone", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetClient->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("DialogClient", "Mobile Phone", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetClient->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("DialogClient", "Street", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetClient->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("DialogClient", "City", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetClient->horizontalHeaderItem(7);
        ___qtablewidgetitem13->setText(QApplication::translate("DialogClient", "Post Code", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetClient->horizontalHeaderItem(8);
        ___qtablewidgetitem14->setText(QApplication::translate("DialogClient", "Country", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetClient->horizontalHeaderItem(9);
        ___qtablewidgetitem15->setText(QApplication::translate("DialogClient", "Language", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetClient->horizontalHeaderItem(10);
        ___qtablewidgetitem16->setText(QApplication::translate("DialogClient", "DOY ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogClient: public Ui_DialogClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCLIENT_H

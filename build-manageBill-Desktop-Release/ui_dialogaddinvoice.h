/********************************************************************************
** Form generated from reading UI file 'dialogaddinvoice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDINVOICE_H
#define UI_DIALOGADDINVOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAddInvoice
{
public:
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_8;
    QGridLayout *gridLayout;
    QLabel *labelSelect;
    QLineEdit *lineEditSearch;
    QPushButton *pushButtonSearch;
    QLabel *labelOr;
    QPushButton *pushButtonAddHuman;
    QGridLayout *gridLayout_3;
    QLabel *labelName;
    QLabel *labelFirstName;
    QGridLayout *gridLayout_2;
    QLabel *labelBillingDate;
    QDateEdit *dateEditStart;
    QLabel *labelPaymentDate;
    QDateEdit *dateEditEnd;
    QGridLayout *gridLayout_4;
    QLabel *labelTotalAmount;
    QLineEdit *lineEditTotalAmount;
    QLabel *labelReason;
    QLineEdit *lineEditReason;
    QGridLayout *gridLayout_9;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *checkBoxBillPaid;
    QSpacerItem *horizontalSpacer_10;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_5;
    QLabel *labelProduct;
    QSpacerItem *horizontalSpacer_13;
    QGridLayout *gridLayout_30;
    QTableWidget *tableWidgetProduct;
    QGridLayout *gridLayout_29;
    QGridLayout *gridLayout_27;
    QLabel *labelSubCategory;
    QComboBox *comboBoxSCategory;
    QGridLayout *gridLayout_26;
    QLabel *labelSelectProduct;
    QComboBox *comboBoxProduct_2;
    QLabel *labelOr_3;
    QPushButton *pushButtonAddNewProduct;
    QGridLayout *gridLayout_25;
    QLabel *labelQuantity_2;
    QLineEdit *lineEditQuantity_2;
    QGridLayout *gridLayout_24;
    QLabel *labelPrice_2;
    QLineEdit *lineEditPrice_2;
    QGridLayout *gridLayout_23;
    QLabel *labelVAT_2;
    QComboBox *comboBoxVAT_2;
    QGridLayout *gridLayout_20;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *pushButtonSuppr;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pushButtonAddProductToInvoice;
    QGridLayout *gridLayout_28;
    QLabel *labelCategory;
    QComboBox *comboBoxCategory_2;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonAddPDF;
    QLabel *labelCheminPDF;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonAdd;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_10;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButtonBack;
    QSpacerItem *horizontalSpacer_12;

    void setupUi(QDialog *DialogAddInvoice)
    {
        if (DialogAddInvoice->objectName().isEmpty())
            DialogAddInvoice->setObjectName(QStringLiteral("DialogAddInvoice"));
        DialogAddInvoice->resize(850, 711);
        DialogAddInvoice->setMinimumSize(QSize(850, 675));
        DialogAddInvoice->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/receipt16.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogAddInvoice->setWindowIcon(icon);
        gridLayout_12 = new QGridLayout(DialogAddInvoice);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        labelTitle = new QLabel(DialogAddInvoice);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QLatin1String("font: 75 15pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_8->addWidget(labelTitle, 0, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_8, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_8, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelSelect = new QLabel(DialogAddInvoice);
        labelSelect->setObjectName(QStringLiteral("labelSelect"));
        labelSelect->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout->addWidget(labelSelect, 0, 0, 1, 1);

        lineEditSearch = new QLineEdit(DialogAddInvoice);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));

        gridLayout->addWidget(lineEditSearch, 0, 1, 1, 1);

        pushButtonSearch = new QPushButton(DialogAddInvoice);
        pushButtonSearch->setObjectName(QStringLiteral("pushButtonSearch"));
        pushButtonSearch->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/check24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSearch->setIcon(icon1);
        pushButtonSearch->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButtonSearch, 0, 2, 1, 1);

        labelOr = new QLabel(DialogAddInvoice);
        labelOr->setObjectName(QStringLiteral("labelOr"));
        labelOr->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout->addWidget(labelOr, 0, 3, 1, 1);

        pushButtonAddHuman = new QPushButton(DialogAddInvoice);
        pushButtonAddHuman->setObjectName(QStringLiteral("pushButtonAddHuman"));
        pushButtonAddHuman->setStyleSheet(QStringLiteral("font: 75 12pt \"URW Palladio L\";"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/add24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAddHuman->setIcon(icon2);
        pushButtonAddHuman->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButtonAddHuman, 0, 4, 1, 1);


        gridLayout_12->addLayout(gridLayout, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelName = new QLabel(DialogAddInvoice);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
""));

        gridLayout_3->addWidget(labelName, 0, 0, 1, 1);

        labelFirstName = new QLabel(DialogAddInvoice);
        labelFirstName->setObjectName(QStringLiteral("labelFirstName"));
        labelFirstName->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
""));

        gridLayout_3->addWidget(labelFirstName, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelBillingDate = new QLabel(DialogAddInvoice);
        labelBillingDate->setObjectName(QStringLiteral("labelBillingDate"));
        labelBillingDate->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_2->addWidget(labelBillingDate, 0, 0, 1, 1);

        dateEditStart = new QDateEdit(DialogAddInvoice);
        dateEditStart->setObjectName(QStringLiteral("dateEditStart"));

        gridLayout_2->addWidget(dateEditStart, 0, 1, 1, 1);

        labelPaymentDate = new QLabel(DialogAddInvoice);
        labelPaymentDate->setObjectName(QStringLiteral("labelPaymentDate"));
        labelPaymentDate->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_2->addWidget(labelPaymentDate, 0, 2, 1, 1);

        dateEditEnd = new QDateEdit(DialogAddInvoice);
        dateEditEnd->setObjectName(QStringLiteral("dateEditEnd"));

        gridLayout_2->addWidget(dateEditEnd, 0, 3, 1, 1);


        gridLayout_12->addLayout(gridLayout_2, 3, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelTotalAmount = new QLabel(DialogAddInvoice);
        labelTotalAmount->setObjectName(QStringLiteral("labelTotalAmount"));
        labelTotalAmount->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_4->addWidget(labelTotalAmount, 0, 0, 1, 1);

        lineEditTotalAmount = new QLineEdit(DialogAddInvoice);
        lineEditTotalAmount->setObjectName(QStringLiteral("lineEditTotalAmount"));

        gridLayout_4->addWidget(lineEditTotalAmount, 0, 1, 1, 1);

        labelReason = new QLabel(DialogAddInvoice);
        labelReason->setObjectName(QStringLiteral("labelReason"));
        labelReason->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_4->addWidget(labelReason, 0, 2, 1, 1);

        lineEditReason = new QLineEdit(DialogAddInvoice);
        lineEditReason->setObjectName(QStringLiteral("lineEditReason"));

        gridLayout_4->addWidget(lineEditReason, 0, 3, 1, 1);


        gridLayout_12->addLayout(gridLayout_4, 4, 0, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        checkBoxBillPaid = new QCheckBox(DialogAddInvoice);
        checkBoxBillPaid->setObjectName(QStringLiteral("checkBoxBillPaid"));
        checkBoxBillPaid->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_9->addWidget(checkBoxBillPaid, 0, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_9->addItem(horizontalSpacer_10, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_9, 5, 0, 1, 1);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));

        gridLayout_12->addLayout(gridLayout_11, 6, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        labelProduct = new QLabel(DialogAddInvoice);
        labelProduct->setObjectName(QStringLiteral("labelProduct"));
        labelProduct->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_5->addWidget(labelProduct, 0, 0, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_13, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_5, 7, 0, 1, 1);

        gridLayout_30 = new QGridLayout();
        gridLayout_30->setObjectName(QStringLiteral("gridLayout_30"));
        tableWidgetProduct = new QTableWidget(DialogAddInvoice);
        if (tableWidgetProduct->columnCount() < 6)
            tableWidgetProduct->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetProduct->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetProduct->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetProduct->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetProduct->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetProduct->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetProduct->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidgetProduct->setObjectName(QStringLiteral("tableWidgetProduct"));
        tableWidgetProduct->setMinimumSize(QSize(0, 220));
        tableWidgetProduct->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        tableWidgetProduct->setStyleSheet(QStringLiteral("font: 75 12pt \"URW Palladio L\";"));
        tableWidgetProduct->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidgetProduct->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetProduct->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetProduct->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetProduct->horizontalHeader()->setDefaultSectionSize(125);

        gridLayout_30->addWidget(tableWidgetProduct, 0, 0, 1, 1);

        gridLayout_29 = new QGridLayout();
        gridLayout_29->setObjectName(QStringLiteral("gridLayout_29"));
        gridLayout_27 = new QGridLayout();
        gridLayout_27->setObjectName(QStringLiteral("gridLayout_27"));
        labelSubCategory = new QLabel(DialogAddInvoice);
        labelSubCategory->setObjectName(QStringLiteral("labelSubCategory"));
        labelSubCategory->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_27->addWidget(labelSubCategory, 0, 0, 1, 1);

        comboBoxSCategory = new QComboBox(DialogAddInvoice);
        comboBoxSCategory->setObjectName(QStringLiteral("comboBoxSCategory"));

        gridLayout_27->addWidget(comboBoxSCategory, 0, 1, 1, 1);


        gridLayout_29->addLayout(gridLayout_27, 1, 0, 1, 1);

        gridLayout_26 = new QGridLayout();
        gridLayout_26->setObjectName(QStringLiteral("gridLayout_26"));
        labelSelectProduct = new QLabel(DialogAddInvoice);
        labelSelectProduct->setObjectName(QStringLiteral("labelSelectProduct"));
        labelSelectProduct->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_26->addWidget(labelSelectProduct, 0, 0, 1, 1);

        comboBoxProduct_2 = new QComboBox(DialogAddInvoice);
        comboBoxProduct_2->setObjectName(QStringLiteral("comboBoxProduct_2"));

        gridLayout_26->addWidget(comboBoxProduct_2, 0, 1, 1, 1);

        labelOr_3 = new QLabel(DialogAddInvoice);
        labelOr_3->setObjectName(QStringLiteral("labelOr_3"));
        labelOr_3->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_26->addWidget(labelOr_3, 0, 2, 1, 1);

        pushButtonAddNewProduct = new QPushButton(DialogAddInvoice);
        pushButtonAddNewProduct->setObjectName(QStringLiteral("pushButtonAddNewProduct"));
        pushButtonAddNewProduct->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
""));
        pushButtonAddNewProduct->setIcon(icon2);
        pushButtonAddNewProduct->setIconSize(QSize(24, 24));

        gridLayout_26->addWidget(pushButtonAddNewProduct, 0, 3, 1, 1);


        gridLayout_29->addLayout(gridLayout_26, 2, 0, 1, 1);

        gridLayout_25 = new QGridLayout();
        gridLayout_25->setObjectName(QStringLiteral("gridLayout_25"));
        labelQuantity_2 = new QLabel(DialogAddInvoice);
        labelQuantity_2->setObjectName(QStringLiteral("labelQuantity_2"));
        labelQuantity_2->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_25->addWidget(labelQuantity_2, 0, 0, 1, 1);

        lineEditQuantity_2 = new QLineEdit(DialogAddInvoice);
        lineEditQuantity_2->setObjectName(QStringLiteral("lineEditQuantity_2"));

        gridLayout_25->addWidget(lineEditQuantity_2, 0, 1, 1, 1);


        gridLayout_29->addLayout(gridLayout_25, 3, 0, 1, 1);

        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName(QStringLiteral("gridLayout_24"));
        labelPrice_2 = new QLabel(DialogAddInvoice);
        labelPrice_2->setObjectName(QStringLiteral("labelPrice_2"));
        labelPrice_2->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_24->addWidget(labelPrice_2, 0, 0, 1, 1);

        lineEditPrice_2 = new QLineEdit(DialogAddInvoice);
        lineEditPrice_2->setObjectName(QStringLiteral("lineEditPrice_2"));

        gridLayout_24->addWidget(lineEditPrice_2, 0, 1, 1, 1);


        gridLayout_29->addLayout(gridLayout_24, 4, 0, 1, 1);

        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName(QStringLiteral("gridLayout_23"));
        labelVAT_2 = new QLabel(DialogAddInvoice);
        labelVAT_2->setObjectName(QStringLiteral("labelVAT_2"));
        labelVAT_2->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_23->addWidget(labelVAT_2, 0, 0, 1, 1);

        comboBoxVAT_2 = new QComboBox(DialogAddInvoice);
        comboBoxVAT_2->setObjectName(QStringLiteral("comboBoxVAT_2"));

        gridLayout_23->addWidget(comboBoxVAT_2, 0, 1, 1, 1);


        gridLayout_29->addLayout(gridLayout_23, 5, 0, 1, 1);

        gridLayout_20 = new QGridLayout();
        gridLayout_20->setObjectName(QStringLiteral("gridLayout_20"));
        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_16, 0, 1, 1, 1);

        pushButtonSuppr = new QPushButton(DialogAddInvoice);
        pushButtonSuppr->setObjectName(QStringLiteral("pushButtonSuppr"));
        pushButtonSuppr->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/image/undo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSuppr->setIcon(icon3);
        pushButtonSuppr->setIconSize(QSize(24, 24));

        gridLayout_20->addWidget(pushButtonSuppr, 0, 0, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_20->addItem(horizontalSpacer_17, 0, 3, 1, 1);

        pushButtonAddProductToInvoice = new QPushButton(DialogAddInvoice);
        pushButtonAddProductToInvoice->setObjectName(QStringLiteral("pushButtonAddProductToInvoice"));
        pushButtonAddProductToInvoice->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
""));
        pushButtonAddProductToInvoice->setIcon(icon2);
        pushButtonAddProductToInvoice->setIconSize(QSize(24, 24));

        gridLayout_20->addWidget(pushButtonAddProductToInvoice, 0, 2, 1, 1);


        gridLayout_29->addLayout(gridLayout_20, 6, 0, 1, 1);

        gridLayout_28 = new QGridLayout();
        gridLayout_28->setObjectName(QStringLiteral("gridLayout_28"));
        labelCategory = new QLabel(DialogAddInvoice);
        labelCategory->setObjectName(QStringLiteral("labelCategory"));
        labelCategory->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_28->addWidget(labelCategory, 0, 0, 1, 1);

        comboBoxCategory_2 = new QComboBox(DialogAddInvoice);
        comboBoxCategory_2->setObjectName(QStringLiteral("comboBoxCategory_2"));

        gridLayout_28->addWidget(comboBoxCategory_2, 0, 1, 1, 1);


        gridLayout_29->addLayout(gridLayout_28, 0, 0, 1, 1);


        gridLayout_30->addLayout(gridLayout_29, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_30, 8, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        pushButtonAddPDF = new QPushButton(DialogAddInvoice);
        pushButtonAddPDF->setObjectName(QStringLiteral("pushButtonAddPDF"));
        pushButtonAddPDF->setMinimumSize(QSize(175, 35));
        pushButtonAddPDF->setStyleSheet(QLatin1String("font: 75 14pt \"URW Palladio L\";\n"
""));
        pushButtonAddPDF->setIcon(icon2);
        pushButtonAddPDF->setIconSize(QSize(24, 24));

        gridLayout_7->addWidget(pushButtonAddPDF, 0, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_7, 9, 0, 1, 1);

        labelCheminPDF = new QLabel(DialogAddInvoice);
        labelCheminPDF->setObjectName(QStringLiteral("labelCheminPDF"));
        labelCheminPDF->setMinimumSize(QSize(600, 23));
        labelCheminPDF->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_12->addWidget(labelCheminPDF, 10, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        pushButtonAdd = new QPushButton(DialogAddInvoice);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        pushButtonAdd->setMinimumSize(QSize(175, 0));
        pushButtonAdd->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        pushButtonAdd->setIcon(icon2);
        pushButtonAdd->setIconSize(QSize(24, 24));

        gridLayout_6->addWidget(pushButtonAdd, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_6, 11, 0, 1, 1);

        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_11, 0, 0, 1, 1);

        pushButtonBack = new QPushButton(DialogAddInvoice);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        pushButtonBack->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        pushButtonBack->setIcon(icon3);
        pushButtonBack->setIconSize(QSize(24, 24));

        gridLayout_10->addWidget(pushButtonBack, 0, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_10->addItem(horizontalSpacer_12, 0, 2, 1, 1);


        gridLayout_12->addLayout(gridLayout_10, 12, 0, 1, 1);


        retranslateUi(DialogAddInvoice);

        QMetaObject::connectSlotsByName(DialogAddInvoice);
    } // setupUi

    void retranslateUi(QDialog *DialogAddInvoice)
    {
        DialogAddInvoice->setWindowTitle(QApplication::translate("DialogAddInvoice", "manageBill Add Invoice", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("DialogAddInvoice", "<html><head/><body><p align=\"center\">Add Invoice </p></body></html>", Q_NULLPTR));
        labelSelect->setText(QApplication::translate("DialogAddInvoice", "Select :", Q_NULLPTR));
        pushButtonSearch->setText(QApplication::translate("DialogAddInvoice", "&Search", Q_NULLPTR));
        labelOr->setText(QApplication::translate("DialogAddInvoice", "or", Q_NULLPTR));
        pushButtonAddHuman->setText(QApplication::translate("DialogAddInvoice", "&Add", Q_NULLPTR));
        labelName->setText(QApplication::translate("DialogAddInvoice", "Company / Family Name", Q_NULLPTR));
        labelFirstName->setText(QApplication::translate("DialogAddInvoice", "First Name", Q_NULLPTR));
        labelBillingDate->setText(QApplication::translate("DialogAddInvoice", "Billing Date :", Q_NULLPTR));
        labelPaymentDate->setText(QApplication::translate("DialogAddInvoice", "Payment date :", Q_NULLPTR));
        labelTotalAmount->setText(QApplication::translate("DialogAddInvoice", "Total Amount : ", Q_NULLPTR));
        labelReason->setText(QApplication::translate("DialogAddInvoice", "Reason :", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkBoxBillPaid->setToolTip(QApplication::translate("DialogAddInvoice", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkBoxBillPaid->setText(QApplication::translate("DialogAddInvoice", "Bill Paid", Q_NULLPTR));
        labelProduct->setText(QApplication::translate("DialogAddInvoice", "Products :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetProduct->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogAddInvoice", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetProduct->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogAddInvoice", "Quantity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetProduct->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogAddInvoice", "Price", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetProduct->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogAddInvoice", "VAT", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetProduct->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogAddInvoice", "net Price", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetProduct->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogAddInvoice", "Type of quantity", Q_NULLPTR));
        labelSubCategory->setText(QApplication::translate("DialogAddInvoice", "Sub Category :", Q_NULLPTR));
        labelSelectProduct->setText(QApplication::translate("DialogAddInvoice", "Product : ", Q_NULLPTR));
        labelOr_3->setText(QApplication::translate("DialogAddInvoice", "Or", Q_NULLPTR));
        pushButtonAddNewProduct->setText(QApplication::translate("DialogAddInvoice", "&Add Product", Q_NULLPTR));
        labelQuantity_2->setText(QApplication::translate("DialogAddInvoice", "Quantity :", Q_NULLPTR));
        labelPrice_2->setText(QApplication::translate("DialogAddInvoice", "Price :", Q_NULLPTR));
        labelVAT_2->setText(QApplication::translate("DialogAddInvoice", "VAT :", Q_NULLPTR));
        pushButtonSuppr->setText(QApplication::translate("DialogAddInvoice", "&Back", Q_NULLPTR));
        pushButtonAddProductToInvoice->setText(QApplication::translate("DialogAddInvoice", "Add to &invoice ", Q_NULLPTR));
        labelCategory->setText(QApplication::translate("DialogAddInvoice", "Category : ", Q_NULLPTR));
        pushButtonAddPDF->setText(QApplication::translate("DialogAddInvoice", "Add P&DF", Q_NULLPTR));
        labelCheminPDF->setText(QApplication::translate("DialogAddInvoice", "<html><head/><body><p align=\"center\">TEST</p></body></html>", Q_NULLPTR));
        pushButtonAdd->setText(QApplication::translate("DialogAddInvoice", "Add &Invoice", Q_NULLPTR));
        pushButtonBack->setText(QApplication::translate("DialogAddInvoice", "&Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogAddInvoice: public Ui_DialogAddInvoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDINVOICE_H

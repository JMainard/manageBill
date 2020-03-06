/********************************************************************************
** Form generated from reading UI file 'dialogbalances.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBALANCES_H
#define UI_DIALOGBALANCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogBalances
{
public:
    QLabel *label;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_7;
    QFormLayout *formLayout;
    QLabel *labelFrom;
    QDateEdit *dateEditFrom;
    QFormLayout *formLayout_2;
    QLabel *labelTo;
    QDateEdit *dateEditTo;
    QGridLayout *gridLayout_6;
    QCheckBox *checkBoxGlobal;
    QGridLayout *gridLayout_3;
    QComboBox *comboBoxCategory;
    QLabel *labelVAT;
    QLineEdit *lineEditVAT;
    QPushButton *pushButtonOk;
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidgetPlus;
    QTableWidget *tableWidgetMinus;
    QGridLayout *gridLayout_2;
    QLabel *labelR;
    QLabel *labelResult;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButtonBack;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QDialog *DialogBalances)
    {
        if (DialogBalances->objectName().isEmpty())
            DialogBalances->setObjectName(QStringLiteral("DialogBalances"));
        DialogBalances->resize(930, 400);
        DialogBalances->setMinimumSize(QSize(0, 400));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/receipt16.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogBalances->setWindowIcon(icon);
        DialogBalances->setStyleSheet(QStringLiteral(""));
        label = new QLabel(DialogBalances);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(459, 73, 16, 17));
        gridLayout_8 = new QGridLayout(DialogBalances);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        labelTitle = new QLabel(DialogBalances);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QLatin1String("color:rgb(32, 74, 135);\n"
"font: 75 15pt \"URW Palladio L\";"));

        gridLayout->addWidget(labelTitle, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelFrom = new QLabel(DialogBalances);
        labelFrom->setObjectName(QStringLiteral("labelFrom"));
        labelFrom->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelFrom);

        dateEditFrom = new QDateEdit(DialogBalances);
        dateEditFrom->setObjectName(QStringLiteral("dateEditFrom"));

        formLayout->setWidget(1, QFormLayout::LabelRole, dateEditFrom);


        gridLayout_7->addLayout(formLayout, 0, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        labelTo = new QLabel(DialogBalances);
        labelTo->setObjectName(QStringLiteral("labelTo"));
        labelTo->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelTo);

        dateEditTo = new QDateEdit(DialogBalances);
        dateEditTo->setObjectName(QStringLiteral("dateEditTo"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, dateEditTo);


        gridLayout_7->addLayout(formLayout_2, 0, 1, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        checkBoxGlobal = new QCheckBox(DialogBalances);
        checkBoxGlobal->setObjectName(QStringLiteral("checkBoxGlobal"));
        checkBoxGlobal->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_6->addWidget(checkBoxGlobal, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        comboBoxCategory = new QComboBox(DialogBalances);
        comboBoxCategory->setObjectName(QStringLiteral("comboBoxCategory"));

        gridLayout_3->addWidget(comboBoxCategory, 0, 0, 1, 1);

        labelVAT = new QLabel(DialogBalances);
        labelVAT->setObjectName(QStringLiteral("labelVAT"));
        labelVAT->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));

        gridLayout_3->addWidget(labelVAT, 0, 1, 1, 1);

        lineEditVAT = new QLineEdit(DialogBalances);
        lineEditVAT->setObjectName(QStringLiteral("lineEditVAT"));

        gridLayout_3->addWidget(lineEditVAT, 0, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 1, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 2, 1, 1);

        pushButtonOk = new QPushButton(DialogBalances);
        pushButtonOk->setObjectName(QStringLiteral("pushButtonOk"));
        pushButtonOk->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/check24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonOk->setIcon(icon1);
        pushButtonOk->setIconSize(QSize(24, 24));

        gridLayout_7->addWidget(pushButtonOk, 0, 3, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        tableWidgetPlus = new QTableWidget(DialogBalances);
        if (tableWidgetPlus->columnCount() < 3)
            tableWidgetPlus->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetPlus->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetPlus->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetPlus->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgetPlus->setObjectName(QStringLiteral("tableWidgetPlus"));
        tableWidgetPlus->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidgetPlus->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetPlus->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetPlus->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetPlus->horizontalHeader()->setDefaultSectionSize(150);
        tableWidgetPlus->verticalHeader()->setVisible(true);

        gridLayout_4->addWidget(tableWidgetPlus, 0, 0, 1, 1);

        tableWidgetMinus = new QTableWidget(DialogBalances);
        if (tableWidgetMinus->columnCount() < 3)
            tableWidgetMinus->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetMinus->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetMinus->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetMinus->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidgetMinus->setObjectName(QStringLiteral("tableWidgetMinus"));
        tableWidgetMinus->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidgetMinus->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetMinus->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetMinus->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetMinus->horizontalHeader()->setDefaultSectionSize(150);

        gridLayout_4->addWidget(tableWidgetMinus, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 2, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        labelR = new QLabel(DialogBalances);
        labelR->setObjectName(QStringLiteral("labelR"));
        labelR->setStyleSheet(QLatin1String("color: rgb(32, 74, 135);\n"
"font: 75 16pt \"URW Palladio L\";"));

        gridLayout_2->addWidget(labelR, 0, 1, 1, 1);

        labelResult = new QLabel(DialogBalances);
        labelResult->setObjectName(QStringLiteral("labelResult"));
        labelResult->setStyleSheet(QStringLiteral("font: 75 21pt \"URW Palladio L\";"));

        gridLayout_2->addWidget(labelResult, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 3, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_2, 3, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        pushButtonBack = new QPushButton(DialogBalances);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/undo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBack->setIcon(icon2);
        pushButtonBack->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(pushButtonBack, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        gridLayout_8->addLayout(gridLayout_5, 4, 0, 1, 1);


        retranslateUi(DialogBalances);

        QMetaObject::connectSlotsByName(DialogBalances);
    } // setupUi

    void retranslateUi(QDialog *DialogBalances)
    {
        DialogBalances->setWindowTitle(QApplication::translate("DialogBalances", "manageBill Balance", Q_NULLPTR));
        label->setText(QString());
        labelTitle->setText(QApplication::translate("DialogBalances", "<html><head/><body><p align=\"center\">Balance</p></body></html>", Q_NULLPTR));
        labelFrom->setText(QApplication::translate("DialogBalances", "From :", Q_NULLPTR));
        labelTo->setText(QApplication::translate("DialogBalances", "To :", Q_NULLPTR));
        checkBoxGlobal->setText(QApplication::translate("DialogBalances", "Global Balance", Q_NULLPTR));
        labelVAT->setText(QApplication::translate("DialogBalances", "VAT  :", Q_NULLPTR));
        pushButtonOk->setText(QApplication::translate("DialogBalances", "&Search", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetPlus->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogBalances", "Billing Date ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetPlus->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogBalances", "Payment Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetPlus->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogBalances", "Amount", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetMinus->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogBalances", "Billing Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetMinus->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogBalances", "Payment Date ", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetMinus->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogBalances", "Amount", Q_NULLPTR));
        labelR->setText(QApplication::translate("DialogBalances", "Result :", Q_NULLPTR));
        labelResult->setText(QApplication::translate("DialogBalances", "866 \342\202\254", Q_NULLPTR));
        pushButtonBack->setText(QApplication::translate("DialogBalances", "&Back", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogBalances: public Ui_DialogBalances {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBALANCES_H

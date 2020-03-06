/********************************************************************************
** Form generated from reading UI file 'dialogemployee.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEMPLOYEE_H
#define UI_DIALOGEMPLOYEE_H

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

class Ui_DialogEmployee
{
public:
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QLabel *labelSalary;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QPushButton *pushButtonBack;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout_4;
    QLabel *labelSelect;
    QComboBox *comboBoxSearch;
    QLabel *labelEnter;
    QLineEdit *lineEditEmployee;
    QPushButton *pushButtonSearch;
    QGridLayout *gridLayout_5;
    QLabel *labelEmployee;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButtonAddEmployee;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonAddSalary;
    QSpacerItem *horizontalSpacer_9;
    QTableWidget *tableWidgetInvoice;
    QTableWidget *tableWidgetEmployee;

    void setupUi(QDialog *DialogEmployee)
    {
        if (DialogEmployee->objectName().isEmpty())
            DialogEmployee->setObjectName(QStringLiteral("DialogEmployee"));
        DialogEmployee->resize(925, 600);
        DialogEmployee->setMinimumSize(QSize(925, 600));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/receipt16.png"), QSize(), QIcon::Normal, QIcon::Off);
        DialogEmployee->setWindowIcon(icon);
        gridLayout_7 = new QGridLayout(DialogEmployee);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        labelSalary = new QLabel(DialogEmployee);
        labelSalary->setObjectName(QStringLiteral("labelSalary"));
        labelSalary->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        gridLayout_6->addWidget(labelSalary, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 5, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        labelTitle = new QLabel(DialogEmployee);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QLatin1String("color: rgb(32, 74, 135);\n"
"font: 75 15pt \"URW Palladio L\";"));

        gridLayout_2->addWidget(labelTitle, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout_7->addLayout(gridLayout_2, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonBack = new QPushButton(DialogEmployee);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        pushButtonBack->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/undo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBack->setIcon(icon1);
        pushButtonBack->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButtonBack, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout, 7, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        labelSelect = new QLabel(DialogEmployee);
        labelSelect->setObjectName(QStringLiteral("labelSelect"));
        labelSelect->setStyleSheet(QLatin1String("color: rgb(32, 74, 135);\n"
"font: 75 13pt \"URW Palladio L\";"));

        gridLayout_4->addWidget(labelSelect, 0, 0, 1, 1);

        comboBoxSearch = new QComboBox(DialogEmployee);
        comboBoxSearch->setObjectName(QStringLiteral("comboBoxSearch"));

        gridLayout_4->addWidget(comboBoxSearch, 0, 1, 1, 1);

        labelEnter = new QLabel(DialogEmployee);
        labelEnter->setObjectName(QStringLiteral("labelEnter"));
        labelEnter->setStyleSheet(QLatin1String("color: rgb(32, 74, 135);\n"
"font: 75 13pt \"URW Palladio L\";"));

        gridLayout_4->addWidget(labelEnter, 0, 2, 1, 1);

        lineEditEmployee = new QLineEdit(DialogEmployee);
        lineEditEmployee->setObjectName(QStringLiteral("lineEditEmployee"));

        gridLayout_4->addWidget(lineEditEmployee, 0, 3, 1, 1);

        pushButtonSearch = new QPushButton(DialogEmployee);
        pushButtonSearch->setObjectName(QStringLiteral("pushButtonSearch"));
        pushButtonSearch->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/check24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSearch->setIcon(icon2);
        pushButtonSearch->setIconSize(QSize(24, 24));

        gridLayout_4->addWidget(pushButtonSearch, 0, 4, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 2, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        labelEmployee = new QLabel(DialogEmployee);
        labelEmployee->setObjectName(QStringLiteral("labelEmployee"));
        labelEmployee->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color:rgb(32, 74, 135)"));

        gridLayout_5->addWidget(labelEmployee, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        pushButtonAddEmployee = new QPushButton(DialogEmployee);
        pushButtonAddEmployee->setObjectName(QStringLiteral("pushButtonAddEmployee"));
        pushButtonAddEmployee->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icon/image/add24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAddEmployee->setIcon(icon3);
        pushButtonAddEmployee->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(pushButtonAddEmployee, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        pushButtonAddSalary = new QPushButton(DialogEmployee);
        pushButtonAddSalary->setObjectName(QStringLiteral("pushButtonAddSalary"));
        pushButtonAddSalary->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        pushButtonAddSalary->setIcon(icon3);
        pushButtonAddSalary->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(pushButtonAddSalary, 0, 3, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_9, 0, 4, 1, 1);


        gridLayout_7->addLayout(gridLayout_3, 1, 0, 1, 1);

        tableWidgetInvoice = new QTableWidget(DialogEmployee);
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
        tableWidgetInvoice->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        tableWidgetInvoice->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidgetInvoice->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetInvoice->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetInvoice->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetInvoice->horizontalHeader()->setDefaultSectionSize(150);
        tableWidgetInvoice->verticalHeader()->setVisible(false);

        gridLayout_7->addWidget(tableWidgetInvoice, 6, 0, 1, 1);

        tableWidgetEmployee = new QTableWidget(DialogEmployee);
        if (tableWidgetEmployee->columnCount() < 11)
            tableWidgetEmployee->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetEmployee->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetEmployee->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetEmployee->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetEmployee->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetEmployee->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetEmployee->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetEmployee->setHorizontalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetEmployee->setHorizontalHeaderItem(7, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetEmployee->setHorizontalHeaderItem(8, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetEmployee->setHorizontalHeaderItem(9, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetEmployee->setHorizontalHeaderItem(10, __qtablewidgetitem16);
        tableWidgetEmployee->setObjectName(QStringLiteral("tableWidgetEmployee"));
        tableWidgetEmployee->setMinimumSize(QSize(0, 100));
        tableWidgetEmployee->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        tableWidgetEmployee->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidgetEmployee->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetEmployee->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetEmployee->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetEmployee->horizontalHeader()->setDefaultSectionSize(150);

        gridLayout_7->addWidget(tableWidgetEmployee, 4, 0, 1, 1);


        retranslateUi(DialogEmployee);

        QMetaObject::connectSlotsByName(DialogEmployee);
    } // setupUi

    void retranslateUi(QDialog *DialogEmployee)
    {
        DialogEmployee->setWindowTitle(QApplication::translate("DialogEmployee", "maanageBill  Employee", Q_NULLPTR));
        labelSalary->setText(QApplication::translate("DialogEmployee", "Salary  :", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("DialogEmployee", "Employee", Q_NULLPTR));
        pushButtonBack->setText(QApplication::translate("DialogEmployee", "&Back", Q_NULLPTR));
        labelSelect->setText(QApplication::translate("DialogEmployee", "Select :", Q_NULLPTR));
        labelEnter->setText(QApplication::translate("DialogEmployee", "Enter:", Q_NULLPTR));
        pushButtonSearch->setText(QApplication::translate("DialogEmployee", "S&earch", Q_NULLPTR));
        labelEmployee->setText(QApplication::translate("DialogEmployee", "Employee :", Q_NULLPTR));
        pushButtonAddEmployee->setText(QApplication::translate("DialogEmployee", "&Add Employee", Q_NULLPTR));
        pushButtonAddSalary->setText(QApplication::translate("DialogEmployee", "Add &Salary", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetInvoice->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogEmployee", "Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetInvoice->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogEmployee", "Billing Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetInvoice->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogEmployee", "Payment Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetInvoice->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogEmployee", "Amount", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetInvoice->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogEmployee", "Reason", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetInvoice->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogEmployee", "Paid Invoice", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetEmployee->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("DialogEmployee", "Family Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetEmployee->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("DialogEmployee", "First Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetEmployee->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("DialogEmployee", "Vat Number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetEmployee->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("DialogEmployee", "Street", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetEmployee->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("DialogEmployee", "City", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetEmployee->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("DialogEmployee", "Country", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetEmployee->horizontalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("DialogEmployee", "Post Code", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetEmployee->horizontalHeaderItem(7);
        ___qtablewidgetitem13->setText(QApplication::translate("DialogEmployee", "Email", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetEmployee->horizontalHeaderItem(8);
        ___qtablewidgetitem14->setText(QApplication::translate("DialogEmployee", "Doy Number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetEmployee->horizontalHeaderItem(9);
        ___qtablewidgetitem15->setText(QApplication::translate("DialogEmployee", "Mobile", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetEmployee->horizontalHeaderItem(10);
        ___qtablewidgetitem16->setText(QApplication::translate("DialogEmployee", "Language", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogEmployee: public Ui_DialogEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEMPLOYEE_H

/********************************************************************************
** Form generated from reading UI file 'dialoginvoicecomplete.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGINVOICECOMPLETE_H
#define UI_DIALOGINVOICECOMPLETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogInvoiceComplete
{
public:
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelTitle;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelClient;
    QLabel *labelName;
    QLabel *labelFirstName;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelB;
    QLabel *labelBillingDate;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelP;
    QLabel *labelPaymentDate;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout;
    QLabel *labelI;
    QLabel *labelInvoicePaid;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelR;
    QLabel *labelReason;
    QVBoxLayout *verticalLayout_5;
    QLabel *labelA;
    QLabel *labelAmount;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelProduct;
    QSpacerItem *horizontalSpacer_4;
    QTableWidget *tableWidgetProduct;
    QGridLayout *gridLayout;
    QPushButton *pushButtonBack;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButtonBillIsPaid;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *pushButtonPDFInvoice;

    void setupUi(QDialog *DialogInvoiceComplete)
    {
        if (DialogInvoiceComplete->objectName().isEmpty())
            DialogInvoiceComplete->setObjectName(QStringLiteral("DialogInvoiceComplete"));
        DialogInvoiceComplete->resize(920, 420);
        DialogInvoiceComplete->setMinimumSize(QSize(770, 420));
        DialogInvoiceComplete->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(DialogInvoiceComplete);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelTitle = new QLabel(DialogInvoiceComplete);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        labelTitle->setStyleSheet(QLatin1String("font: 75 15pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        horizontalLayout->addWidget(labelTitle);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelClient = new QLabel(DialogInvoiceComplete);
        labelClient->setObjectName(QStringLiteral("labelClient"));
        labelClient->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        horizontalLayout_3->addWidget(labelClient);

        labelName = new QLabel(DialogInvoiceComplete);
        labelName->setObjectName(QStringLiteral("labelName"));
        labelName->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        horizontalLayout_3->addWidget(labelName);

        labelFirstName = new QLabel(DialogInvoiceComplete);
        labelFirstName->setObjectName(QStringLiteral("labelFirstName"));
        labelFirstName->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        horizontalLayout_3->addWidget(labelFirstName);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelB = new QLabel(DialogInvoiceComplete);
        labelB->setObjectName(QStringLiteral("labelB"));
        labelB->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        verticalLayout_2->addWidget(labelB);

        labelBillingDate = new QLabel(DialogInvoiceComplete);
        labelBillingDate->setObjectName(QStringLiteral("labelBillingDate"));
        labelBillingDate->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        verticalLayout_2->addWidget(labelBillingDate);


        gridLayout_2->addLayout(verticalLayout_2, 0, 2, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        labelP = new QLabel(DialogInvoiceComplete);
        labelP->setObjectName(QStringLiteral("labelP"));
        labelP->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        verticalLayout_3->addWidget(labelP);

        labelPaymentDate = new QLabel(DialogInvoiceComplete);
        labelPaymentDate->setObjectName(QStringLiteral("labelPaymentDate"));
        labelPaymentDate->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        verticalLayout_3->addWidget(labelPaymentDate);


        gridLayout_2->addLayout(verticalLayout_3, 0, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 5, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 7, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelI = new QLabel(DialogInvoiceComplete);
        labelI->setObjectName(QStringLiteral("labelI"));
        labelI->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        verticalLayout->addWidget(labelI);

        labelInvoicePaid = new QLabel(DialogInvoiceComplete);
        labelInvoicePaid->setObjectName(QStringLiteral("labelInvoicePaid"));
        labelInvoicePaid->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        verticalLayout->addWidget(labelInvoicePaid);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        labelR = new QLabel(DialogInvoiceComplete);
        labelR->setObjectName(QStringLiteral("labelR"));
        labelR->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        verticalLayout_4->addWidget(labelR);

        labelReason = new QLabel(DialogInvoiceComplete);
        labelReason->setObjectName(QStringLiteral("labelReason"));
        labelReason->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        verticalLayout_4->addWidget(labelReason);


        gridLayout_2->addLayout(verticalLayout_4, 0, 6, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        labelA = new QLabel(DialogInvoiceComplete);
        labelA->setObjectName(QStringLiteral("labelA"));
        labelA->setStyleSheet(QStringLiteral("font: 75 14pt \"URW Palladio L\";"));

        verticalLayout_5->addWidget(labelA);

        labelAmount = new QLabel(DialogInvoiceComplete);
        labelAmount->setObjectName(QStringLiteral("labelAmount"));
        labelAmount->setStyleSheet(QLatin1String("font: 75 13pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        verticalLayout_5->addWidget(labelAmount);


        gridLayout_2->addLayout(verticalLayout_5, 0, 8, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        labelProduct = new QLabel(DialogInvoiceComplete);
        labelProduct->setObjectName(QStringLiteral("labelProduct"));
        labelProduct->setStyleSheet(QLatin1String("font: 75 15pt \"URW Palladio L\";\n"
"color: rgb(32, 74, 135);"));

        horizontalLayout_2->addWidget(labelProduct);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_3->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        tableWidgetProduct = new QTableWidget(DialogInvoiceComplete);
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
        tableWidgetProduct->setMinimumSize(QSize(0, 200));
        tableWidgetProduct->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        tableWidgetProduct->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidgetProduct->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidgetProduct->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidgetProduct->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidgetProduct->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetProduct->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetProduct->horizontalHeader()->setDefaultSectionSize(150);

        gridLayout_3->addWidget(tableWidgetProduct, 4, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonBack = new QPushButton(DialogInvoiceComplete);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icon/image/undo24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBack->setIcon(icon);
        pushButtonBack->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButtonBack, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 0, 1, 1, 1);

        pushButtonBillIsPaid = new QPushButton(DialogInvoiceComplete);
        pushButtonBillIsPaid->setObjectName(QStringLiteral("pushButtonBillIsPaid"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icon/image/check24.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBillIsPaid->setIcon(icon1);
        pushButtonBillIsPaid->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButtonBillIsPaid, 0, 2, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_11, 0, 3, 1, 1);

        pushButtonPDFInvoice = new QPushButton(DialogInvoiceComplete);
        pushButtonPDFInvoice->setObjectName(QStringLiteral("pushButtonPDFInvoice"));
        pushButtonPDFInvoice->setStyleSheet(QStringLiteral("font: 75 13pt \"URW Palladio L\";"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icon/image/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPDFInvoice->setIcon(icon2);
        pushButtonPDFInvoice->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButtonPDFInvoice, 0, 4, 1, 1);


        gridLayout_3->addLayout(gridLayout, 5, 0, 1, 1);


        retranslateUi(DialogInvoiceComplete);

        QMetaObject::connectSlotsByName(DialogInvoiceComplete);
    } // setupUi

    void retranslateUi(QDialog *DialogInvoiceComplete)
    {
        DialogInvoiceComplete->setWindowTitle(QApplication::translate("DialogInvoiceComplete", "Dialog", Q_NULLPTR));
        labelTitle->setText(QApplication::translate("DialogInvoiceComplete", "Complete invoice", Q_NULLPTR));
        labelClient->setText(QApplication::translate("DialogInvoiceComplete", "Client : ", Q_NULLPTR));
        labelName->setText(QApplication::translate("DialogInvoiceComplete", "Family Name", Q_NULLPTR));
        labelFirstName->setText(QApplication::translate("DialogInvoiceComplete", "First Name", Q_NULLPTR));
        labelB->setText(QApplication::translate("DialogInvoiceComplete", "Billing date :", Q_NULLPTR));
        labelBillingDate->setText(QApplication::translate("DialogInvoiceComplete", "TextLabel", Q_NULLPTR));
        labelP->setText(QApplication::translate("DialogInvoiceComplete", "Payment date :", Q_NULLPTR));
        labelPaymentDate->setText(QApplication::translate("DialogInvoiceComplete", "TextLabel", Q_NULLPTR));
        labelI->setText(QApplication::translate("DialogInvoiceComplete", "Invoice Paid :", Q_NULLPTR));
        labelInvoicePaid->setText(QApplication::translate("DialogInvoiceComplete", "TextLabel", Q_NULLPTR));
        labelR->setText(QApplication::translate("DialogInvoiceComplete", "Reason :", Q_NULLPTR));
        labelReason->setText(QApplication::translate("DialogInvoiceComplete", "TextLabel", Q_NULLPTR));
        labelA->setText(QApplication::translate("DialogInvoiceComplete", "Amount :", Q_NULLPTR));
        labelAmount->setText(QApplication::translate("DialogInvoiceComplete", "TextLabel", Q_NULLPTR));
        labelProduct->setText(QApplication::translate("DialogInvoiceComplete", "Products :", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetProduct->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DialogInvoiceComplete", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetProduct->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DialogInvoiceComplete", "Price", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetProduct->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DialogInvoiceComplete", "Vat", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetProduct->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DialogInvoiceComplete", "netPrice", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetProduct->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("DialogInvoiceComplete", "Quantity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetProduct->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("DialogInvoiceComplete", "Type of Quantity", Q_NULLPTR));
        pushButtonBack->setText(QApplication::translate("DialogInvoiceComplete", "&Back", Q_NULLPTR));
        pushButtonBillIsPaid->setText(QApplication::translate("DialogInvoiceComplete", "B&ill is paid", Q_NULLPTR));
        pushButtonPDFInvoice->setText(QApplication::translate("DialogInvoiceComplete", "&PDF ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DialogInvoiceComplete: public Ui_DialogInvoiceComplete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGINVOICECOMPLETE_H

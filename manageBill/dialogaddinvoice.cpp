#include "dialogaddinvoice.h"
#include "ui_dialogaddinvoice.h"
#include "dialogaddproducts.h"
#include "dialogadd.h"
#include "dialogadd.h"
#include <QDebug>
#include <QSqlQuery>
#include <QString>
#include <QMessageBox>

DialogAddInvoice::DialogAddInvoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddInvoice)
{
    ui->setupUi(this);
    ui->comboBoxCategory_2->addItem("Choose",0);
    fillProduct();
    lines = 0;
    ui->tableWidgetProduct->setRowCount(0);
    ui->pushButtonAdd->setEnabled(false);
    ui->pushButtonAddPDF->hide();
    ui->labelCheminPDF->hide();
}

DialogAddInvoice::~DialogAddInvoice()
{
    delete ui;
}

void DialogAddInvoice::addInvoice(int modInvoice)
{
    mod=modInvoice;
}

void DialogAddInvoice::on_pushButtonAdd_clicked()
{
    //Get all info from lineEdit
    QString billingDate = ui->dateEditStart->date().toString("yyyy-MM-dd");
    QString paymentDate = ui->dateEditEnd->date().toString("yyyy-MM-dd");
qDebug() << billingDate << paymentDate;
    QString totalAmount = ui->lineEditTotalAmount->text();
    QString reason = ui->lineEditReason->text();
    QString billPaid;
    if (ui->checkBoxBillPaid->isChecked()){
    billPaid = "1";
    }
    else{
        billPaid ="0";
    }


qDebug() << "push button add Invoice ";
    switch (mod) {
    case 1:{
    //Request to add invoice for a  client
        //In first add billClient
        //Second add clientProducts
        //Get id of invoice client
         QString idInvoiceClient = ("select max(bcId)+1 bcId from billClient ");
         QSqlQuery requestIdInvoiceClient (idInvoiceClient);
         requestIdInvoiceClient.next();
         QString idBillClient = requestIdInvoiceClient.value("bcId").toString();
         QString addInvoiceClient =("insert into billClient values("+idBillClient+",'"+billingDate+"','"+paymentDate+"',"+totalAmount+",'"+reason+"',"+billPaid+",' ',"+id+");");
qDebug() << addInvoiceClient;
         QSqlQuery requestAddInvoiceClient (addInvoiceClient);
         requestAddInvoiceClient.exec();
         insertProduct(idBillClient);
    }break;
    case 2:{
    //Request to add invoice for a supplier
        QString idInvoiceSupplier = ("select max(bsId)+1 bsId from billSupplier" );
        QSqlQuery requestIdInvoiceSupplier (idInvoiceSupplier);
        requestIdInvoiceSupplier.next();
        QString idBillSupplier = requestIdInvoiceSupplier.value("bsId").toString();
        QString addInvoiceSupplier = ("insert into billSupplier values ("+idBillSupplier+",'"+billingDate+"','"+paymentDate+"',"+totalAmount+",'"+reason+"',"+billPaid+",' ',"+id+");");
qDebug() << addInvoiceSupplier;
        QSqlQuery requestAddInvoiceSupplier (addInvoiceSupplier);
        requestAddInvoiceSupplier.exec();
        insertProduct(idBillSupplier);

    }break;
    case 3:{
    //Request to add invoice for a employee
        QString idInvoiceEmployee =("select max(bpId)+1 bpId from billPersonnel");
        QSqlQuery requestIdInvoiceEmployee (idInvoiceEmployee);
        requestIdInvoiceEmployee.next();
        QString idBillEmployee = requestIdInvoiceEmployee.value("bpId").toString();
        QString addInvoiceEmployee = ("insert into billPersonnel values ("+idBillEmployee+",'"+billingDate+"','"+paymentDate+"',"+totalAmount+",'"+reason+"',"+billPaid+",' ',"+id+");");
qDebug() << addInvoiceEmployee;
        QSqlQuery requestAddInvoiceEmployee (addInvoiceEmployee);
        requestAddInvoiceEmployee.exec();
        insertProduct(idBillEmployee);
    } break;

    }
}

void DialogAddInvoice::on_pushButtonBack_clicked()
{
    reject();
}

void DialogAddInvoice::on_pushButtonAddHuman_clicked()
{
    //create a switch to open add with good form
    DialogAdd addHuman;
    switch (mod) {
    case 1:{
qDebug()<< "Add human in add Invoice Client";
        addHuman.addClient();
    }break;
    case 2 :{
qDebug()<< "Add human in add Invoice Client";
        addHuman.addSupplier();
    } break;
    case 3:{
qDebug()<< "Add human in add Invoice Client";
        addHuman.addEmployee();
    }break;
    }
    addHuman.exec();
}

void DialogAddInvoice::on_pushButtonSearch_clicked()
{
qDebug() << "Push button search (client/supplier/employee";
    ui->labelName->clear();
    ui->labelFirstName->clear();
    switch (mod) {
    case 1:{
        //Request by vat number for client
        QString searchClient =("select vCliCompanyName, vCliFirstName, vCliFamilyName, vCliId from vNameClient where vCliVatNumber ='"+ui->lineEditSearch->text()+"';");
    QSqlQuery requestSearchCient (searchClient);
    requestSearchCient.next();

    if(requestSearchCient.isNull(false)){
qDebug() << "Error in client vatNumber";
        ui->labelName->setText("Client not found, try again pls");
        ui->pushButtonAdd->setEnabled(false);
    }
    else{
        id = requestSearchCient.value("vCliId").toString();
        QString cliCompanyName = requestSearchCient.value("vCliCompanyName").toString();
        QString cliFirstName = requestSearchCient.value("vCliFirstName").toString();
        QString cliFamilyName = requestSearchCient.value("vCliFamilyName").toString();
        ui->labelName->setText(cliCompanyName+" "+cliFamilyName);
        ui->labelFirstName->setText(cliFirstName);
        ui->pushButtonAdd->setEnabled(true);
    }
    }break;
    case 2:{
        //Request by vat number for supplier
        QString searchSupplier =("select vSupCompanyName, vSupId from vNameSupplier where vSupVatNumber ='"+ui->lineEditSearch->text()+"';");
        QSqlQuery requestSearchSupplier (searchSupplier);
        requestSearchSupplier.next();
        if (requestSearchSupplier.isNull(false)){
qDebug() << "Care error in supplier vatNumber";
        ui->labelName->setText("Supplier not found, try again pls");
        ui->pushButtonAdd->setEnabled(false);
        }
        else{
           id = requestSearchSupplier.value("vSupId").toString();
           QString supCompanyName = requestSearchSupplier.value("vSupCompanyName").toString();
           ui->labelName->setText(supCompanyName);
           ui->pushButtonAdd->setEnabled(true);
        }
    }break;
    case 3:{
        //request by vat number for employee
        QString searchEmployee =("select vPerFirstName, vPerFamilyName, vPerId from vNamePersonnel where vPerVatNumber ='"+ui->lineEditSearch->text()+"';");
        QSqlQuery requestSearchEmployee (searchEmployee);
        requestSearchEmployee.next();
        if (requestSearchEmployee.isNull(false)){
qDebug() << "Attention il a une erreur";
          ui->labelName->setText("Employee not found, try again pls");
          ui->pushButtonAdd->setEnabled(false);
        }
        else{
        id = requestSearchEmployee.value("vPerId").toString();
        QString perFirstName = requestSearchEmployee.value("vPerFirstName").toString();
        QString perFamilyName = requestSearchEmployee.value("vPerFamilyName").toString();
        ui->labelName->setText(perFamilyName);
        ui->labelFirstName->setText(perFirstName);
        ui->pushButtonAdd->setEnabled(true);

    }
qDebug() << searchEmployee;
    }break;

    }
}

void DialogAddInvoice::on_comboBoxCategory_2_currentTextChanged(const QString &arg1)
{
    ui->comboBoxSCategory->clear();
    ui->comboBoxProduct_2->clear();
    //Fill subCategory
    QString id = ui->comboBoxCategory_2->currentData().toString();
    QString fillSCategory = ("select vSCatId, vSCatWording from vFillSCategory where vCatId='"+id+"';");
    QSqlQuery requestFillSCategory (fillSCategory);
    ui->comboBoxSCategory->addItem("Choose",0);
    while (requestFillSCategory.next()){
        int id = requestFillSCategory.value("vSCatId").toInt();
        QString  subCategory = requestFillSCategory.value("vSCatWording").toString();
        ui->comboBoxSCategory->addItem(subCategory,id);
    }
        //Fill product
        QString fillProd = ("select vProdId, vProdWording from vFillProduct where vCatId ='"+id+"';");
        QSqlQuery requestFillProd (fillProd);
        while (requestFillProd.next()){
            int prodId = requestFillProd.value("vProdId").toInt();
            QString prodWording = requestFillProd.value("vProdWording").toString();
            ui->comboBoxProduct_2->addItem(prodWording, prodId);
        }
}

void DialogAddInvoice::on_comboBoxSCategory_currentTextChanged(const QString &arg1)
{
    ui->comboBoxProduct_2->clear();
    //Fill Product
    QString idSCategory = ui->comboBoxSCategory->currentData().toString();
    QString fillProduct =("select vProdId, vProdWording from vFillProduct where vSCatId="+idSCategory+";");
    QSqlQuery requestFillProduct (fillProduct);
    while (requestFillProduct.next()){
        int idProd = requestFillProduct.value("vProdId").toInt();
        QString products = requestFillProduct.value("vProdWording").toString();
        ui->comboBoxProduct_2->addItem(products,idProd);
    }
}

void DialogAddInvoice::on_pushButtonAddNewProduct_clicked()
{
    //OPen dialog add new product
    DialogAddProducts dialogAddProd;
    dialogAddProd.exec();
}

void DialogAddInvoice::on_pushButtonAddProductToInvoice_clicked()
{
qDebug() << "Add product to table/Invoice : ";
    QString prodName = ui->comboBoxProduct_2->currentText();
    QString quantity = ui->lineEditQuantity_2->text();
    QString price = ui->lineEditPrice_2->text();
    QString vatPercent = ui->comboBoxVAT_2->currentText();
    float pricee = price.toInt();
    float vat = vatPercent.toInt();
    float percent = vat/100;
    float c1 = pricee*percent;
    float c2 = pricee-c1;
    QString cTT = QString::number(c2);
     //Request to get type of quantity
    QString findToq  =("select vToqWording from vFindToq where vProdId ='"+ui->comboBoxProduct_2->currentData().toString()+"';");
    QSqlQuery requestFindToq(findToq);
    requestFindToq.next();
    QString toqWording = requestFindToq.value("vToqWording").toString();

    ui->tableWidgetProduct->setRowCount(ui->tableWidgetProduct->rowCount()+1);
    ui->tableWidgetProduct->setItem(lines,0,new QTableWidgetItem(prodName));
    ui->tableWidgetProduct->setItem(lines,1,new QTableWidgetItem(quantity));
    ui->tableWidgetProduct->setItem(lines,2,new QTableWidgetItem(price));
    ui->tableWidgetProduct->setItem(lines,3,new QTableWidgetItem(vatPercent));
    ui->tableWidgetProduct->setItem(lines,4,new QTableWidgetItem(cTT));
    ui->tableWidgetProduct->setItem(lines,5,new QTableWidgetItem(toqWording));
    lines++;
}

void DialogAddInvoice::fillProduct()
{
    qDebug() << "Fill product";
        //Fill comboBox in first
        ui->comboBoxProduct_2->clear();
        ui->comboBoxVAT_2->clear();
        QString fillCategory =("select vCatId, vCatWording from vCategory");
        QSqlQuery requestFillCategory (fillCategory);
        while (requestFillCategory.next()){
            int id = requestFillCategory.value("vCatId").toInt();
            QString category =requestFillCategory.value("vCatWording").toString();
            ui->comboBoxCategory_2->addItem(category,id);
        }
        QString fillVAT = ("select vVatId, vVatPercent from vVatPercent");
        QSqlQuery requestFillVat (fillVAT);
        while (requestFillVat.next()) {
            int idVat = requestFillVat.value("vVatId").toInt();
            QString percentVat = requestFillVat.value("vVatPercent").toString();
            ui->comboBoxVAT_2->addItem(percentVat,idVat);
        }
}

void DialogAddInvoice::insertProduct(QString idOnAdd)
{
qDebug() << "i'm on insert product";
qDebug() << "l'id pour la creation de la requete = " << idOnAdd;
    //switch to know wich request we do client/supplier/employee
    QString word;
    switch (mod) {
    case 1:{
        //CLient
        word="clientProducts";
    }break;
    case 2:{
        word="supplierProducts";
    }break;
    case 3:{
        word ="persoProducts";
    }
    }
    //Check row by row on the table and get prodId and vatId
    int row = ui->tableWidgetProduct->rowCount();
    int linesChecked = 0;
qDebug() << "Number of row in the tables " <<row;
    while(linesChecked!=row){
        //Get item on row and colum 0 and 3 product name and vat
        QString prodName = ui->tableWidgetProduct->item(linesChecked,0)->text();
        QString vatName = ui->tableWidgetProduct->item(linesChecked,3)->text();
        //Query for get prodId and vatId (in 2 query)
        QString getProdId =("select vProdId from vGetProdId where vProdWording ='"+prodName+"';");
        QSqlQuery requestGetProdId (getProdId);
        requestGetProdId.first();
        QString prodId = requestGetProdId.value("vProdId").toString();

       QString getVatId = ("select vVatId from vGetVatId where vVatPercent = '"+vatName+"';");
       QSqlQuery requestGetVatId (getVatId);
       requestGetVatId.first();
       QString vatId = requestGetVatId.value("vVatId").toString();
       QString quantity = ui->tableWidgetProduct->item(linesChecked,1)->text();
       QString price = ui->tableWidgetProduct->item(linesChecked,2)->text();
       QString netPrice = ui->tableWidgetProduct->item(linesChecked,4)->text();

        //Request insert into clientProduct/supplierProducts/persoProducts
       QString addProdToBill =("insert into "+word+" values ("+price+","+quantity+","+netPrice+","+idOnAdd+","+prodId+","+vatId+");");
qDebug() << addProdToBill;
        QSqlQuery requestAddProdToBill (addProdToBill);
        requestAddProdToBill.exec();
        linesChecked++;
    }
}




















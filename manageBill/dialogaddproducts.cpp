#include "dialogaddproducts.h"
#include "ui_dialogaddproducts.h"
#include <QString>
#include <QSqlQuery>
#include <QDebug>

DialogAddProducts::DialogAddProducts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddProducts)
{
    ui->setupUi(this);
    fillComboBoxCategory();
    fillComboBoxTOQ();
}

DialogAddProducts::~DialogAddProducts()
{
    delete ui;
}

void DialogAddProducts::fillComboBoxTOQ()
{
    QSqlQuery requestFillTOQ("select vToqId,vToqWording from vTypeOfQuantity;");
    ui->comboBoxTOQ->addItem("Choose",0);
    while (requestFillTOQ.next()) {
    int toqId = requestFillTOQ.value("vToqId").toInt();
    QString toqWording = requestFillTOQ.value("vToqWording").toString();

    ui->comboBoxTOQ->addItem(toqWording,toqId);
    }
}

void DialogAddProducts::on_pushButtonAdd_clicked()
{
    //Add maybe subCategory or/and TOQ  more dd product to the list
    QString prodName = ui->lineEditName->text();
    QString prodCategory = ui->comboBoxCategory->currentData().toString();
    QString comboBoxSubCategory = ui->comboBoxSCategory->currentData().toString();
    QString prodSCategory ;
    if (comboBoxSubCategory=="0"){
        if (ui->lineEditSCategory->text().size()!=0){
        //We add a nex subCategory
        //We get the max id  and we had 1 to never have the same number
        QString idSubCategory = "select max(sCatId)+1 as new_Id from subCategory;";
        QSqlQuery requestIdSubCategory (idSubCategory);
        requestIdSubCategory.next();
        prodSCategory = requestIdSubCategory.value("new_Id").toString();
qDebug() << requestIdSubCategory.value("new_Id").toInt();
qDebug() << "New sub category "+prodSCategory ;
        QString addSubCategory =("insert into subCategory values ("+prodSCategory+",'"+ui->lineEditSCategory->text()+"',"+prodCategory+");");
qDebug() << addSubCategory;
        QSqlQuery requestAddSubCategory (addSubCategory);
         }
         else{
         //We have no subCategory
         prodSCategory="NULL";
qDebug()<< "no SUbCategory" + prodSCategory;
         }
    }
    else{
       prodSCategory = ui->comboBoxSCategory->currentData().toString();

    }


    //Check for type Of Quantity
    QString comboBoxTOQ = ui->comboBoxTOQ->currentData().toString();
    QString toqId;
    if(comboBoxTOQ=="0"){
     //We add a new type of quantity
        //Get max id +1
        QString idToq =("select max(toqId)+1 as newId from typeOfQuantity ");
        QSqlQuery requestIdTOQ(idToq);
        requestIdTOQ.next();
        toqId = requestIdTOQ.value("newId").toString();
        QString newTOQ = ("insert into typeOfQuantity values("+toqId+",'"+ui->lineEditAddTOQ->text()+"');");
qDebug() << newTOQ;
        QSqlQuery requestNewTOQ(newTOQ);
    }
    else {
        toqId = ui->comboBoxTOQ->currentData().toString();
    }
qDebug() << prodName;
qDebug() << prodCategory;
qDebug() << prodSCategory;
qDebug() << toqId;

    //We get id of the nexProd
    QString idNewProd =("select max(prodId)+1 as newId from  products");
    QSqlQuery requestIdNewProd(idNewProd);
   requestIdNewProd.next();
   QString prodId = requestIdNewProd.value("newId").toString();

    //We add the new product
    QString addProduct = ("insert into products values ("+prodId+",'"+prodName+"',"+prodCategory+","+prodSCategory+","+toqId+");");
qDebug() << addProduct;
    QSqlQuery requestAddProduct (addProduct);
}

void DialogAddProducts::on_pushButtonBack_clicked()
{
    reject();
}

void DialogAddProducts::fillComboBoxCategory()
{
    QSqlQuery requestFillCategory ("select vCatId, vCatWording from vCategory;");

    while (requestFillCategory.next()){
        int catId = requestFillCategory.value("vCatId").toInt();
        QString catWording =requestFillCategory.value("vCatWording").toString();

        ui->comboBoxCategory->addItem(catWording,catId);
    }
}

void DialogAddProducts::on_comboBoxCategory_currentTextChanged(const QString &arg1)
{
qDebug() << "Combo box category to current text changed";
qDebug() << arg1;

    ui->comboBoxSCategory->clear();
    QString category = ui->comboBoxCategory->currentData().toString();

    QString fillSCategory = "select vSCatId, vSCatWording from vFillSCategory where vCatId ='"+category+"'";
    QSqlQuery  requestFillSCategory (fillSCategory);
    ui->comboBoxSCategory->addItem("Choose",0); //If he don't want make product in subVCategory or add new  new sub Category ;
    while (requestFillSCategory.next()){
        int sCatId = requestFillSCategory.value("vSCatId").toInt();
        QString sCatWording = requestFillSCategory.value("vSCatWording").toString();

        ui->comboBoxSCategory->addItem(sCatWording,sCatId);
    }
}

void DialogAddProducts::on_comboBoxSCategory_currentTextChanged(const QString &arg1)
{
    //If current data !=0 so we cant write on the line Edit subCategory and delete text of its.
qDebug() << "comboBox subCateogory ";
qDebug() << arg1;
    QString varLineEdit = ui->comboBoxSCategory->currentData().toString();
    if(varLineEdit!="0"){
        ui->lineEditSCategory->setEnabled(false);
        ui->lineEditSCategory->clear();
    }else {
        ui->lineEditSCategory->setEnabled(true);
    }

}

void DialogAddProducts::on_comboBoxTOQ_currentTextChanged(const QString &arg1)
{
    //Same as comboBox sub Category just enables or disbales line Edit when we choose TOQ;
qDebug()<< " comboBox TOQ";
qDebug()<<arg1;
    QString varLineEdit = ui->comboBoxTOQ->currentData().toString();
    if(varLineEdit!="0"){
        ui->lineEditAddTOQ->setEnabled(false);
        ui->lineEditAddTOQ->clear();
    }
    else{
        ui->lineEditAddTOQ->setEnabled(true);
    }
}

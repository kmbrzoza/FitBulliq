// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

// KG IS RESPONSIBLE FOR THIS CODE

#include "addproductwindow.h"

/*AddProductWindow::AddProductWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddProductWindow)
{
    ui->setupUi(this);
    this->currentIndex=currentIndex;
}*/

AddProductWindow::AddProductWindow(Service& service, int currentIndex, QWidget *parent) : QDialog(parent), ui(new Ui::AddProductWindow), service(service)
{
    ui->setupUi(this);
    this->currentIndex=currentIndex;
    setPrdListWid();
    QWidget::setWindowTitle("FitBulliq - dodaj produkt");
}

AddProductWindow::~AddProductWindow()
{
    delete ui;
}

void AddProductWindow::setPrdListWid()
{
    //EDITED BK
    ui->listWidget->clear();
    for(int i=0;i<service.listProducts.size();i++)
    {
        ui->listWidget->addItem(service.listProducts[i].getName()+" | "
                                +QString::number(service.listProducts[i].getKcal())+" | "
                                +QString::number(service.listProducts[i].getProtein())+" | "
                                +QString::number(service.listProducts[i].getFats())+" | "
                                +QString::number(service.listProducts[i].getCarbohydrates()));
    }
}

void AddProductWindow::on_AddOwnPrdctpushButton_clicked()
{
    AddOwnProductWindow addOwnProductWindow(service, this);
    addOwnProductWindow.setModal(true);
    addOwnProductWindow.exec();
    setPrdListWid();
}

void AddProductWindow::on_SearchlineEdit_textChanged(const QString &arg1)
{
    service.setListProductsByText(arg1);
    setPrdListWid();
}

void AddProductWindow::on_AddProductpushButton_clicked()
{    
    try
    {
    int indexofRow=ui->listWidget->currentRow();
    int grams=ui->GramslineEdit->text().toUInt();
    if(indexofRow<0 || currentIndex<0 || grams<=0)
    {
        throw std::runtime_error("Error - Produkt nie został zaznaczony lub źle podano gramy");
    }
    service.addMealProduct(currentIndex, service.getProductClicked(indexofRow), grams);
    this->close();
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - adding product");
        message.setText(e.what());
        message.exec();
    }
}

void AddProductWindow::on_pushButton_clicked()//remove button
{
    try
    {
    int indexofRow=ui->listWidget->currentRow();
    if(indexofRow<0)
    {
        throw std::runtime_error("Error - Produkt nie został zaznaczony");
    }
    service.removeProduct(service.getProductClicked(indexofRow));
    ui->listWidget->clear();
    ui->SearchlineEdit->clear();
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - removing product");
        message.setText(e.what());
        message.exec();
    }
}

void AddProductWindow::on_EditProductpushButton_clicked()
{
    try
    {
    if(ui->listWidget->currentRow()<0)
    {
        throw std::runtime_error("Error - Produkt nie został zaznaczony");
    }
    EditProductWindow editProductWindow(service, ui->listWidget->currentRow(),this);
    editProductWindow.setModal(true);
    editProductWindow.exec();
    setPrdListWid();
    ui->listWidget->clear();
    ui->SearchlineEdit->clear();
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - removing product");
        message.setText(e.what());
        message.exec();
    }
}



void AddProductWindow::on_GramslineEdit_textChanged(const QString &arg1)
{
    try
    {
        unsigned int grams=arg1.toUInt();
        int indexofRow=ui->listWidget->currentRow();
    if(indexofRow<0)
    {
        throw std::runtime_error("Error - Najpierw kliknij produkt");
    }
        ui->calorieslabel->setText(QString::number((service.listProducts[indexofRow].getKcal()*grams*0.01)));
        ui->proteinlabel->setText(QString::number((service.listProducts[indexofRow].getProtein()*grams*0.01)));
        ui->fatslabel->setText(QString::number((service.listProducts[indexofRow].getFats()*grams*0.01)));
        ui->carbohydrateslabel->setText(QString::number((service.listProducts[indexofRow].getCarbohydrates()*grams*0.01)));
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - removing product");
        message.setText(e.what());
        message.exec();
    }
}

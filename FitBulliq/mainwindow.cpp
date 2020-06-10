// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

#include "mainwindow.h"

#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //BK
    QWidget::setWindowTitle("FitBulliq"); //setting name of the window

    //BK - connecting with database
    service.connectWithDatabase("database.db");

    //KG
    QDate date = QDate::currentDate();
    ui->dateEdit->setDate(date);//date is changed, so function responsible for changing date is filling combobox and listWidget
    //setDayMacro();
}

MainWindow::~MainWindow()
{
    delete ui;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
void MainWindow::setDayMacro()
{
    ui->dayMacrolabel->clear();
    int comboboxindex = ui->comboBox->currentIndex();
    int calories = 0;
    double protein = 0;
    double fats = 0;
    double carbohydrates = 0;
    if(comboboxindex>=0 || service.currentMeals[comboboxindex].listProduct.size()>0){
    for(int j=0;j<service.currentMeals.size();j++)
    {
    for(int i=0;i<service.currentMeals[j].listProduct.size();i++)
    {
        calories +=  service.currentMeals[j].listProduct[i].getKcalByGrams();
        protein += service.currentMeals[j].listProduct[i].getProteinByGrams();
        fats += service.currentMeals[j].listProduct[i].getFatsByGrams();
        carbohydrates += service.currentMeals[j].listProduct[i].getCarbohydratesByGrams();
    }
    }
    ui->dayMacrolabel->setText(" | "+ QString::number(calories) + " Kcal | B: "+ QString::number(protein) + " | T:"+ QString::number(fats) + " | W: "+ QString::number(carbohydrates) + " | ");
    }
}

void MainWindow::setMealMacro()
{
    ui->mealMacrolabel->clear();
    int comboboxindex = ui->comboBox->currentIndex();
    int calories = 0;
    double protein = 0;
    double fats = 0;
    double carbohydrates = 0;
    if(comboboxindex>=0 || service.currentMeals[comboboxindex].listProduct.size()>0){
    for(int i=0;i<service.currentMeals[comboboxindex].listProduct.size();i++)
    {
        calories +=  service.currentMeals[ui->comboBox->currentIndex()].listProduct[i].getKcalByGrams();
        protein += service.currentMeals[ui->comboBox->currentIndex()].listProduct[i].getProteinByGrams();
        fats += service.currentMeals[ui->comboBox->currentIndex()].listProduct[i].getFatsByGrams();
        carbohydrates += service.currentMeals[ui->comboBox->currentIndex()].listProduct[i].getCarbohydratesByGrams();
    }
    ui->mealMacrolabel->setText(" | "+ QString::number(calories) + " kcal | B: "+ QString::number(protein) + " | T:"+ QString::number(fats) + " | W: "+ QString::number(carbohydrates) + " | ");
    }
}



void MainWindow::setCombobox(QDate date)
{
    ui->comboBox->clear(); // BK added
    service.setMealsByDate(date);
    for(int i=0; i<service.currentMeals.size();i++)
    {
     ui->comboBox->addItem(service.currentMeals[i].getName());
    }
    if(ui->comboBox->currentIndex()>=0)
    {
    setMealMacro();
    setDayMacro();
    }
    else
    {
        ui->mealMacrolabel->clear();
        ui->dayMacrolabel->clear();
    }
    }

void MainWindow::setListWid()
{
    //EDITED BK
    ui->listWidget->clear();
    service.setProductsToMeals();
    int comboboxindex = ui->comboBox->currentIndex();
    if(comboboxindex>=0){
    for(int i=0;i<service.currentMeals[comboboxindex].listProduct.size();i++)
    {
        ui->listWidget->addItem(service.currentMeals[comboboxindex].listProduct[i].getName() + " | "
                                + QString::number(service.currentMeals[comboboxindex].listProduct[i].getGrams()) + " (g) | "
                                + QString::number(service.currentMeals[comboboxindex].listProduct[i].getKcalByGrams()) + " kcal | B: "
                                + QString::number(service.currentMeals[comboboxindex].listProduct[i].getProteinByGrams()) + " | T: "
                                + QString::number(service.currentMeals[comboboxindex].listProduct[i].getFatsByGrams()) + " | W: "
                                + QString::number(service.currentMeals[comboboxindex].listProduct[i].getCarbohydratesByGrams()) + " | ");
    }
    setMealMacro();
    setDayMacro();
    }
}



void MainWindow::on_AddProductButton_clicked()
{
    //BK EDITED
    try
    {
    if(ui->comboBox->currentIndex()<0)
    {
        throw std::runtime_error("Error - Musisz dodać posiłek");
    }
    AddProductWindow addProductWindow(service, ui->comboBox->currentIndex(), this);
    addProductWindow.setModal(true);
    addProductWindow.exec();
    setListWid();
    }
    catch(std::exception &e)
    {
    QMessageBox message;
    message.setWindowTitle("Error - adding product");
    message.setText(e.what());
    message.exec();
    }
}

    //WE CAN USE THIS ONE
    /*if(ui->listWidget->count()<service.currentMeals[ui->comboBox->currentIndex()].listProduct.size())
    {
        ui->listWidget->addItem(service.currentMeals[ui->comboBox->currentIndex()].listProduct.last().getName() + " | "
                + QString::number(service.currentMeals[ui->comboBox->currentIndex()].listProduct.last().getGrams()) + " (g) | "
                + QString::number(service.currentMeals[ui->comboBox->currentIndex()].listProduct.last().getKcalByGrams()) + " | "
                + QString::number(service.currentMeals[ui->comboBox->currentIndex()].listProduct.last().getProteinByGrams()) + " | "
                + QString::number(service.currentMeals[ui->comboBox->currentIndex()].listProduct.last().getFatsByGrams()) + " | "
                + QString::number(service.currentMeals[ui->comboBox->currentIndex()].listProduct.last().getCarbohydratesByGrams()) + " | ");
    }*/
    //OR THIS ONE


//EDITED BK
void MainWindow::on_AddMealButton_clicked()
{
    AddMealWindow addMealWindow(service, ui->dateEdit->date(), this);
    addMealWindow.setModal(true);
    addMealWindow.exec();
    setCombobox(ui->dateEdit->date());
}

void MainWindow::on_RemovMealpushButton_clicked()
{
    //setCombobox(ui->dateEdit->date());
    unsigned int index = ui->comboBox->currentIndex();
    if(ui->comboBox->currentIndex()>=0){//empty combobox has currentindex=-1
    service.removeMeal(index);
    setCombobox(ui->dateEdit->date());
    setListWid();
    }
}

void MainWindow::on_dateEdit_userDateChanged(const QDate &date)
{
    setCombobox(date);
    setListWid();
}



void MainWindow::on_pushButton_clicked()//edit meal product
{
    try
    {
    if(ui->listWidget->currentRow()<0)
    {
        throw std::runtime_error("Error - Najpierw kliknij produkt");
    }
    EditMealProductWindow editMealProductWindow(service, ui->comboBox->currentIndex(),ui->listWidget->currentRow(), this);
    editMealProductWindow.setModal(true);
    editMealProductWindow.exec();
    setListWid();

    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - editing meal product");
        message.setText(e.what());
        message.exec();
    }
}

void MainWindow::on_comboBox_currentIndexChanged()
{
    setListWid();
}

void MainWindow::on_removeMealPrdctpushButton_clicked()
{
    try
    {
        int indexofRow=ui->listWidget->currentRow();
        int index = ui->comboBox->currentIndex();
    if(indexofRow<0||index<0)
    {
        throw std::runtime_error("Error - Najpierw kliknij produkt");
    }
        service.removeMealProduct(index, indexofRow);
        setListWid();

    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - removing product");
        message.setText(e.what());
        message.exec();
    }
}

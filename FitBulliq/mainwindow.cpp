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
}

MainWindow::~MainWindow()
{
    delete ui;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void MainWindow::setCombobox(QDate date)
{
    ui->comboBox->clear(); // BK added
    service.setMealsByDate(date);
    for(int i=0; i<service.currentMeals.size();i++)
    {
     ui->comboBox->addItem(service.currentMeals[i].getName());
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
                                + QString::number(service.currentMeals[comboboxindex].listProduct[i].getKcalByGrams()) + " | "
                                + QString::number(service.currentMeals[comboboxindex].listProduct[i].getProteinByGrams()) + " | "
                                + QString::number(service.currentMeals[comboboxindex].listProduct[i].getFatsByGrams()) + " | "
                                + QString::number(service.currentMeals[comboboxindex].listProduct[i].getCarbohydratesByGrams()) + " | ");
    }}
}

void MainWindow::on_AddProductButton_clicked()
{
    //BK EDITED
    AddProductWindow addProductWindow(service, ui->comboBox->currentIndex(), this);
    addProductWindow.setModal(true);
    addProductWindow.exec();

    //WE CAN USE THIS ONE
    if(ui->listWidget->count()<service.currentMeals[ui->comboBox->currentIndex()].listProduct.size())
    {
        ui->listWidget->addItem(service.currentMeals[ui->comboBox->currentIndex()].listProduct.last().getName() + " | "
                + QString::number(service.currentMeals[ui->comboBox->currentIndex()].listProduct.last().getGrams()) + " (g) | "
                + QString::number(service.currentMeals[ui->comboBox->currentIndex()].listProduct.last().getKcalByGrams()) + " | "
                + QString::number(service.currentMeals[ui->comboBox->currentIndex()].listProduct.last().getProteinByGrams()) + " | "
                + QString::number(service.currentMeals[ui->comboBox->currentIndex()].listProduct.last().getFatsByGrams()) + " | "
                + QString::number(service.currentMeals[ui->comboBox->currentIndex()].listProduct.last().getCarbohydratesByGrams()) + " | ");
    }
    //OR THIS ONE
    //setListWid();
}

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
    setCombobox(ui->dateEdit->date());
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



void MainWindow::on_pushButton_clicked()
{
    EditMealProductWindow editMealProductWindow(service, ui->comboBox->currentIndex(),ui->listWidget->currentRow(), this);
    editMealProductWindow.setModal(true);
    editMealProductWindow.exec();
    setListWid();
}

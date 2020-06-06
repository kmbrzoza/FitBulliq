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
    ui->listWidget->clear();
    service.setProductsToMeals();
    int comboboxindex = ui->comboBox->currentIndex();
    if(comboboxindex>=0){
    for(int i=0;i<service.currentMeals[comboboxindex].listProduct.size();i++)
    {
        ui->listWidget->addItem(service.currentMeals[comboboxindex].listProduct[i].getName());
    }}
}

void MainWindow::on_AddProductButton_clicked()
{
    AddProductWindow addProductWindow(service, ui->comboBox->currentIndex(), this);
    addProductWindow.setModal(true);
    addProductWindow.exec();
    setListWid();
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
    ui->comboBox->clear();
    setCombobox(date);
    ui->listWidget->clear();
    setListWid();
}



void MainWindow::on_pushButton_clicked()
{
    EditMealProductWindow editMealProductWindow(service, ui->comboBox->currentIndex(),ui->listWidget->currentRow(), this);
    editMealProductWindow.setModal(true);
    editMealProductWindow.exec();
    setListWid();
}

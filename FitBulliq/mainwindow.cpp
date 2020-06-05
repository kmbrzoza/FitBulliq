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
    service.setMealsByDate(date);
    for(int i=0; i<service.currentMeals.size();i++)
    {
     ui->comboBox->addItem(service.currentMeals[i].getName());
    }
}

void MainWindow::setListWid()
{
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
    addProductWindow = new AddProductWindow(this);
    addProductWindow->show();
}

void MainWindow::on_AddMealButton_clicked()
{
    addMealWindow = new AddMealWindow(this);
    addMealWindow->show();
}

void MainWindow::on_RemovMealpushButton_clicked()
{
    ui->comboBox->clear();
    QDate date = ui->dateEdit->date();
    setCombobox(date);
    unsigned int index = ui->comboBox->currentIndex();
    if(ui->comboBox->currentIndex()>=0){//empty combobox has currentindex=-1
    service.removeMeal(index);
    ui->comboBox->clear();
    QDate date = ui->dateEdit->date();
    setCombobox(date);
    }
    ui->listWidget->clear();

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
    editMealProductWindow = new EditMealProductWindow(this);
    editMealProductWindow->show();
}

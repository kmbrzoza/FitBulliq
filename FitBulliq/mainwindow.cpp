// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //BK
    QWidget::setWindowTitle("FitBulliq"); //setting name of the window

    //BK - connecting with database
   if(repo.setPathOfDatabase("database.db"))
       qDebug()<<"Polaczono z baza danych";
   else
       qDebug()<<"NIE polaczono z baza danych";
   if(repo.createTablesIfNotExist())
       qDebug()<<"Stworzono tabele";
   else
       qDebug()<<"PROBLEM z utworzeniem tabeli";


}

MainWindow::~MainWindow()
{
    delete ui;
}


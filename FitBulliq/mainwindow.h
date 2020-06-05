// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "meal.h"
#include "product.h"
#include "service.h"
#include "addmealwindow.h"
#include "addproductwindow.h"
#include "editmealproductwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QtSql>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    //MainWindow(QDate &date,QWidget *parent = nullptr);
    ~MainWindow();
    Ui::MainWindow *ui;

private slots:
    void on_AddProductButton_clicked();//opening addproductwindow

    void on_AddMealButton_clicked();//opening addmealwindow

    void on_RemovMealpushButton_clicked();//removing selected meal

    void on_dateEdit_userDateChanged(const QDate &date);

    void on_pushButton_clicked();//openning editmealproductwindow

private:

    //KG
    void setCombobox(QDate date);//setting meals by day in combobox
    void setListWid();//setting product to selected meal in listwidget
    AddProductWindow *addProductWindow; //related to opening new window (Dodaj produkt)
    AddMealWindow *addMealWindow; //related to opening new window (Dodaj Posilek)
    EditMealProductWindow *editMealProductWindow;//related to opening new window (Edytuj Produkt)
    Meal meal;
    //BK
    Service service; //service is responsible for any action with database and objects
};
#endif // MAINWINDOW_H

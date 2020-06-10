// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

// KG IS RESPONSIBLE FOR THIS CODE
#ifndef ADDPRODUCTWINDOW_H
#define ADDPRODUCTWINDOW_H

#include <QDialog>

#include "ui_addproductwindow.h"
#include "service.h"
#include "editproductwindow.h"
#include "addownproductwindow.h"
namespace Ui {
class AddProductWindow;
}

class AddProductWindow : public QDialog
{
    Q_OBJECT

public:
    //explicit AddProductWindow(QWidget *parent = nullptr);
    explicit AddProductWindow(Service& service, int currentIndex, QWidget *parent = nullptr);
    ~AddProductWindow();
    Ui::AddProductWindow *ui;
private slots:

    void on_AddOwnPrdctpushButton_clicked();//opening addownproductwindow

    void on_SearchlineEdit_textChanged(const QString &arg1);//searching product

    void on_AddProductpushButton_clicked();//adding selected product to meal

    void on_pushButton_clicked();//removing selected product

    void on_EditProductpushButton_clicked();//opening editproductwindow


    void on_GramslineEdit_textChanged(const QString &arg1);

private:
    Service &service;
    void setPrdListWid();
    int currentIndex;
    AddOwnProductWindow *addOwnProductWindow;
    EditProductWindow *editProductWindow;
};

#endif // ADDPRODUCTWINDOW_H

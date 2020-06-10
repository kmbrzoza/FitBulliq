// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

// KG IS RESPONSIBLE FOR THIS CODE

#ifndef EDITPRODUCTWINDOW_H
#define EDITPRODUCTWINDOW_H

#include <QDialog>
#include "service.h"
#include "ui_editproductwindow.h"
namespace Ui {
class EditProductWindow;
}

class EditProductWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditProductWindow(Service &service, int currentRow, QWidget *parent = nullptr);
    ~EditProductWindow();

private slots:
    void on_pushButton_clicked();//editing product

private:
    Ui::EditProductWindow *ui;
    Service &service;
    int currentRow;
};

#endif // EDITPRODUCTWINDOW_H

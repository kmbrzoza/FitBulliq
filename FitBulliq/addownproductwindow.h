// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

// KG IS RESPONSIBLE FOR THIS CODE

#ifndef ADDOWNPRODUCTWINDOW_H
#define ADDOWNPRODUCTWINDOW_H

#include <QDialog>
#include "service.h"
#include "ui_addownproductwindow.h"

namespace Ui {
class AddOwnProductWindow;
}

class AddOwnProductWindow : public QDialog
{
    Q_OBJECT

public:
    //explicit AddOwnProductWindow(QWidget *parent = nullptr);
    explicit AddOwnProductWindow(Service &service, QWidget *parent = nullptr);
    ~AddOwnProductWindow();

private slots:
    void on_pushButton_clicked();//adding own product to list

private:
    Ui::AddOwnProductWindow *ui;
    Service &service;
};

#endif // ADDOWNPRODUCTWINDOW_H

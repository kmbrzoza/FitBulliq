#ifndef ADDPRODUCTWINDOW_H
#define ADDPRODUCTWINDOW_H

#include <QDialog>
#include "service.h"
#include "addownproductwindow.h"
#include "editproductwindow.h"
namespace Ui {
class AddProductWindow;
}

class AddProductWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddProductWindow(QWidget *parent = nullptr);
    ~AddProductWindow();
    Ui::AddProductWindow *ui;
private slots:

    void on_AddOwnPrdctpushButton_clicked();//opening addownproductwindow

    void on_SearchlineEdit_textChanged(const QString &arg1);//searching product ! ! !

    void on_AddProductpushButton_clicked();//adding selected product to meal

    void on_pushButton_clicked();//removing selected product

    void on_EditProductpushButton_clicked();//opening editproductwindow


private:
    Service service;
    AddOwnProductWindow *addOwnProductWindow;
    EditProductWindow *editProductWindow;
};

#endif // ADDPRODUCTWINDOW_H

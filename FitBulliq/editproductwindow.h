#ifndef EDITPRODUCTWINDOW_H
#define EDITPRODUCTWINDOW_H

#include <QDialog>
#include "service.h"
namespace Ui {
class EditProductWindow;
}

class EditProductWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditProductWindow(QWidget *parent = nullptr);
    ~EditProductWindow();

private slots:
    void on_pushButton_clicked();//editing product

private:
    Ui::EditProductWindow *ui;
    Service service;
};

#endif // EDITPRODUCTWINDOW_H

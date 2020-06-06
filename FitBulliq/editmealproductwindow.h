#ifndef EDITMEALPRODUCTWINDOW_H
#define EDITMEALPRODUCTWINDOW_H

#include <QDialog>
#include "service.h"
#include "ui_editmealproductwindow.h"

namespace Ui {
class EditMealProductWindow;
}

class EditMealProductWindow : public QDialog
{
    Q_OBJECT

public:
    //explicit EditMealProductWindow(QWidget *parent = nullptr);
    explicit EditMealProductWindow(Service& service, int currentIndex, int currentRow, QWidget *parent = nullptr);

    ~EditMealProductWindow();

private slots:
    void on_pushButton_clicked();//editing meal product

private:
    Ui::EditMealProductWindow *ui;
    Service &service;
    int currentIndex;
    int currentRow;
};

#endif // EDITMEALPRODUCTWINDOW_H

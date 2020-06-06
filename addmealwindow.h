#ifndef ADDMEALWINDOW_H
#define ADDMEALWINDOW_H

#include <QDialog>
#include "ui_addmealwindow.h"
#include "service.h"
namespace Ui
{
class AddMealWindow;
}

class AddMealWindow : public QDialog
{
    Q_OBJECT

public:
    //explicit AddMealWindow(QWidget *parent = nullptr);
    explicit AddMealWindow(Service& service, QDate date, QWidget *parent = nullptr);
    ~AddMealWindow();

private slots:
    void on_ConfirmButton_clicked();


private:
    Ui::AddMealWindow *ui;
    Service& service;
    QDate date;

};

#endif // ADDMEALWINDOW_H

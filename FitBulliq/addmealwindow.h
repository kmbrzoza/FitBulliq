#ifndef ADDMEALWINDOW_H
#define ADDMEALWINDOW_H

#include <QDialog>
#include "service.h"
namespace Ui
{
class AddMealWindow;
}

class AddMealWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddMealWindow(QWidget *parent = nullptr);
    ~AddMealWindow();

private slots:
    void on_ConfirmButton_clicked();

private:
    Ui::AddMealWindow *ui;
    Service service;
};

#endif // ADDMEALWINDOW_H

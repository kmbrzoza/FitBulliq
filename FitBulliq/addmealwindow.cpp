#include "addmealwindow.h"
#include "ui_addmealwindow.h"
//#include "ui_mainwindow.h"
#include "mainwindow.h"

AddMealWindow::AddMealWindow(QWidget *parent) :QDialog(parent),ui(new Ui::AddMealWindow)
{
    ui->setupUi(this);

}
/*AddMealWindow::AddMealWindow(QDate &date, QWidget *parent) :QDialog(parent),ui(new Ui::AddMealWindow), date(date)
{
    ui->setupUi(this);
}*/

AddMealWindow::~AddMealWindow()
{
    delete ui;
}

void AddMealWindow::on_ConfirmButton_clicked()
{
    QString name = ui->AddMealLineEdit->text();
    MainWindow* parent = qobject_cast<MainWindow*>(this->parent());
    QDate date = parent->ui->dateEdit->date();
    Meal meal(name, date);
    service.addMeal(meal);
    service.setMealsByDate(date);
    parent->ui->comboBox->clear();
    for(int i=0; i<service.currentMeals.size();i++)
    {
     parent->ui->comboBox->addItem(service.currentMeals[i].getName());
    }
     this->close();
}

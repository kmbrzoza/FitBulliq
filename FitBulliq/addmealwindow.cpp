// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA


#include "addmealwindow.h"

//#include "ui_mainwindow.h"

//AddMealWindow::AddMealWindow(QWidget *parent) :QDialog(parent),ui(new Ui::AddMealWindow)
//{
//    ui->setupUi(this);

//}

//created BK
AddMealWindow::AddMealWindow(Service& service, QDate date, QWidget *parent): QDialog(parent), ui(new Ui::AddMealWindow), service(service)
{
    ui->setupUi(this);
    this->date=date;
    QWidget::setWindowTitle("FitBulliq - dodaj posiłek");
}

AddMealWindow::~AddMealWindow()
{
    delete ui;
}

//EDITED BK
void AddMealWindow::on_ConfirmButton_clicked()
{
    try
    {
        QString name = ui->AddMealLineEdit->text();
        if(name.isEmpty())
        {
            throw std::runtime_error("Error - Musisz podac nazwe");
        }
        //MainWindow* parent = qobject_cast<MainWindow*>(this->parent());
        Meal meal(name, date);
        service.addMeal(meal);
        this->close();
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - adding meal");
        message.setText(e.what());
        message.exec();
    }


}

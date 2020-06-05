#include "addownproductwindow.h"
#include "ui_addownproductwindow.h"

AddOwnProductWindow::AddOwnProductWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddOwnProductWindow)
{
    ui->setupUi(this);
}

AddOwnProductWindow::~AddOwnProductWindow()
{
    delete ui;
}

void AddOwnProductWindow::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
    unsigned int kcal = ui->lineEdit_2->text().toUInt();
    double protein = ui->lineEdit_3->text().toDouble();
    double fats = ui->lineEdit_4->text().toDouble();
    double carbohydrates = ui->lineEdit_5->text().toDouble();
    Product product(name, kcal, protein, fats, carbohydrates);
    service.addProduct(product);
    this->close();
}

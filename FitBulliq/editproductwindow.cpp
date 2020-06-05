#include "editproductwindow.h"
#include "ui_editproductwindow.h"
#include "addproductwindow.h"
#include "ui_addproductwindow.h"
EditProductWindow::EditProductWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditProductWindow)
{
    ui->setupUi(this);
}

EditProductWindow::~EditProductWindow()
{
    delete ui;
}

void EditProductWindow::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
    unsigned int kcal = ui->lineEdit_2->text().toUInt();
    double protein = ui->lineEdit_3->text().toDouble();
    double fats = ui->lineEdit_4->text().toDouble();
    double carbohydrates = ui->lineEdit_5->text().toDouble();
    AddProductWindow* parent = qobject_cast<AddProductWindow*>(this->parent());
    int indexofRow=parent->ui->listWidget->currentRow();
    if(indexofRow>=0)
    {
    Product product=service.getProductClicked(indexofRow);
    Product productEdited(name, kcal, protein, fats, carbohydrates);
    service.editProduct(product, productEdited);
    parent->ui->listWidget->clear();
    parent->ui->SearchlineEdit->clear();
    }

    this->close();
}

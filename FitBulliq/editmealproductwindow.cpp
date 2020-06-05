#include "editmealproductwindow.h"
#include "ui_editmealproductwindow.h"
#include "mainwindow.h"

EditMealProductWindow::EditMealProductWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditMealProductWindow)
{
    ui->setupUi(this);
}

EditMealProductWindow::~EditMealProductWindow()
{
    delete ui;
}

void EditMealProductWindow::on_pushButton_clicked()
{
    MainWindow* parent = qobject_cast<MainWindow*>(this->parent());
    int currentRow = parent->ui->listWidget->currentRow();
    int currentIndex = parent->ui->comboBox->currentIndex();
    int grams = ui->lineEdit->text().toUInt();
    if(currentRow>=0 || currentIndex>=0)
    {service.editMealProduct(currentIndex, currentRow, grams);}
    parent->ui->listWidget->clear();
    int comboboxindex = parent->ui->comboBox->currentIndex();
    if(comboboxindex>=0){
    for(int i=0;i<service.currentMeals[comboboxindex].listProduct.size();i++)
    {
        parent->ui->listWidget->addItem(service.currentMeals[comboboxindex].listProduct[i].getName());
    }}

    this->close();
}

#include "addproductwindow.h"
#include "ui_addproductwindow.h"
#include "mainwindow.h"

AddProductWindow::AddProductWindow(QWidget *parent):
    QDialog(parent),
    ui(new Ui::AddProductWindow)
{
    ui->setupUi(this);

}

AddProductWindow::~AddProductWindow()
{
    delete ui;
}

void AddProductWindow::on_AddOwnPrdctpushButton_clicked()
{
    addOwnProductWindow = new AddOwnProductWindow(this);
    addOwnProductWindow->show();    
}

void AddProductWindow::on_SearchlineEdit_textChanged(const QString &arg1)
{
    service.setListProductsByText(arg1);
    for(int i=0;i<service.listProducts.size();i++)
    {
        ui->listWidget->addItem(service.listProducts[i].getName()+" "+service.listProducts[i].getProtein()+" "+service.listProducts[i].getFats()+" "+service.listProducts[i].getCarbohydrates());
    }
}

void AddProductWindow::on_AddProductpushButton_clicked()
{
    MainWindow* parent = qobject_cast<MainWindow*>(this->parent());
    int index=parent->ui->comboBox->currentIndex();
    int indexofRow=ui->listWidget->currentRow();
    unsigned int grams=ui->GramslineEdit->text().toUInt();
    if(indexofRow>=0 || index>=0)
    service.addMealProduct(index, service.getProductClicked(indexofRow), grams);
    this->close();
}

void AddProductWindow::on_pushButton_clicked()//delate button
{
    int indexofRow=ui->listWidget->currentRow();
    if(indexofRow>=0)
    service.removeProduct(service.getProductClicked(indexofRow));
    ui->listWidget->clear();
}

void AddProductWindow::on_EditProductpushButton_clicked()
{
    editProductWindow=new EditProductWindow(this);
    editProductWindow->show();
}



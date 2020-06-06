#include "addproductwindow.h"



/*AddProductWindow::AddProductWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddProductWindow)
{
    ui->setupUi(this);
    this->currentIndex=currentIndex;
}*/

AddProductWindow::AddProductWindow(Service& service, int currentIndex, QWidget *parent) : QDialog(parent), ui(new Ui::AddProductWindow), service(service)
{
    ui->setupUi(this);
    this->currentIndex=currentIndex;
    setPrdListWid();
}

AddProductWindow::~AddProductWindow()
{
    delete ui;
}

void AddProductWindow::setPrdListWid()
{
    ui->listWidget->clear();
    for(int i=0;i<service.listProducts.size();i++)
    {
        ui->listWidget->addItem(service.listProducts[i].getName()+" "+service.listProducts[i].getProtein()+" "+service.listProducts[i].getFats()+" "+service.listProducts[i].getCarbohydrates());
    }
}

void AddProductWindow::on_AddOwnPrdctpushButton_clicked()
{
    AddOwnProductWindow addOwnProductWindow(service, this);
    addOwnProductWindow.setModal(true);
    addOwnProductWindow.exec();
    setPrdListWid();
}

void AddProductWindow::on_SearchlineEdit_textChanged(const QString &arg1)
{
    service.setListProductsByText(arg1);
    setPrdListWid();
}

void AddProductWindow::on_AddProductpushButton_clicked()
{
    int indexofRow=ui->listWidget->currentRow();
    unsigned int grams=ui->GramslineEdit->text().toUInt();
    if(indexofRow>=0 || currentIndex>=0)
    service.addMealProduct(currentIndex, service.getProductClicked(indexofRow), grams);
    this->close();
}

void AddProductWindow::on_pushButton_clicked()//delate button
{
    int indexofRow=ui->listWidget->currentRow();
    if(indexofRow>=0)
    service.removeProduct(service.getProductClicked(indexofRow));
    setPrdListWid();
}

void AddProductWindow::on_EditProductpushButton_clicked()
{
    EditProductWindow editProductWindow(service, ui->listWidget->currentRow(),this);
    editProductWindow.setModal(true);
    editProductWindow.exec();
    setPrdListWid();
}



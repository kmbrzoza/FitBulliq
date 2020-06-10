// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

// KG IS RESPONSIBLE FOR THIS CODE

#include "editproductwindow.h"

//EditProductWindow::EditProductWindow(QWidget *parent) :
//    QDialog(parent),
//    ui(new Ui::EditProductWindow)
//{
//    ui->setupUi(this);
//}

EditProductWindow::EditProductWindow(Service& service, int currentRow, QWidget *parent) :QDialog(parent), ui(new Ui::EditProductWindow), service(service)
{
    ui->setupUi(this);
    this->currentRow=currentRow;
    QWidget::setWindowTitle("FitBulliq - edytuj produkt");
    Product product=service.getProductClicked(currentRow);
    ui->doubleSpinBox_5->setValue(product.getKcal());
    ui->doubleSpinBox_6->setValue(product.getProtein());
    ui->doubleSpinBox_7->setValue(product.getFats());
    ui->doubleSpinBox_8->setValue(product.getCarbohydrates());
}

EditProductWindow::~EditProductWindow()
{
    delete ui;
}

void EditProductWindow::on_pushButton_clicked()
{
    try
    {
    QString name = ui->lineEdit_2->text();
    if(name.isEmpty() || currentRow<0)
    {
        throw std::runtime_error("Error - Musisz podac nazwe lub wrócić do okna wyboru produktu i kliknąć go");
    }
    Product product=service.getProductClicked(currentRow);
    unsigned int kcal = ui->doubleSpinBox_5->value();
    double protein = ui->doubleSpinBox_6->value();
    double fats = ui->doubleSpinBox_7->value();
    double carbohydrates = ui->doubleSpinBox_8->value();
    Product productEdited(name, kcal, protein, fats, carbohydrates);
    service.editProduct(product, productEdited);
    this->close();
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - editing product");
        message.setText(e.what());
        message.exec();
    }

}

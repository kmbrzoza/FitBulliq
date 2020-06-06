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
    if(name.isEmpty())
    {
        throw std::runtime_error("Error - Musisz podac nazwe");
    }
    unsigned int kcal = ui->doubleSpinBox_5->value();
    double protein = ui->doubleSpinBox_6->value();
    double fats = ui->doubleSpinBox_7->value();
    double carbohydrates = ui->doubleSpinBox_8->value();
    if(currentRow>=0)
    {
    Product product=service.getProductClicked(currentRow);
    Product productEdited(name, kcal, protein, fats, carbohydrates);
    service.editProduct(product, productEdited);
    this->close();
    }
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - editing product");
        message.setText(e.what());
        message.exec();
    }

}

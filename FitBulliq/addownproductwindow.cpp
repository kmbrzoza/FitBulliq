#include "addownproductwindow.h"


/*AddOwnProductWindow::AddOwnProductWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddOwnProductWindow)
{
    ui->setupUi(this);
}*/

AddOwnProductWindow::AddOwnProductWindow(Service &service, QWidget *parent) :QDialog(parent), ui(new Ui::AddOwnProductWindow), service(service)
{
    ui->setupUi(this);
}

AddOwnProductWindow::~AddOwnProductWindow()
{
    delete ui;
}

void AddOwnProductWindow::on_pushButton_clicked()
{
    try
    {
    QString name = ui->lineEdit->text();
    if(name.isEmpty())
    {
        throw std::runtime_error("Error - Musisz podac nazwe");
    }
    unsigned int kcal = ui->doubleSpinBox->value();
    double protein = ui->doubleSpinBox->value();
    double fats = ui->doubleSpinBox->value();
    double carbohydrates = ui->doubleSpinBox->value();
    Product product(name, kcal, protein, fats, carbohydrates);
    service.addProduct(product);
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

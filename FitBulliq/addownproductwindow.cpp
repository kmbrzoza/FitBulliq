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
    //EDITED BK
    try
    {
        QString name = ui->lineEdit->text();
        if(name.isEmpty())
        {
            throw std::runtime_error("Error - Musisz podac nazwe");
        }
        unsigned int kcal = ui->spinBoxKcal->value();
        double protein = ui->doubleSpinBox_2->value();
        double fats = ui->doubleSpinBox_3->value();
        double carbohydrates = ui->doubleSpinBox_4->value();
        Product product(name, kcal, protein, fats, carbohydrates);
        service.addProduct(product);
        this->close();
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - adding own product");
        message.setText(e.what());
        message.exec();
    }
}

// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

// KG IS RESPONSIBLE FOR THIS CODE

#include "editmealproductwindow.h"


//EditMealProductWindow::EditMealProductWindow(QWidget *parent) :
//    QDialog(parent),
//    ui(new Ui::EditMealProductWindow)
//{
//    ui->setupUi(this);
//}

EditMealProductWindow::EditMealProductWindow(Service& service, int currentIndex, int currentRow, QWidget *parent) : QDialog(parent), ui(new Ui::EditMealProductWindow), service(service)
{
    ui->setupUi(this);
    this->currentRow=currentRow;
    this->currentIndex=currentIndex;
    QWidget::setWindowTitle("FitBulliq - edytuj produkt z posiłku");

}


EditMealProductWindow::~EditMealProductWindow()
{
    delete ui;
}

void EditMealProductWindow::on_pushButton_clicked()
{
    try
    {
    unsigned int grams=ui->lineEdit->text().toUInt();
    if(grams==0)
    {
        throw std::runtime_error("Error - Podaj ile gramów");
    }
    if(currentRow>=0 || currentIndex>=0)
    service.editMealProduct(currentIndex, currentRow, grams);
    this->close();
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - editing meal product");
        message.setText(e.what());
        message.exec();
    }

}

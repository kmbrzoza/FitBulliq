#include "dodajprodukt.h"
#include "ui_dodajprodukt.h"

DodajProdukt::DodajProdukt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DodajProdukt)
{
    ui->setupUi(this);
}

DodajProdukt::~DodajProdukt()
{
    delete ui;
}

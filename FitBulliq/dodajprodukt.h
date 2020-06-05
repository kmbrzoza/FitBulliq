#ifndef DODAJPRODUKT_H
#define DODAJPRODUKT_H

#include <QDialog>

namespace Ui {
class DodajProdukt;
}

class DodajProdukt : public QDialog
{
    Q_OBJECT

public:
    explicit DodajProdukt(QWidget *parent = nullptr);
    ~DodajProdukt();

private:
    Ui::DodajProdukt *ui;
};

#endif // DODAJPRODUKT_H

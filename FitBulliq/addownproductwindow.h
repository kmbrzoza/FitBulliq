#ifndef ADDOWNPRODUCTWINDOW_H
#define ADDOWNPRODUCTWINDOW_H

#include <QDialog>
#include "service.h"

namespace Ui {
class AddOwnProductWindow;
}

class AddOwnProductWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddOwnProductWindow(QWidget *parent = nullptr);
    ~AddOwnProductWindow();

private slots:
    void on_pushButton_clicked();//adding own product to list

private:
    Ui::AddOwnProductWindow *ui;
    Service service;
};

#endif // ADDOWNPRODUCTWINDOW_H

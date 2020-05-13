// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

// BK IS RESPONSIBLE FOR THIS CODE

#ifndef MEAL_H
#define MEAL_H

#include <QString>
#include <QDate>

class Meal
{
private:
    unsigned int id;
    QString name;
    QDate date;

public:
    Meal();
    Meal(unsigned int id, QString name, QDate date);
    virtual ~Meal();

    //SETTERS
    void setId(unsigned int id);
    void setName(QString name);
    void setDate(QDate date);
    //GETTERS
    unsigned int getId();
    QString getName();
    QDate getDate();
};

#endif // MEAL_H

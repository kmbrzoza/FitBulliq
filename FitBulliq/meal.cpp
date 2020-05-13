// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

// BK IS RESPONSIBLE FOR THIS CODE

#include "meal.h"

Meal::Meal()
{

}
Meal::~Meal()
{
}

Meal::Meal(unsigned int id, QString name, QDate date)
{
    this->id=id;
    this->name=name;
    this->date=date;
}

//SETTERS
void Meal::setId(unsigned int id)
{
    this->id=id;
}
void Meal::setName(QString name)
{
    this->name=name;
}
void Meal::setDate(QDate date)
{
    this->date=date;
}
//GETTERS
unsigned int Meal::getId()
{
    return id;
}
QString Meal::getName()
{
    return name;
}
QDate Meal::getDate()
{
    return date;
}

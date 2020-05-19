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

Meal::Meal(QString name, QDate date)
{
    this->name=name;
    this->date=date;
}

Meal::Meal(unsigned int id, QString name, QDate date):Meal(name, date)
{
    this->id=id;
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

unsigned int Meal::getKcal()
{
    unsigned int sum=0;
    for(int i=0; i<listProduct.size(); i++)
    {
        sum = sum + (listProduct[i].getKcal() * (listProduct[i].getGrams() * 0.01));
    }
    return sum;
}

double Meal::getProtein()
{
    double sum=0;
    for(int i=0; i<listProduct.size(); i++)
    {
        sum = sum + (listProduct[i].getProtein() * (listProduct[i].getGrams() * 0.01));
    }
    QString temp = QString::number(sum, 'f', 2);
    sum = temp.toDouble();
    return sum;
}

double Meal::getFats()
{
    double sum=0;
    for(int i=0; i<listProduct.size(); i++)
    {
        sum = sum + (listProduct[i].getFats() * (listProduct[i].getGrams() * 0.01));
    }
    QString temp = QString::number(sum, 'f', 2);
    sum = temp.toDouble();
    return sum;
}

double Meal::getCarbohydrates()
{
    double sum=0;
    for(int i=0; i<listProduct.size(); i++)
    {
        sum = sum + (listProduct[i].getCarbohydrates() * (listProduct[i].getGrams() * 0.01));
    }
    QString temp = QString::number(sum, 'f', 2);
    sum = temp.toDouble();
    return sum;
}

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

unsigned int Meal::getKcalMeal()
{
    unsigned int sum=0;
    for(int i=0; i<listProduct.size(); i++)
    {
        sum = sum + listProduct[i].getKcalByGrams();
    }
    return sum;
}

double Meal::getProteinMeal()
{
    double sum=0;
    for(int i=0; i<listProduct.size(); i++)
    {
        sum = sum + listProduct[i].getProteinByGrams();
    }
    return sum;
}

double Meal::getFatsMeal()
{
    double sum=0;
    for(int i=0; i<listProduct.size(); i++)
    {
        sum = sum + listProduct[i].getFatsByGrams();
    }
    return sum;
}

double Meal::getCarbohydratesMeal()
{
    double sum=0;
    for(int i=0; i<listProduct.size(); i++)
    {
        sum = sum + listProduct[i].getCarbohydratesByGrams();
    }
    return sum;
}

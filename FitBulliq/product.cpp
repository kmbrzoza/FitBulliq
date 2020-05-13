// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

// BK IS RESPONSIBLE FOR THIS CODE

#include "product.h"

Product::Product()
{

}
Product::~Product()
{
}

Product::Product(unsigned int id, QString name, unsigned int kcal, double protein, double fats, double carbohydrates)
{
    this->id=id;
    this->name=name;
    this->kcal=kcal;
    this->protein=protein;
    this->fats=fats;
    this->carbohydrates=carbohydrates;
}

//SETTERS
void Product::setId(unsigned int id)
{
    this->id=id;
}
void Product::setName(QString name)
{
    this->name=name;
}
void Product::setKcal(unsigned int kcal)
{
    this->kcal=kcal;
}
void Product::setProtein(double protein)
{
    this->protein=protein;
}
void Product::setFats(double fats)
{
    this->fats=fats;
}
void Product::setCarbohydrates(double carbohydrates)
{
    this->carbohydrates=carbohydrates;
}

//GETTERS
unsigned int Product::getId()
{
    return id;
}
QString Product::getName()
{
    return name;
}
unsigned int Product::getKcal()
{
    return kcal;
}
double Product::getProtein()
{
    return protein;
}
double Product::getFats()
{
    return fats;
}
double Product::getCarbohydrates()
{
    return carbohydrates;
}

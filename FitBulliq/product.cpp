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

Product::Product(QString name, unsigned int kcal, double protein, double fats, double carbohydrates)
{
    this->name=name;
    this->kcal=kcal;
    this->protein=protein;
    this->fats=fats;
    this->carbohydrates=carbohydrates;
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
Product::Product(unsigned int id, QString name, unsigned int kcal, double protein, double fats, double carbohydrates, unsigned int grams)
    :Product(id, name, kcal, protein, fats, carbohydrates)
{
    this->grams=grams;
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

void Product::setGrams(unsigned int grams)
{
    this->grams=grams;
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

unsigned int Product::getGrams()
{
    return grams;
}

unsigned int Product::getKcalByGrams()
{
    return (getKcal()*(getGrams()*0.01));
}

double Product::getProteinByGrams()
{
    return (getProtein()*(getGrams()*0.01));
}

double Product::getFatsByGrams()
{
    return (getFats()*(getGrams()*0.01));
}

double Product::getCarbohydratesByGrams()
{
    return (getCarbohydrates()*(getGrams()*0.01));
}


bool Product::operator==(const Product &product)
{
    if(id==product.id && grams == product.grams)
        return true;
    else
        return false;
}

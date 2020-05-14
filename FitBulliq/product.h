// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

// BK IS RESPONSIBLE FOR THIS CODE

#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

class Product
{
private:
    unsigned int id;
    QString name;
    unsigned int kcal;
    double protein;
    double fats;
    double carbohydrates;
    
public:
    Product();
    Product(unsigned int id, QString name, unsigned int kcal, double protein, double fats, double carbohydrates);
    virtual ~Product();
    
    //SETTERS
    void setId(unsigned int id);
    void setName(QString name);
    void setKcal(unsigned int kcal);
    void setProtein(double protein);
    void setFats(double fats);
    void setCarbohydrates(double carbohydrates);
    //GETTERS
    unsigned int getId();
    QString getName();
    unsigned int getKcal();
    double getProtein();
    double getFats();
    double getCarbohydrates();
};

#endif // PRODUCT_H
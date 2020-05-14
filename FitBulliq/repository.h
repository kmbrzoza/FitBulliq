// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA
// BK IS RESPONSIBLE FOR THIS CODE

#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "meal.h"
#include "product.h"

#include <QtSql>

class Repository
{
private:
    QSqlDatabase db;

public:
    Repository();
    virtual ~Repository();

    bool setPathOfDatabase(QString path); //setting path to file of database

    bool createTablesIfNotExist(); //creating tables if not exist

    bool addMeal(Meal meal); //adding meal to database (table meals)
    //adding product to database (table products), DOUBLES (xxxx.xx) where x is digit
    bool addProduct(Product product);
    bool addMealProduct(Meal meal, Product product, unsigned int grams); //adding Meal-Product to database (table mealsProducts)

};

#endif // REPOSITORY_H

// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA
// BK IS RESPONSIBLE FOR THIS CODE

#ifndef REPOSITORY_H
#define REPOSITORY_H

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

    bool addMeal(QString nameMeal, QDate date); //adding meal to database (table meals)
    //adding product to database (table products), DOUBLES (xxxx.xx) where x is digit
    bool addProduct(QString nameProduct, unsigned int kcal, double protein, double fats, double carbohydrates);
    bool addMealProduct(unsigned int idMeal, unsigned int idProduct, unsigned int grams); //adding Meal-Product to database (table mealsProducts)

};

#endif // REPOSITORY_H

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
#include <QDate>

class Repository
{
private:
    QSqlDatabase db;

public:
    Repository();
    virtual ~Repository();

    bool setPathOfDatabase(QString path); //setting path to file of database
    bool createTablesIfNotExist(); //creating tables if not exist


    bool addMeal(QList<Meal>& listMeal, Meal meal); //adding meal to database (table meals) and to QList<Meal>
    QList<Meal> getMealsByDate(QDate date); //getting meals by date
    bool setProductsToMealsByDate(QList<Meal>&); //setting products to meals
    bool removeMeal(QList<Meal>& listMeal, unsigned int indexOfComboBox); //listMeal is original list and indexOfComboBox is index clicked by user

    bool addProduct(Product product); //adding new product to database (table products), DOUBLES (xxxx.xx) where x is digit
    QList<Product> getProductsByText(QString text); //returns list of products where name is *text*
    Product getProductByTextIndex(QList<Product> listProduct, unsigned int indexOfRow); //listProduct is a list from getProductsByText; index is a row clicked by user
    bool removeProduct(Product product);//this product is returned by getProductByTextIndex; removing from DataBase

    bool addMealProduct(Meal& meal, Product product, unsigned int grams); //adding Meal-Product to database (table mealsProducts); product is returned by getProductByTextIndex
    Product getWhichProductRemove(Meal meal, int indexOfRow); // returns which product delete, indexOfRow is index of row which user clicked
    bool removeMealProduct(Meal& meal, Product productToRemove); //removing product from meal, productToRemove is returned by getWhichProductRemove()


    ////////////
    unsigned int getKcalDay(QList<Meal> listMeal);
    double getProteinDay(QList<Meal> listMeal);
    double getFatsDay(QList<Meal> listMeal);
    double getCarbohydratesDay(QList<Meal> listMeal);
};

#endif // REPOSITORY_H

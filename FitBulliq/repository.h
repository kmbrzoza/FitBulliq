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


    QList<Meal> getMealsByDate(QDate date); //returning meals by date
    QList<Product> getProductsToMeal(Meal meal); //returning products of meal
    unsigned int addMeal(Meal meal); //adding meal to database (table meals); returning id of added meal
    bool removeMeal(Meal meal); //listMeal is original list and indexOfComboBox is index clicked by user

    bool addProduct(Product product); //adding new product to database (table products), DOUBLES (xxxx.xx) where x is digit
    QList<Product> getProductsByText(QString text); //returns list of products where name is *text*
    bool removeProduct(Product product);//removing from DataBase
    bool editProduct(Product product, Product productEdited);

    bool addMealProduct(Meal meal, Product product, unsigned int grams); //adding Meal-Product to database (table mealsProducts);
    bool removeMealProduct(Meal meal, Product productToRemove); //removing product from meal
    bool editMealProduct(Meal meal, Product productToEdit, unsigned int grams); //editing product from meal

};

#endif // REPOSITORY_H

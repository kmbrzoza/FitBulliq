#ifndef SERVICE_H
#define SERVICE_H

#include "product.h"
#include "meal.h"
#include "repository.h"


class Service
{
private:
    QDate currentDate;

    Repository repo;

    QList<Meal> currentMeals;

    QList<Product> listProducts; //this list is updated by setListProductsByText()

public:
    Service();
    virtual ~Service();

    //Date
    void setCurrentDate(QDate date);
    QDate getCurrentDate();

    //Database
    void connectWithDatabase(QString path);

    //Service&Repository
    void setMealsByCurrentDate(); //getting meals by date from repo and setting on currentMeals
    void setProductsToMeals(); //setting products to currentMeals
    void addMeal(Meal meal); //adding meal to currentMeals
    void removeMeal(unsigned int indexOfRow); //remove meal from currentMeals and database; indexOfRow is number of selected row in ComboBox

    Meal getMealClicked(unsigned int indexOfRow);

    void setListProductsByText(QString text); //setting to listProducts products where their name is *text*
    void addProduct(Product product); //add product to database
    //PO REMOVE POWINNA SIE ZAKTUALIZOWAC LISTA POSILKOW BO USUNELISMY PRODUKT KTORY MOGL BYC W JAKIMS POSILKU
    void removeProduct(Product product); //removing product from database

    Product getProductClicked(unsigned int indexOfRow); //returns which product is clicked by indexOfRow from listProducts

    //adding product to meal, where meal is currentMeals[indexOfSelectedMeal], product is returned by getProductClicked()
    void addMealProduct(unsigned int indexOfSelectedMeal, Product product, unsigned int grams);
    //removing product from actual meal, indexOfSelectedProduct is number of row in list of products from meal
    void removeMealProduct(unsigned int indexOfSelectedMeal, unsigned int indexOfSelectedProduct);
    void editMealProduct(unsigned int indexOfSelectedMeal, unsigned int indexOfSelectedProduct, unsigned int grams);//editting in meal[index] the product[index] and setting grams


    ////////////
    unsigned int getKcalDay();
    double getProteinDay();
    double getFatsDay();
    double getCarbohydratesDay();
};

#endif // SERVICE_H

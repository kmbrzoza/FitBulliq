#ifndef SERVICE_H
#define SERVICE_H

#include "product.h"
#include "meal.h"
#include "repository.h"

#include <QMessageBox>

class Service
{
private:


    Repository repo;




public:
    QList<Product> listProducts; //this list is updated by setListProductsByText() //KG moved from private

    QList<Meal> currentMeals;//KG moved from private
    Service();
    virtual ~Service();

    //Database
    void connectWithDatabase(QString path);

    //Service&Repository
    void setMealsByDate(QDate date); //getting meals by date from repo and setting on currentMeals
    void setProductsToMeals(); //setting products to currentMeals
    void addMeal(Meal meal); //adding meal to currentMeals
    void removeMeal(unsigned int indexOfRow); //remove meal from currentMeals and database; indexOfRow is number of selected row in ComboBox

    Meal getMealClicked(unsigned int indexOfRow);

    void setListProductsByText(QString text); //setting to listProducts products where their name is *text*
    void addProduct(Product product); //add product to database
    //PO REMOVE POWINNA SIE ZAKTUALIZOWAC LISTA POSILKOW BO USUNELISMY PRODUKT KTORY MOGL BYC W JAKIMS POSILKU
    void removeProduct(Product product); //removing product from database
    void editProduct(Product product, Product productEdited); //edit product in database; product is which product want edit, productEdited is product after edit

    Product getProductClicked(unsigned int indexOfRow); //returns which product is clicked by indexOfRow from listProducts

    //adding product to meal, where meal is currentMeals[indexOfSelectedMeal], product is returned by getProductClicked()
    void addMealProduct(unsigned int indexOfSelectedMeal, Product product, unsigned int grams);
    //removing product from actual meal, indexOfSelectedProduct is number of row in list of products from meal
    void removeMealProduct(unsigned int indexOfSelectedMeal, unsigned int indexOfSelectedProduct);
    void editMealProduct(unsigned int indexOfSelectedMeal, unsigned int indexOfSelectedProduct, unsigned int grams);//editting in meal[index] the product[index] and setting grams

    void removeProductsFromCurrentMeals(); //removing all listProducts from currentMeals; it clear lists and is easy to update that by setProductsToMeals() when for example edited/removed product

    ////////////
    unsigned int getKcalDay();
    double getProteinDay();
    double getFatsDay();
    double getCarbohydratesDay();
};

#endif // SERVICE_H

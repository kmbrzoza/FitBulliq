// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

// BK IS RESPONSIBLE FOR THIS CODE

#include "service.h"

Service::Service()
{

}

Service::~Service()
{
}
/////////////////////////////////////////




//DATABASE
void Service::connectWithDatabase(QString path)
{
    try
    {
        repo.setPathOfDatabase(path);
        repo.createTablesIfNotExist();
    }
    catch (std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - connecting database");
        message.setText(e.what());
        message.exec();
    }
}
///////////////////////////////



//SERVICE&REPOSITORY
void Service::setMealsByDate(QDate date)
{
    try
    {
        currentMeals = repo.getMealsByDate(date);
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - setting Meals");
        message.setText(e.what());
        message.exec();
    }
}

void Service::setProductsToMeals()
{
    try
    {
        foreach(Meal meal, currentMeals)
        {
            meal.listProduct = repo.getProductsToMeal(meal);
        }
    }
    catch (std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - setting Products to Meal");
        message.setText(e.what());
        message.exec();
    }
}

void Service::addMeal(Meal meal)
{
    try
    {
        meal.setId(repo.addMeal(meal));
        currentMeals.append(meal);
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - adding Meal");
        message.setText(e.what());
        message.exec();
    }
}

void Service::removeMeal(unsigned int indexOfRow)
{
    try
    {
        repo.removeMeal(currentMeals[indexOfRow]);
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - removing Meal");
        message.setText(e.what());
        message.exec();
    }
}
///////////////////////////


Meal Service::getMealClicked(unsigned int indexOfRow)
{
    return currentMeals[indexOfRow];
}
///////////////////////////


void Service::addProduct(Product product)
{
    try
    {
        repo.addProduct(product);
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - adding Product");
        message.setText(e.what());
        message.exec();
    }
}

void Service::setListProductsByText(QString text)
{
    try
    {
        listProducts = repo.getProductsByText(text);
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - setting List Product");
        message.setText(e.what());
        message.exec();
    }
}

void Service::removeProduct(Product product)
{
    try
    {
        repo.removeProduct(product);

        //when done, have to update currentMeals list
        removeProductsFromCurrentMeals();
        setProductsToMeals();
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - removing Product");
        message.setText(e.what());
        message.exec();
    }
}

void Service::editProduct(Product product, Product productEdited)
{
    try
    {
        repo.editProduct(product, productEdited);

        //when done, have to update currentMeals list
        removeProductsFromCurrentMeals();
        setProductsToMeals();
    }
    catch (std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - editing Product");
        message.setText(e.what());
        message.exec();
    }
}
///////////////////////////////



Product Service::getProductClicked(unsigned int indexOfRow)
{
    return listProducts[indexOfRow];
}
/////////////////////////////////////

void Service::addMealProduct(unsigned int indexOfSelectedMeal, Product product, unsigned int grams)
{
    try
    {
        repo.addMealProduct(currentMeals[indexOfSelectedMeal], product, grams);
        product.setGrams(grams);
        currentMeals[indexOfSelectedMeal].listProduct.append(product);
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - adding Meal Product");
        message.setText(e.what());
        message.exec();
    }
}

void Service::removeMealProduct(unsigned int indexOfSelectedMeal, unsigned int indexOfSelectedProduct)
{
    try
    {
        repo.removeMealProduct(currentMeals[indexOfSelectedMeal], currentMeals[indexOfSelectedMeal].listProduct[indexOfSelectedProduct]);
        currentMeals[indexOfSelectedMeal].listProduct.removeAt(indexOfSelectedProduct);
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - removing Meal Product");
        message.setText(e.what());
        message.exec();
    }
}

void Service::editMealProduct(unsigned int indexOfSelectedMeal, unsigned int indexOfSelectedProduct, unsigned int grams)
{
    try
    {
        repo.editMealProduct(currentMeals[indexOfSelectedMeal], currentMeals[indexOfSelectedMeal].listProduct[indexOfSelectedProduct], grams);
        currentMeals[indexOfSelectedMeal].listProduct[indexOfSelectedProduct].setGrams(grams);
    }
    catch(std::exception &e)
    {
        QMessageBox message;
        message.setWindowTitle("Error - editing Meal Product");
        message.setText(e.what());
        message.exec();
    }
}
/////////////////////////////////


void Service::removeProductsFromCurrentMeals()
{
    foreach(Meal meal, currentMeals)
    {
        while(!meal.listProduct.isEmpty())
        {
            meal.listProduct.removeLast();
        }
    }
}
////////////////////////////////

//SERVICE
unsigned int Service::getKcalDay()
{
    unsigned int sum=0;
    foreach(Meal meal, currentMeals)
    {
        sum = sum + meal.getKcalMeal();
    }
    return sum;
}

double Service::getProteinDay()
{
    double sum=0;
    foreach(Meal meal, currentMeals)
    {
        sum = sum + meal.getProteinMeal();
    }
    return sum;
}

double Service::getFatsDay()
{
    double sum=0;
    foreach(Meal meal, currentMeals)
    {
        sum = sum + meal.getFatsMeal();
    }
    return sum;
}

double Service::getCarbohydratesDay()
{
    double sum=0;
    foreach(Meal meal, currentMeals)
    {
        sum = sum + meal.getCarbohydratesMeal();
    }
    return sum;
}




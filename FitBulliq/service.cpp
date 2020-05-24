#include "service.h"

Service::Service()
{

}

Service::~Service()
{
}
/////////////////////////////////////////



//DATE
void Service::setCurrentDate(QDate date)
{
    currentDate=date;
}

QDate Service::getCurrentDate()
{
    return currentDate;
}
///////////////////



//DATABASE
bool Service::setPathOfDatabase(QString path)
{
    if(repo.setPathOfDatabase(path))
        return true;
    else
        return false;
}

bool Service::createTablesIfNotExist()
{
    if(repo.createTablesIfNotExist())
        return true;
    else
        return false;
}
///////////////////////////////



//SERVICE&REPOSITORY
void Service::setMealsByCurrentDate()
{
   currentMeals = repo.getMealsByDate(getCurrentDate());
}

void Service::setProductsToMeals()
{
    foreach(Meal meal, currentMeals)
    {
        meal.listProduct = repo.getProductsToMeal(meal);
    }
}

void Service::addMeal(Meal meal)
{
    meal.setId(repo.addMeal(meal));
    currentMeals.append(meal);
}

void Service::removeMeal(unsigned int indexOfRow)
{
    if(repo.removeMeal(currentMeals[indexOfRow]))
    {
        currentMeals.removeAt(indexOfRow);
        //removed
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
    if(repo.addProduct(product))
    {
        //added
    }
    else
    {
        //not added
    }
}

void Service::setListProductsByText(QString text)
{
    listProducts = repo.getProductsByText(text);
}

void Service::removeProduct(Product product)
{
    repo.removeProduct(product);
}
///////////////////////////////



Product Service::getProductClicked(unsigned int indexOfRow)
{
    return listProducts[indexOfRow];
}
/////////////////////////////////////

void Service::addMealProduct(unsigned int indexOfSelectedMeal, Product product, unsigned int grams)
{
    if(repo.addMealProduct(currentMeals[indexOfSelectedMeal], product, grams))
    {
        product.setGrams(grams);
        currentMeals[indexOfSelectedMeal].listProduct.append(product);
    }
    else
    {
        //not added
    }
}

void Service::removeMealProduct(unsigned int indexOfSelectedMeal, unsigned int indexOfSelectedProduct)
{
    if(repo.removeMealProduct(currentMeals[indexOfSelectedMeal], currentMeals[indexOfSelectedMeal].listProduct[indexOfSelectedProduct]))
    {
        currentMeals[indexOfSelectedMeal].listProduct.removeAt(indexOfSelectedProduct);
    }
    else
    {
        //not removed
    }
}

void Service::editMealProduct(unsigned int indexOfSelectedMeal, unsigned int indexOfSelectedProduct, unsigned int grams)
{
    if(repo.editMealProduct(currentMeals[indexOfSelectedMeal], currentMeals[indexOfSelectedMeal].listProduct[indexOfSelectedProduct], grams))
    {
        currentMeals[indexOfSelectedMeal].listProduct[indexOfSelectedProduct].setGrams(grams);
    }
    else
    {
        //not edited
    }
}
/////////////////////////////////





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




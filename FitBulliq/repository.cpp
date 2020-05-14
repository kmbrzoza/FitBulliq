// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA

// BK IS RESPONSIBLE FOR THIS CODE

#include "repository.h"


Repository::Repository()
{

}

Repository::~Repository()
{
}

bool Repository::setPathOfDatabase(QString path)
{
    db =  QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);

    if(db.open())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Repository::createTablesIfNotExist()
{
    QSqlQuery query;

    //TABLE MEALS
    if(!query.exec("CREATE TABLE IF NOT EXISTS meals(id integer unique primary key autoincrement, name text, date date)"))
        return false;
    //TABLE PRODUCTS
    if(!query.exec("CREATE TABLE IF NOT EXISTS products(id integer unique primary key autoincrement, name text, "
                  "kcal int, protein numeric(6,2), fats numeric(6,2), carbohydrates numeric(6,2) )"))
        return false;
    //TABLE MEALSPRODUCTS
    if(!query.exec("CREATE TABLE IF NOT EXISTS mealsProducts(id integer unique primary key autoincrement, "
                   "idMeal integer REFERENCES meals(id), idProduct integer REFERENCES products(id), grams int)"))
        return false;

    return true;
}

bool Repository::addMeal(Meal meal)
{
    QSqlQuery query;
    if(query.exec("insert into meals (name, date) values('"+meal.getName()+"','"+meal.getDate().toString("yyyy-MM-dd")+"')"))
        return true;
    else
        return false;
}

bool Repository::addProduct(Product product)
{
    //DOUBLES ARE (xxxx.xx) where x is digit

    //Creating QStrings with numbers to add to table by using QString
    //QString kcalString = QString::number(kcal);
    //QString proteinString = QString::number(protein);
    //QString fatsString = QString::number(fats);
    //QString carbohydratesString = QString::number(carbohydrates);

    QSqlQuery query;
    if(query.exec("insert into products (name, kcal, protein, fats, carbohydrates) values ('"+product.getName()+"', '"+product.getKcal()+"', "
                  "'"+product.getProtein()+"', '"+product.getFats()+"', '"+product.getCarbohydrates()+"')"))
        return true;
    else
        return false;
}

bool Repository::addMealProduct(Meal meal, Product product, unsigned int grams)
{
    QSqlQuery query;
    query.prepare("insert into mealsProducts (idMeal, idProduct, grams) values (:idMeal, :idProduct, :grams)");
    query.bindValue(":idMeal", meal.getId());
    query.bindValue(":idProduct", product.getId());
    query.bindValue(":grams", grams);
    if(query.exec())
        return true;
    else
        return false;
}






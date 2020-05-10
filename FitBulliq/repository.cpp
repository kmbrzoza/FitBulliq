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

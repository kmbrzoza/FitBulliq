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

bool Repository::addMeal(QString nameMeal, QDate date)
{
    QSqlQuery query;
    if(query.exec("insert into meals (name, date) values('"+nameMeal+"','"+date.toString("yyyy-MM-dd")+"')"))
        return true;
    else
        return false;
}

bool Repository::addProduct(QString nameProduct, unsigned int kcal, double protein, double fats, double carbohydrates)
{
    //DOUBLES ARE (xxxx.xx) where x is digit

    //Creating QStrings with numbers to add to table by using QString
    //QString kcalString = QString::number(kcal);
    //QString proteinString = QString::number(protein);
    //QString fatsString = QString::number(fats);
    //QString carbohydratesString = QString::number(carbohydrates);

    QSqlQuery query;
    if(query.exec("insert into products (name, kcal, protein, fats, carbohydrates) values ('"+nameProduct+"', '"+kcal+"', "
                  "'"+protein+"', '"+fats+"', '"+carbohydrates+"')"))
        return true;
    else
        return false;
}

bool Repository::addMealProduct(unsigned int idMeal, unsigned int idProduct, unsigned int grams)
{
    //QSqlQuery query;
    //if(query.exec("insert into mealsProducts (idMeal, idProduct, grams) values ('"+idMeal+"', '"+idProduct+"', '"+grams+"')"))
        //return true;
    //else
        //return false;
}






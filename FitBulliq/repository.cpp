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
/////////////////////////////////////////////////


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
///////////////////////////////////////////////////





QList<Meal> Repository::getMealsByDate(QDate date)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM meals where date='"+date.toString("yyyy-MM-dd")+"'");
    QList<Meal> mealListByDate;
    if(query.exec())
    {
        while(query.next())
        {
            //Adding new meal to list, I'm giving date from argument, because its the same date
            mealListByDate.append(Meal(query.value(0).toInt(), query.value(1).toString(), date));
        }
    }
    else
    {
        qDebug()<<"ERROR IN Repository::getMealsByDate()";
        //throw
    }
    return mealListByDate;
}


QList<Product> Repository::getProductsToMeal(Meal meal)
{
    QSqlQuery queryForIdProduct;
    QSqlQuery queryForProduct;

    //Preparing select to get idProduct witch is in relation with idMeal
    queryForIdProduct.prepare("SELECT mp.idProduct, mp.grams from mealsProducts mp INNER JOIN products p ON mp.idProduct=p.id "
                      "INNER JOIN meals m on mp.idMeal=m.id where m.id=:mId");
    queryForIdProduct.bindValue(":mId", meal.getId());

    if(queryForIdProduct.exec())
    {
        while(queryForIdProduct.next())
        {
            //Now preparing select to get product specs
            queryForProduct.prepare("select name, kcal, protein, fats, carbohydrates from products where id=:pId");
            queryForProduct.bindValue(":pId", queryForIdProduct.value(0));

            if(queryForProduct.exec())
            {
                queryForProduct.next();
                meal.listProduct.append(Product(queryForIdProduct.value(0).toInt(), //id
                                                                     queryForProduct.value(0).toString(), //name
                                                                     queryForProduct.value(1).toInt(), //kcal
                                                                     queryForProduct.value(2).toDouble(), //protein
                                                                     queryForProduct.value(3).toDouble(), //fats
                                                                     queryForProduct.value(4).toDouble(), //carbohydrates
                                                                     queryForIdProduct.value(1).toInt())); //grams
            }
            else
            {
                qDebug() << "ERROR - select with specs from product";
                //THROWA ZROBIC//return false;
            }
        }

    }
    else
    {
        qDebug() << "ERROR - select with inner join from mealProducts";
        //THROWA ZROBIC//return false;
    }

    return meal.listProduct;
}


unsigned int Repository::addMeal(Meal meal)
{
    QSqlQuery query;
    if(query.exec("insert into meals (name, date) values('"+meal.getName()+"','"+meal.getDate().toString("yyyy-MM-dd")+"')"))
    {
        query.next();
        return query.lastInsertId().toInt();
    }
    else
        return false;
    //throw
}


bool Repository::removeMeal(Meal meal)
{
    QSqlQuery query;

    while(meal.listProduct.size()>0)
    {
        //removing from meal last product from .listProduct while size > 0 (want remove all)
        //when removing all the time the last one, at the end size = 0
        if(removeMealProduct(meal, meal.listProduct[meal.listProduct.size()-1]))
        {
            //removed
        }
        else
        {
            qDebug()<<"ERROR with deleting last product from meal: Repository::removeMeal()->removeMealProduct()";
            return false;
        }
    }

    query.prepare("DELETE from meals where id=:idMeal");
    query.bindValue(":idMeal", meal.getId());

    if(query.exec())
    {
        return true;
    }
    else
    {
        qDebug()<<"ERROR with deleting meal: removeMeal()";
        return false;
    }
}
////////////////////////////////////////////////////////////////






bool Repository::addProduct(Product product)
{
    //DOUBLES ARE (xxxx.xx) where x is digit

    QSqlQuery query;
    if(query.exec("insert into products (name, kcal, protein, fats, carbohydrates) values ('"+product.getName()+"', '"+product.getKcal()+"', "
                  "'"+product.getProtein()+"', '"+product.getFats()+"', '"+product.getCarbohydrates()+"')"))
        return true;
    else
        return false;
}


QList<Product> Repository::getProductsByText(QString text)
{
    QList<Product> listProducts;
    QSqlQuery query;
    query.prepare("SELECT * from products where name like '%:text%'");
    query.bindValue(":text", text);
    if(query.exec())
    {
        while(query.next())
        {
            listProducts.append(Product(query.value(0).toInt(), query.value(1).toString(), query.value(2).toInt(),
                                        query.value(3).toDouble(), query.value(4).toDouble(), query.value(5).toDouble()));
        }
    }
    else
        qDebug()<<"Error in getting products by text";

    return listProducts;
}


bool Repository::removeProduct(Product product)
{
    //DODAĆ TUTAJ USUWANIE DANEGO PRODUKTU Z INNYCH POSIŁKOW NAJPIERW!!!!
    QSqlQuery query;

    query.prepare("DELETE from mealsProducts where idProduct=:idProd");
    query.bindValue(":idProd", product.getId());

    if(!query.exec())
    {
        qDebug()<<"ERROR with deleting in mealsProducts product: removeProduct()";
        return false;
    }

    query.prepare("DELETE from products where id=:idProduct");
    query.bindValue(":idProduct", product.getId());

    if(!query.exec())
    {
        qDebug()<<"ERROR with deleting in products product: removeProduct()";
        return false;
    }

    return true;
}
///////////////////////////////////////////////////////////////////




bool Repository::addMealProduct(Meal meal, Product product, unsigned int grams)
{
    QSqlQuery query;
    query.prepare("insert into mealsProducts (idMeal, idProduct, grams) values (:idMeal, :idProduct, :grams)");
    query.bindValue(":idMeal", meal.getId());
    query.bindValue(":idProduct", product.getId());
    query.bindValue(":grams", grams);
    if(query.exec())
    {
        return true;
    }
    else
        return false;
}


bool Repository::removeMealProduct(Meal meal, Product productToRemove)
{
    QSqlQuery query;
    query.prepare("DELETE from mealsProducts where idMeal=:idMeal and idProduct=:idProduct and grams=:grams");
    query.bindValue(":idMeal", meal.getId());
    query.bindValue(":idProduct", productToRemove.getId());
    query.bindValue(":grams", productToRemove.getGrams());
    if(query.exec())
    {
        return true;
    }
    else
    {
        qDebug()<<"ERROR with deleting product from meal (bool removeMealProduct())";
        return false;
    }
}


bool Repository::editMealProduct(Meal meal, Product productToEdit, unsigned int grams)
{
    QSqlQuery query;
    query.prepare("UPDATE mealsProducts set grams=:gramsToEdit where idMeal=:idMeal and idProduct=:idProduct and grams=:grams");
    query.bindValue(":gramsToEdit", grams);
    query.bindValue(":idMeal", meal.getId());
    query.bindValue(":idProduct", productToEdit.getId());
    query.bindValue(":grams", productToEdit.getGrams());
    if(query.exec())
    {
        return true;
    }
    else
    {
        qDebug()<<"ERROR with updating MealProduct - bool edutMealProduct()";
        return false;
    }

}
//////////////////////////////////









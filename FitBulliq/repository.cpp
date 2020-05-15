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

    QSqlQuery query;
    if(query.exec("insert into products (name, kcal, protein, fats, carbohydrates) values ('"+product.getName()+"', '"+product.getKcal()+"', "
                  "'"+product.getProtein()+"', '"+product.getFats()+"', '"+product.getCarbohydrates()+"')"))
        return true;
    else
        return false;
}

QList<Product> getProductsByText(QString text)
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


QList<Meal> getMealsByDate(QDate date)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM meals where date='"+date.toString("yyyy-MM-dd")+"'");
    QList<Meal> mealListByDate;
    while(query.next())
    {
        //Adding new meal to list, I'm giving date from argument, because its the same date
        mealListByDate.append(Meal(query.value(0).toInt(), query.value(1).toString(), date));
    }
    return mealListByDate;
}

bool setProductsToMealsByDate(QList<Meal>& mealListByDate)
{
    QSqlQuery queryForIdProduct;
    QSqlQuery queryForProduct;
    for(int i=0; i<mealListByDate.size(); i++)//Loop setting products to all meals which are in selected date
    {
        //Preparing select to get idProduct witch is in relation with idMeal
        queryForIdProduct.prepare("SELECT mp.idProduct, mp.grams from mealsProducts mp INNER JOIN products p ON mp.idProduct=p.id "
                      "INNER JOIN meals m on mp.idMeal=m.id where m.id=:mId");
        queryForIdProduct.bindValue(":mId", mealListByDate[i].getId());

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
                    mealListByDate[i].listProduct.append(Product(queryForIdProduct.value(0).toInt(), //id
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
                    return false;
                }
            }

        }
        else
        {
            qDebug() << "ERROR - select with inner join from mealProducts";
            return false;
        }
    }

    return true;
}





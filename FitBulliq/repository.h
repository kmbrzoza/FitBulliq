// FITBULLIQ - PROJECT PROGRAMOWANIE II
// AUTHORS: BRZOZA KRZYSZTOF, GENDASZ KAMILA
// shortcuts corresponding to the part of the code to the name
// BK - BRZOZA KRZYSZTOF ; GK - GENDASZ KAMILA
// BK IS RESPONSIBLE FOR THIS CODE

#ifndef REPOSITORY_H
#define REPOSITORY_H

#include <QtSql>

class Repository
{
private:
    QSqlDatabase db;

public:
    Repository();
    virtual ~Repository();

    bool setPathOfDatabase(QString path); //setting path to file of database
};

#endif // REPOSITORY_H

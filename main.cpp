#include <QCoreApplication>
#include <QtSql/QtSql>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
#include <GVAR.h>
#include <QtSql/QSqlDatabase>
#include <string>
#include <QDebug>
#include <boost/version.hpp>
using namespace std;
#include <iostream>


int main(int argc, char *argv[])
{
   // QCoreApplication a(argc, argv);
    cout<<"hello world"<<endl;
    QSqlDatabase db;

    db = QSqlDatabase::addDatabase(DB_DRIVER_NAME);
        db.setHostName(DB_HOST_NAME);
        db.setDatabaseName(DATABASE_NAME);
        db.setUserName(USER_NAME);
        db.setPassword(PASSWORD);
        if (!db.open()){
            //QMessageBox::information(0, "数据库错误", "无法打开数据库");
            cout<<"Error 1"<<endl;
            if (db.lastError().isValid())
                qDebug()<<db.lastError();
            exit(1);
        }
        //获得数据库中的表名
        QSqlQuery query(db);

        cout << "Boost version: "
                  << BOOST_VERSION / 100000
                  << "."
                  << BOOST_VERSION / 100 % 1000
                  << "."
                  << BOOST_VERSION % 100
                  << std::endl;
            return 0;


        query.exec("select no,name from students");
        while (query.next()){
           qDebug()<< query.value(0).toString();
            //tables.insert(tableName);
            //cout<<tableName;
        }


    //return a.exec();
}



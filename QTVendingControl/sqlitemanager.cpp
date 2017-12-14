#include "sqlitemanager.h"

SqliteManager::SqliteManager(const QString &path)
{
    db_ = QSqlDatabase::addDatabase("QSQLITE");
    db_.setDatabaseName(path);

    if (db_.open()){
        qDebug() << "Error: open connection fails";
    } else {
        qDebug() << "Success: open connection successful";
    }
}



int SqliteManager::executeSQL(QSqlQuery query){
    int result = 0;

    if(query.exec()){

    } else {
        result = 1;
        qDebug() << "SqliteManager::executeSQL ERROR:  " << query.lastError();
    }

    return result;
}

bool SqliteManager::migration_has_up(){
    return false;
}
bool SqliteManager::migration_up(){
return false;
}
bool SqliteManager::migration_has_down(){
return false;
}
bool SqliteManager::migration_down(){
return false;
}

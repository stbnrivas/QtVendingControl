#ifndef SQLITEMANAGER_H
#define SQLITEMANAGER_H

#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class SqliteManager
{
public:
    SqliteManager(const QString &path);
    int executeSQL(QSqlQuery query);

    bool migration_has_up();
    bool migration_up();
    bool migration_has_down();
    bool migration_down();

private:
    QSqlDatabase db_;

};

#endif // SQLITEMANAGER_H

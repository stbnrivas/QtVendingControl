#include "mainwindow.h"
#include <QApplication>

#include "sqlitemanager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    static const QString path = "../QtVendingControl/QTVendingControl/db/qtvendingcontrol.sqlite3";
    SqliteManager dbManager(path);

    w.show();

    return a.exec();
}

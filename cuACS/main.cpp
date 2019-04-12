#include "MainWindow.h"
#include "CuacsAPI.h"
#include "AddAnimal.h"
#include <QApplication>
#include <QLabel>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFontDatabase database;
    database.addApplicationFont(":/fonts/EgyptienneRoman.ttf");

    MainWindow w;
    w.setWindowTitle("cuACS");
    w.show();

    return a.exec();
}

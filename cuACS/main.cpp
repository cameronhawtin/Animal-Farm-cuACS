#include "mainwindow.h"
#include "CuacsAPI.h"
#include "addanimal.h"
#include <QApplication>
#include <QLabel>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QFontDatabase::addApplicationFont(":/cuACS/EgyptienneRoman.ttf");
    QFont font = QFont("EgyptienneRoman", 10, 1);

    QApplication a(argc, argv);

    MainWindow w;
    w.setWindowTitle("cuACS");
    w.show();

    return a.exec();
}

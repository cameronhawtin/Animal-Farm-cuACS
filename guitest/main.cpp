#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
//test
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MainWindow w;

    w.setWindowTitle("cuACS");

    w.show();

    return a.exec();
}

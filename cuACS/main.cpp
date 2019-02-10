#include "mainwindow.h"
#include <QApplication>
#include <QLabel>


//int main(int argc, char const *argv[]) {
//	CuacsAPI capi;
//	capi.init();
//	return 0;
//}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    MainWindow w;

    w.setWindowTitle("cuACS");

    w.show();

    return a.exec();
}

#include <iostream>
#include <QApplication>
#include "MainWindow.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    FileLoader loader;
    MainWindow window(&loader);
    window.show();
    return app.exec();

}

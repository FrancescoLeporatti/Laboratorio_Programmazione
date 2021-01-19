#include <iostream>
#include <QApplication>
#include "MainWindow.h"

int main(int argc, char *argv[]) {
    FileLoader loader;
    QApplication app(argc, argv);
    MainWindow window(&loader);
    window.show();
    return app.exec();

}

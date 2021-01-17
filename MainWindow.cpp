#include "MainWindow.h"

MainWindow::MainWindow() {
    this->setFixedSize(QSize(600, 400));
    text = new QLabel("Test Window", this);
    text->setGeometry(150, 150, 200, 100);
}
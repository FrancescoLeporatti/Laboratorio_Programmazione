#ifndef LABORATORIO_PROGRAMMAZIONE_MAINWINDOW_H
#define LABORATORIO_PROGRAMMAZIONE_MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

class MainWindow : public QMainWindow {
public:
    MainWindow();

private:
    QLabel *text;
};


#endif //LABORATORIO_PROGRAMMAZIONE_MAINWINDOW_H

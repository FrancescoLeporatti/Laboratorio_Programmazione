#ifndef LABORATORIO_PROGRAMMAZIONE_MAINWINDOW_H
#define LABORATORIO_PROGRAMMAZIONE_MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPushButton>
#include <QProgressBar>
#include <QTextEdit>
#include "Observer.h"
#include "FileLoader.h"


class MainWindow : public QMainWindow, public Observer {
Q_OBJECT
public:
    explicit MainWindow(FileLoader* fl, QWidget* parent = 0);

    virtual ~MainWindow() {
        loader->removeObserver(this);
    }

    void update() override;

private slots:
    void loadResources();


private:
    FileLoader* loader;

    QPushButton* button;
    QProgressBar* progressBar;
    QTextEdit* text;
    QLabel* label;
    QLabel* title;

};


#endif //LABORATORIO_PROGRAMMAZIONE_MAINWINDOW_H

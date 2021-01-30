#ifndef LABORATORIO_PROGRAMMAZIONE_CONCRETEOBSERVER_H
#define LABORATORIO_PROGRAMMAZIONE_CONCRETEOBSERVER_H

#include "Observer.h"
#include "FileLoader.h"


class ConcreteObserver : public Observer {
public:
    ConcreteObserver(FileLoader* fl) : loader(fl) {
        loader->addObserver(this);
    }

    ~ConcreteObserver(){
        loader->removeObserver(this);
    }

    void update() override {
        count ++;
    }

    int getCount() const {
        return count;
    }

private:
    FileLoader* loader;
    int count {0};
};


#endif //LABORATORIO_PROGRAMMAZIONE_CONCRETEOBSERVER_H

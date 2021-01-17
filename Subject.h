#ifndef LABORATORIO_PROGRAMMAZIONE_SUBJECT_H
#define LABORATORIO_PROGRAMMAZIONE_SUBJECT_H

#include "Observer.h"

class Subject {
public:
    virtual void addObserver(Observer *o) = 0;

    virtual void removeObserver(Observer *o) = 0;

    virtual void notify() = 0;
};


#endif //LABORATORIO_PROGRAMMAZIONE_SUBJECT_H

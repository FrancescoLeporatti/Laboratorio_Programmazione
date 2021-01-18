#ifndef LABORATORIO_PROGRAMMAZIONE_OBSERVER_H
#define LABORATORIO_PROGRAMMAZIONE_OBSERVER_H


class Observer {
public:
    virtual ~Observer() {};
    virtual void update() = 0;
};


#endif //LABORATORIO_PROGRAMMAZIONE_OBSERVER_H

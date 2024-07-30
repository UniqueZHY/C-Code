//
// Created by 张红妍 on 2024/7/30.
//

#ifndef MYCODECPP_OBSERVERABLE_H
#define MYCODECPP_OBSERVERABLE_H

#include "observer.h"
#include "list"

class Observerable {
public:
    void Attench(Observer* observer);
    void Dettench(Observer* observer);
    void Notify(void * str);
    void SetChange(void * str);
    void GetNews();

    Observerable():change_(false) {};
    virtual ~Observerable() {};
private:
    bool change_;
    list<Observer*> observer_list;
};


#endif //MYCODECPP_OBSERVERABLE_H

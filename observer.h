//
// Created by 张红妍 on 2024/7/30.
//

#ifndef MYCODECPP_OBSERVER_H
#define MYCODECPP_OBSERVER_H

#endif //MYCODECPP_OBSERVER_H
#include "base.h"
class Observer {
public:
    //当被观察对西那个发生变化时，通知被观察着调用这个方法
    //虚类 为了让子类去实现 调用的时候可以执行子类的实现方法
    virtual void Update(void * str) = 0;

protected:
    Observer(){};
    virtual ~Observer(){};
};

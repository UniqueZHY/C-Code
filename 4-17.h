//
// Created by 张红妍 on 2024/4/17.
//

#ifndef MYCODECPP_4_17_H
#define MYCODECPP_4_17_H

#endif //MYCODECPP_4_17_H
#include "base.h"
class Time {
private:
    int hours;
    int mins;
public:
    Time();
    Time(int h, int m);
    Time AddTime(const Time & t);
    void show() {
        std::cout << hours << ":" << mins << std::endl;
    }
    //重载了 + 格式
    // 返回值 operator 重载运算符 参数
    Time operator+(const Time & t) {
        Time sum(0,0);
        sum.mins = mins + t.mins;
        sum.hours = hours + t.hours + sum.mins / 60;
        sum.mins %= 60;
        return sum;
    }
};
Time::Time() {
    hours = mins = 0;
}

Time::Time(int h, int m) {
    hours = h;
    mins = m;
}

Time Time::AddTime(const Time &t) {
    Time sum(0,0);
    sum.mins = mins + t.mins;
    sum.hours = hours + t.hours + sum.mins / 60;
    sum.mins %= 60;
    return sum;
}
namespace space417 {
    void operatorfunc() {
        Time t1(5, 55);
        Time t2(2, 40);
        Time sum;
        sum = t1.AddTime(t2);
        sum.show();
        //operator function
        Time sum2;
        sum2 = t1 + t2;
        sum2.show();
    }
}
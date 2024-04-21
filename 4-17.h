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
    Time operator*(double mul);
    friend Time operator*(double mul, Time &t);
    friend void operator<<(ostream &os, Time t);
};

Time Time::operator*(double mul) {
    //只是测试 不实现详细逻辑
    //hours *= mul;
    //mins *= mul;
    //return *this;
    Time result;//result 为空0:0
    //调用的2:20是this指针指向的值
    long temp = hours * mul * 60 + mins * mul;
    result.hours = temp / 60;
    result.mins = temp % 60;
    return result;
}

Time operator*(double mul, Time & t) {
    //函数声明在类中，且是友元函数，确保可以访问private变量hours mins
    /*long temp = t.hours * mul * 60 + t.mins * mul;
    t.hours = temp / 60;
    t.mins = temp % 60;
    return t;*/
    return t * mul;//实际调用上面注释部分的t.operator(mul)
}

void operator<<(ostream &os, Time t) {
    os << t.hours << ":" << t.mins;
}

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
        /*Time t1(5, 55);
        Time t2(2, 40);
        Time sum;
        sum = t1.AddTime(t2);
        sum.show();
        //operator function
        Time sum2;
        sum2 = t1 + t2;
        sum2.show();*/
        Time t(2, 20);
        Time r;
        r = t * 2.0;//实际上调用的是t.operator*(2.0)，但是如果返过来使2.0成为参数将无法使用，需要又到友元函数来解决该问题

        //r.show();
        cout << r;
    }
}
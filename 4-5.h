//
// Created by 张红妍 on 2024/4/5.
//

#ifndef MYCODECPP_4_5_H
#define MYCODECPP_4_5_H

#endif //MYCODECPP_4_5_H

#include "base.h"

namespace space45 {
    //template是模板关键字 typename 是定义的模板类型的名称 有些版本也会使用class
    template <typename anyType>
    //调用函数时会将函数中的anyType全部替换成实参类型
    //并不会缩短可执行程序，只是在调用时编译器生成的一个类型为int一个为double类型的两个swap函数
    void swap(anyType &a , anyType &b) {
        anyType temp = a;
        a = b;
        b = temp;
    }

    void mainfunction() {
        int a = 1;
        int b = 2;
        swap(a, b);
        std::cout << a << " " << b << std::endl;

        double c = 3;
        double d = 4;
        swap(c, d);
        std::cout << c << " " << d << std::endl;
    }
}
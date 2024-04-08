//
// Created by 张红妍 on 2024/4/7.
//

#ifndef MYCODECPP_4_7_H
#define MYCODECPP_4_7_H

#endif //MYCODECPP_4_7_H

#include "base.h"

namespace space47 {

    //decltype
    //decltpe 用于以下情况 无法确定 a + b 类型时 作为赋值表达式
    template<typename T1, typename T2>
    void func1(T1 a, T2 b) {
        decltype(a + b) c = a + b;
    }

    //decltype后置返回类型，用于以下情况 无法确定a + b类型时作为函数的返回值
    template<typename T1, typename T2>
    auto func2(T1 a, T2 b)-> decltype(a + b) {
        return a + b;
    }
    void decltypeFunction() {
        //template<class>
    }
}
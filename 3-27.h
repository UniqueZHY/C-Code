//
// Created by 张红妍 on 2024/3/27.
//

#ifndef MYCODECPP_3_27_H
#define MYCODECPP_3_27_H

#endif //MYCODECPP_3_27_H
#include "base.h"

namespace space327 {

    void enumFunc() {
        enum bigstep {
            a = -6,
            b = 100,
            c
        };
        bigstep test = a;
        std::cout << "a = " << test << std::endl;
        test = b;
        std::cout << "b = " << test << std::endl;
        test = c;
        std::cout << "c = " << test << std::endl;

        //enum 取之范围：先找到当前列表里最大值、最小值，在分别找到两个最值的最大/最小的2次幂的值即为范围
        //例：bigstep 最大值为c=101，最大的2次幂的值是2^8 = 128 最小值为-6则小于最小值的最大的2的幂的数是2^3 = -8，故当前枚举范围是-8到128(最小值为0则最小范围是0)
        enum {a1, b1=0, c1, d1=1};//第一个a1默认为0
        //enum类型会自动转化为int
        int test1 = a1;
        std::cout << "a1 = " << test1 << std::endl;
        test1 = b1;
        std::cout << "b1 = " << test1 << std::endl;
        test1 = c1;
        std::cout << "c1 = " << test1 << std::endl;
        test1 = d1;
        std::cout << "d1 = " << test1 << std::endl;
    }
}
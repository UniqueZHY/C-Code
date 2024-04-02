//
// Created by 张红妍 on 2024/4/2.
//

#ifndef MYCODECPP_4_1_H
#define MYCODECPP_4_1_H

#endif //MYCODECPP_4_1_H
#include "base.h"

namespace space41 {
    inline double inlinefunc(double a) { return a * a; }

    void func() {
        double a, b = 2;
        a = inlinefunc(b);
        std::cout << a << std::endl;
    }
}
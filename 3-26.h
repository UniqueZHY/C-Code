//
// Created by 张红妍 on 2024/3/27.
//

#ifndef MYCODECPP_3_26_H
#define MYCODECPP_3_26_H

#endif //MYCODECPP_3_26_H
#include "base.h"
namespace space326 {
    void funcUnion() {
        union one4all {
            int a;
            double b;
            long c;
        };
        one4all price;
        price.a = 24;
        price.b = 2.42;
        price.c = 23123123;
        std::cout << price.a << std::endl;
        std::cout << price.b << std::endl;
        std::cout << price.c << std::endl;
    }
}
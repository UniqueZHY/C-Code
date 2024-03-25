//
// Created by 张红妍 on 2024/3/25.
//

#ifndef MYCODECPP_3_25_H
#define MYCODECPP_3_25_H

#endif //MYCODECPP_3_25_H
#include "base.h"

namespace space325 {
    struct profile {
        char name[20];
        float volume;
        double price;
    };
    //struct的定义
    struct testStruct {
        std::string name;
        int money;
    }testA, testB;

    struct structInit {
        int key;
        int value;
    } init = {
            1, 2
    };

    void funcStruct() {
        profile A = {"zhayla zhang", 1.88, 29.99};
        profile B = {"innocent Li", 3.12, 32.99};
        std::cout << A.price + B.price << std::endl;

        testA.name = "aa";
        testA.money = 123;
        testB.name = "bb";
        testB.money = 234;

        std::cout  << "key : " << init.key << "value : " << init.value << std::endl;
    }
}
//
// Created by 张红妍 on 2024/3/19.
//

#ifndef MYCODECPP_3_19_H
#define MYCODECPP_3_19_H

#endif //MYCODECPP_3_19_H
#include "base.h"
#include <climits>

namespace space319 {
    void FuncDigitSize() {
        int n_int = INT_MAX;
        short n_short = SHRT_MAX;
        long n_long = LONG_MAX;
        long long n_llong = LONG_LONG_MAX;

        std::cout << "int is " << sizeof(n_int) << "bytes" << std::endl;
        std::cout << "short is " << sizeof(n_short) << "bytes" << std::endl;
        std::cout << "long is " << sizeof(n_long) << "bytes" << std::endl;
        std::cout << "long long is " << sizeof(n_llong) << "bytes" << std::endl;

        std::cout << "maximum values: " << std::endl;
        std::cout << "int: " << n_int << std::endl;
        std::cout << "short :" << n_short << std::endl;
        std::cout << "long :" << n_long << std::endl;
        std::cout << "long long " << n_llong << std::endl;

        std::cout << "minimum" << INT_MIN << std::endl;
        std::cout << "Bites per byte = " << CHAR_BIT << std::endl;
    }
}

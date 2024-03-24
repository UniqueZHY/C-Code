//
// Created by 张红妍 on 2024/3/22.
//

#ifndef MYCODECPP_3_22_H
#define MYCODECPP_3_22_H

#endif //MYCODECPP_3_22_H
#include "base.h"
#include <climits>

namespace space322 {
    void func() {
        short sam = SHRT_MAX;//32768
        unsigned short sue = sam;//32768

        std::cout << "sam has " << sam << " dollars and sue has " << sue << " dollars deposited." << std::endl;

        //超出short最大值 故输出 -32768
        sam += 1;
        //32768
        sue += 1;
        std::cout << "sam has " << sam << " dollars and sue has " << sue << " dollars deposited." << std::endl;

        sam = 0;
        sue = 0;

        // -1
        sam -= 1;
        //unsigned 不能为负数 故输出为 65535
        sue -= 1;

        std::cout << "sam has " << sam << " dollars and sue has " << sue << " dollars deposited." << std::endl;
    }

}
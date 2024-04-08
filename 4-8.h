//
// Created by 张红妍 on 2024/4/8.
//

#ifndef MYCODECPP_4_8_H
#define MYCODECPP_4_8_H

#endif //MYCODECPP_4_8_H
#include "base.h"

namespace space48 {
    int a1 = 100;
    static int b;

    void func() {
        static int c;
        c++;
        //...
    }

}

//其中a为静态外部变量，简称为外部变量，意为外部文件也可以访问到该变量，访问时需要使用extern关键字
//b为 链接性为内部的，只能在文件内部使用外部无法访问
//c为 链接性为外部的，只能在当前代码块中被访问，只会初始化一次
//
// Created by 张红妍 on 2024/5/9.
//

#ifndef MYCODECPP_5_10_H
#define MYCODECPP_5_10_H

#endif //MYCODECPP_5_10_H
#include "base.h"
#include <string>

namespace space510 {

    void Ccharfunction() {
        char c1 = 'yes';
        //char c2 = "yes"; 不能将字符串赋值给char

        //const char * c3 = '/'; 不能将字符赋值给指针
        const char * c3 = &c1;//可以将字符取地址后在赋值给指针
        const char * c4 = "/"; //将字符串的地址赋值给指针

        //C++ String 类规避类了上面的字符串、字符陷阱
        string s1(1, 'yes');
        std::cout << s1 << std::endl;

        string s2(2, 'yes');
        std::cout << s2 << std::endl;

        string s4("yes");
        std::cout << s4 << std::endl;
    }

    void leftrightmove() {
        //用位运算模拟linux中权限判断

        const unsigned char priv = 0xff;// 1111 1111
        const unsigned char P_BACK_UP = (1 << 6); //0100 0000
        const unsigned char P_ADMIN = (1 << 7); //1000 0000
        //移位操作时需要注意 右移 要将值设置为unsigned；位移位数需要小于字符位数 (1 << 8) => 0000 0000 因为char 1字节只能存8位

        printf("0x%x\n", P_BACK_UP);
        printf("0x%x\n", P_ADMIN);

        if (priv & P_BACK_UP) {
            printf("back_up\n");
        }
        if (priv & P_ADMIN) {
            printf("admin\n");
        }

        //C++ 替代 bitset 指定位数
        bitset<10> priv1 = 0xff;// 1111 1111
        bitset<10> P_BACK_UP1 = (1 << 6); //0100 0000
        bitset<10> P_ADMIN1 = (1 << 7); //1000 0000
        //移位操作时需要注意 右移 要将值设置为unsigned；位移位数需要小于字符位数 (1 << 8) => 0000 0000 因为char 1字节只能存8位
        cout << priv1 << endl;
        cout << P_BACK_UP1 << endl;
        cout << P_ADMIN1 <<endl;

        if (priv & P_BACK_UP) {
            printf("back_up\n");
        }
        if (priv & P_ADMIN) {
            printf("admin\n");
        }
    }
}
//
// Created by 张红妍 on 2024/3/24.
//

#ifndef MYCODECPP_3_24_H
#define MYCODECPP_3_24_H

#endif //MYCODECPP_3_24_H
#include <iostream>
namespace space324 {
    void hexoct() {
        int decimal_system = 42;    //10进制
        int octal_system = 042;     //8进制
        int hexadecimal = 0x42;     //16进制

        std::cout << "十进制 42，十进制表示为：" << decimal_system << std::endl;
        std::cout << "八进制 042，十进制表示为：" << octal_system << std::endl;
        std::cout << "十六进制 0x42，十进制表示为：" << hexadecimal << std::endl;

        //cout提供了 进制转化 dec hex oct
        int test_num = 42;
        std::cout << std::dec;
        std::cout << "十进制：" << test_num << std::endl;
        std::cout << std::hex;
        std::cout << "十六进制：" << test_num << std::endl;
        std::cout << std::oct;
        std::cout << "八进制: " << test_num << std::endl;

        char alarm = '\007';
        std::cout << alarm << "don't do that again!" << std::endl;
    }
    void bondini() {
        std::cout << "\aOperation \"HyperHype\" is now activated!\n";
        std::cout << "Enter ur agent code:_____\b\b\b\b\b";
        long code;
        std::cin >> code;
        std::cout << "\ayou Entered " << code << "...\n";
        std::cout << "\aCode verfied! Proceed with Plan Z3!\n";
    }
    /*void signedusignedchar() {
        char char127 = '234567890123456';
        unsigned char char128 = '123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456';
        std::cout << char127 << std::endl;
        std::cout << char128 << std::endl;
    }*/
    void floatadd() {
        long double a, b;
        a = 50.25125;
        b = 11.17121;
        std::cout << a + b << std::endl;
    }
}
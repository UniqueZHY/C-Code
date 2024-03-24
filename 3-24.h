//
// Created by 张红妍 on 2024/3/24.
//

#ifndef MYCODECPP_3_24_H
#define MYCODECPP_3_24_H

#endif //MYCODECPP_3_24_H
#include "base.h"
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
    void signedusignedchar() {
        char char127 = {122};
        //unsigned char char128 = '123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456789012345678901234567890123456';
        std::cout << char127 << std::endl;
        //std::cout << char128 << std::endl;
    }
    void floatadd() {
        long double a, b;
        a = 50.25125;
        b = 11.17121;
        std::cout << a + b << std::endl;
    }
    void typecase() {
        int a, b, c;
        //先相加 在转换
        a = 11.99 + 19.99;
        //old C syntax
        b = (int)11.99 + int(19.99);
        //new C++ syntax,l
        c = int(11.99) + (int)19.99;
        std::cout << "11.99 + 19.99 = " << a << "\n" << "(int)11.99 + int(19.99) = " << b << "\n" << "int(11.99) + (int)19.99 = " << c << std::endl;
        char ch = 'Z';
        std::cout << "The Code for " << ch << " is " << int(ch) << std::endl;
        std::cout << static_cast<int>(ch) << std::endl;
        std::cout << (char) 88 << std::endl;
    }

    void functionArray() {
        int array[3] = {};
        std::cout << array[0] << std::endl;
        std::cout << array[1] << std::endl;
        std::cout << array[4] << std::endl;
    }
    void funcGetGetline() {
        char name[20]={0};
        char food[20]={0};
        //cin 只有识别到回车\n才能结束
        //输入带空格的name 和 food时无法使用
        std::cout << "input ur name :" << std::endl;
        std::cin >> name;
        std::cout << "input ur favorite food :" << std::endl;
        std::cin >> food;
        std::cout << name  << " , i have some " << food << " for u" ;



        //getline会在输入后舍弃最后面的换行，不会将其留在输入流中
        //上一个cin的enter仍然在滞留在输入流中，如果不适应87行的cin.get(),会导致在下面的cin.getline直接读取流上一行cin的回车
        std::cin.get();
        std::cout << "input ur name :" << std::endl;
        std::cin.getline(name,20);
        std::cout << "input ur favorite food : " << std::endl;
        std::cin.getline(food, 20);
        std::cout << name  << " , i have some " << food << " for u" << std::endl;

        //std::cin.get()
        std::cout << "input ur name :" << std::endl;
        std::cin.get(name,20).get();
        std::cout << "input ur favorite food : " << std::endl;
        //此处的cin.get()用于吞掉上一个cin.get()放在输入流里的回车
        //std::cin.get();
        std::cin.get(food, 20).get();
        std::cout << name  << " , i have some " << food << " for u" << std::endl;
    }
}
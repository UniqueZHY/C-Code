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

//关键字 volatile mutable
//当编译器发现在一个代码段中访问了两次相同的变量就会将变量保存在寄存器中，避免了多次查找相同的变量，也就意为着编译器默认该变量不会再变化，这是编译器的一种优化；
// volatile关键字相当于告诉编译器不要使用这种优化

//mutable关键字用于修改已经定义为const不可修改的结构中的值
/*
 * 例
 * struct data {
 *      char name[20];
 *      mutable int age
 * }
 *
 * const data people = {'zhy', 18};
 * strcpy(people.name, 'zhang'); 不可以
 * prople.age = 20;可以因为age成员变量是用mutable修饰的
 * */
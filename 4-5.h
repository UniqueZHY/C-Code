//
// Created by 张红妍 on 2024/4/5.
//

#ifndef MYCODECPP_4_5_H
#define MYCODECPP_4_5_H

#endif //MYCODECPP_4_5_H

#include "base.h"

namespace space45 {
    //template是模板关键字 typename 是定义的模板类型的名称 有些版本也会使用class
    template <typename anyType>
    //调用函数时会将函数中的anyType全部替换成实参类型
    //并不会缩短可执行程序，只是在调用时编译器生成的一个类型为int一个为double类型的两个swap函数
    void swap(anyType &a , anyType &b) {
        anyType temp = a;
        a = b;
        b = temp;
    }
/*
    //函数模板重载，为了便于处理不同的情况
    template <typename arrType>
    void swap(arrType arr1[], arrType arr2[],  int size) {
        for (int i = 0; i < size; ++i) {
            arrType temp = arr1[i];
            arr1[i] = arr2[i];
            arr2[i] = temp;
        }
    }

    void subFunction() {
        int a = 1;
        int b = 2;
        swap(a, b);
        std::cout << a << " " << b << std::endl;

        double c = 3;
        double d = 4;
        swap(c, d);
        std::cout << c << " " << d << std::endl;

        int arr1[3] = {1,2,3};
        int arr2[3] = {4,5,6};
        swap(arr1, arr2, 3);
        for (int i = 0; i < 3; ++i) {
            std::cout << arr1[i] << std::endl;
        }
        for (int i = 0; i < 3; ++i) {
            std::cout << arr2[i] << std::endl;
        }
        std::cout << "double arrary" << std::endl;
        double arr3[3] = {7, 8, 9};
        double arr4[3] = {10, 11, 12};
        swap(arr3, arr4, 3);
        for (int i = 0; i < 3; ++i) {
            std::cout << arr3[i] << std::endl;
        }
        for (int i = 0; i < 3; ++i) {
            std::cout << arr4[i] << std::endl;
        }
    }*/
    struct job {
        char name[10];
        double salary;
        int floor;
    };
    //显示实例化 语法swap<int>()
    //template void swap<int> (int, int);->使用swap模板生成int类型的函数定义

    //显示具体化
    //template <> void swap<int>(int, int) 等价于 template <> void swap(int, int)
    //不使用swap模版来生成函数定义，而应使用专门为int类型显示地定义的函数的定义

    //显示具体化声明在关键字template后包含<>，而显示实例化没有

    //swap函数的具像化
    //该声明的意思时使用swap模板生成int类型的函数定义 不能单独使用 需要配合swap函数模版一起使用
    template<> void swap<job>(job &a, job &b) {
        double temp_salary = a.salary;
        a.salary = b.salary;
        b.salary = temp_salary;

        int temp_floor = a.floor;
        a.floor = b.floor;
        b.floor = temp_floor;
    }
    void mainFunction() {
        //subFunction();

        int a = 1;
        int b = 2;
        //swap(a, b);

        job job1 = {"name1", 1, 1};
        job job2 = {"name2", 2, 2};
        std::cout << job1.name << " " << job1.salary << " " << job1.floor << std::endl;
        std::cout << job2.name << " " << job2.salary << " " << job2.floor << std::endl;
        swap(job1, job2);

        std::cout << job1.name << " " << job1.salary << " " << job1.floor << std::endl;
        std::cout << job2.name << " " << job2.salary << " " << job2.floor << std::endl;

    }
}
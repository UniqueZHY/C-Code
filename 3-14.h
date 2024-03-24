//
// Created by 张红妍 on 2024/3/17.
//

#ifndef MYCODECPP_3_14_H
#define MYCODECPP_3_14_H

#endif //MYCODECPP_3_14_H

#include "base.h"
namespace space314 {
    const double * f1(const double * ar, int n) {
        return ar;
    }

    const double * f2(const double * ar, int n) {
        return ar + 1;
    }

    const double * f3(const double * ar, int n) {
        return ar + 2;
    }

    void pointerFun () {
        double av[3] = {1,2,3};
        //函数指针
        const double * (*p1)(const double *, int) = f1;
        auto p2 = f2;
        std::cout << "Using pointers to function" << std::endl;
        std::cout << (*p1)(av, 3)  << ":" << *(*p1)(av, 3) << std::endl;
        std::cout << p2(av, 3) << ":" << *p2(av, 3) << std::endl;

        //函数指针数组
        //(*pa[3]) 代表其是个函数指针数组
        const double * (*pa[3])(const double *, int) = {f1, f2, f3};
        //auto 自动类型推断只能用于单值初始化，但是可以用于以下复制操作
        auto pb = pa;
        std::cout << "Using an array of pointer to a function" << std::endl;
        for (int i = 0; i < 3; ++i)
            std::cout << (*pa[i])(av, 3) << ":" << *(*pa[i])(av, 3) << std::endl;

        //指向函数指针数组的指针
        //(*pa[3]) 代表其是个函数指针数组，外面在加一个* 表示为指向该函数指针数组的指针
        const double * (*(*pc)[3])(const double *, int) = &pa;
        auto pd = &pa;
        const double * pdb = (*pc)[1](av, 3);
        std::cout << "Using pointers to an array of function pointers" << std::endl;
        std::cout << (*pd)[0](av, 3) << ":" << *(*pd)[0](av, 3) << std::endl;
        std::cout << pdb << ":" << *pdb << std::endl;
        return;
    }
}


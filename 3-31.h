//
// Created by 张红妍 on 2024/3/31.
//

#ifndef MYCODECPP_3_31_H
#define MYCODECPP_3_31_H

#endif //MYCODECPP_3_31_H
#include "base.h"
namespace space331 {
    void pointerplusfunc() {
        std::cout;

        int arr[] = {0, 1, 2, 3, 4};
        int *p = arr;
        cout << "p = " << p << endl;
        int a = *++p;//p指针原来指向第一个元素0 现在指向第二个元素1
        cout << "p = " << p << endl;
        int b = ++*p;//++是作用在指针p指向的数上的，并不是指针后移，故加了两次后p仍然指向第二个元素
        cout << "p = " << p << " arr[1] = " << *p << endl; //所以第二个元素arr[1]de的值变了 因为指针指向的地址的值++了

        //当前p指向第二个元素arr[1]
        cout << "*p++ = " << *p++ << endl;
    }
}
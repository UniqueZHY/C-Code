//
// Created by 张红妍 on 2024/4/16.
//

#ifndef MYCODECPP_4_16_H
#define MYCODECPP_4_16_H

#endif //MYCODECPP_4_16_H
#include "base.h"

using namespace std::placeholders;
class Struct {
public:
    string name;
    int age;
};
namespace space416 {
//bind 函数 用于把某种形式的参数列表于一直的函数进行绑定，形成新的函数，这种更改已有函数调用模式的做法叫做函数绑定，例：

    void bindFunc() {
         auto fun = [](int * arr, int n, int max) {
             for (int i = 0; i < n; ++i) {
                 if (arr[i] > max)
                     cout << arr[i];
             }
             std::cout << std::endl;
         };

         int arr[] = {1, 2, 3, 4, 5};

         //_1 _2为占位符
         auto newFun = bind(fun, _1, _2, 3);

        newFun(arr, sizeof(arr) / sizeof(int));
        return ;
    }

    void objectTest() {
        //实例
        Struct s3;
        Struct * s1 = new Struct();
        s1->name = "zz";
        s1->age = 12;
        std::cout << s1->name << std::endl;
        Struct * s2 = new Struct();
        s2 = s1;
        s2->name = "zhy";
        std::cout << s1->name << std::endl;

    }
}

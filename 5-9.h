//
// Created by 张红妍 on 2024/5/9.
//

#ifndef MYCODECPP_509_H
#define MYCODECPP_509_H

#endif //MYCODECPP_509_H
#include "base.h"
#include <thread>
#include <unistd.h>

namespace space59{

    void func() {
        std::cout << "it is a test" << std::endl;
        sleep(5);
        std::cout << "testend" << std::endl;
    }

    void func2() {
        std::cout << "主进程执行" << std::endl;
        //sleep(5);
        std::cout << "主进程结束" << std::endl;
    }
    void testThread() {
        thread myTestThread(func);
        func2();
        //myTestThread.join();
        //myTestThread.detach();
        std::cout << "zz" << std::endl;
    }
}
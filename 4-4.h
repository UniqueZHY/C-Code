//
// Created by 张红妍 on 2024/4/4.
//

#ifndef MYCODECPP_4_4_H
#define MYCODECPP_4_4_H

#endif //MYCODECPP_4_4_H

#include "base.h"

namespace space44 {
    //重载
    unsigned long left (unsigned long num, unsigned ct) {
        unsigned digit = 1;
        unsigned long n = num;

        if (ct == 0 || num == 0)
            return 0;
        while (n /= 10)
            digit++;
        if (digit > ct) {
            ct = digit - ct;
            while (ct--)
                num /= 10;
            return num;
        }
        else {
            return num;
        }
    }

    char * left (const char * str, int n) {
        if (n < 0)
            n = 0;
        char * p = new char[n + 1];
        int i;
        for (i = 0; i < n && str[i]; i++)
            p[i] = str[i];

        while (i <= n)
            p[i++] = '\0';
        return p;
    }

   void  mainfunc() {
        char * trip = "Hawaii!!";
        unsigned long n = 12345678;
        char * temp;

        for (int i = 1; i < 10; ++i) {
            std::cout << left(n, i) << std::endl;
            temp = left(trip,  i);
            std::cout << temp << std::endl;
            delete [] temp;
        }
        return ;
    }
}
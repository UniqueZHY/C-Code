//
// Created by 张红妍 on 2024/4/14.
//

#ifndef MYCODECPP_4_14_H
#define MYCODECPP_4_14_H

#endif //MYCODECPP_4_14_H
#include "base.h"
//类
//数组实现栈

namespace space414 {
    typedef unsigned long Item;
    class Stack {
    private:
        //使用枚举来实现一个常量，作用域为类
        enum {MAX = 10};
        Item items[MAX];
        int top;
    public:
        Stack();
        bool isEmpty();
        bool ifFull();
        bool push(const Item & item);
        bool pop();
        bool show();
    };

    Stack::Stack() {
        top = 0;
    }
    bool Stack::ifFull() {
        return top == MAX;
    }

    bool Stack::isEmpty() {
        return top == 0;
    }

    bool Stack::push(const space414::Item &item) {
        if (top < MAX) {
            items[top++] = item;
            return true;
        }
        else
            return false;
    }

    bool Stack::pop() {
        if (isEmpty()) {
            return false;
        }
        else {
            items[top--];
            return true;
        }
    }

    bool Stack::show() {
        for (int i = 0; i < top; ++i) {
            std::cout << items[i] << std::endl;
        }
    }

    void stackFunc() {
        Stack stack;
        char ch;
        unsigned long good;
        while (std::cin >> ch && toupper(ch) != 'Q') {
            while (cin.get() != '\n')
                continue;
            switch (ch) {
                case 'A':
                case 'a':
                    if (!stack.ifFull()) {
                        std::cin >> good;
                        stack.push(good);
                    }

                    break;
                case 'p':
                case 'P':
                    if (!stack.isEmpty())
                        stack.pop();
                    break;
            }
        }
        stack.show();
    }
}

//
// Created by 张红妍 on 2024/3/17.
//

#ifndef MYCODECPP_3_12_H
#define MYCODECPP_3_12_H

#endif //MYCODECPP_3_12_H
#include "base.h"

namespace space312 {
    struct travel_time {
        int hour;
        int mintues;
    };

#define SIZE 5
    const std::array<std::string, 4> season_array = {"spring", "summer", "fall", "winter"};
    travel_time TotalTime (travel_time time1, travel_time time2) {
        travel_time total_time;
        total_time.mintues = (time1.mintues + time2.mintues) % 60;
        total_time.hour = time1.hour + time2.hour + (time1.mintues + time2.mintues) / 60;
        return total_time;
    }

    void FuncStructTest() {
        travel_time travel_time1 = {5, 45};
        travel_time travel_time2 = {3, 55};
        travel_time total_time = TotalTime(travel_time1, travel_time2);
        std::cout << "first and second totally used " << total_time.hour << " hours and "<<
                  total_time.mintues << " mintues" << std::endl;

        travel_time travel_time3 = {1, 40};
        travel_time final_total_time = TotalTime(total_time, travel_time3);
        std::cout << "three days totally used " << final_total_time.hour << " hours and "<<
                  final_total_time.mintues << " mintues" << std::endl;
    }
    void FuncStringDisplay(std::string arr[]) {
        for (int i = 0; i < SIZE; ++i) {
            std::cout << arr[i] << std::endl;
        }
    }
    void FuncString() {
        std::string arr[SIZE];
        for (int i = 0; i < SIZE; ++i) {
            //输入字符，回车键结束
            getline(std::cin, arr[i]);
        }
        FuncStringDisplay(arr);
    }

    void FuncArrayDisplay(std::array<double, 4> salary) {
        for (int i = 0; i < 4; ++i) {
            std::cout << season_array[i] << " 's salary is : " << salary[i] << std::endl;
        }
    }

    void FuncArrayChange(std::array<double, 4> *salary) {
        for (int i = 0; i < 4; ++i) {
            std::cout << "plz enter " << season_array[i] << " 's salary : " << std::endl;
            std::cin >> (*salary)[i];
        }
    }
    int FuncPointA(int lines) {
        return 1 * lines;
    }
    int FuncPointB(int lines) {
        return 2 * lines;
    }
    void FuncPointImp(int lines, int (*fp)(int)) {
        std::cout << "it will takes " << (*fp)(lines) << " mins" << std::endl;
    }
    void FuncPoint() {
        int lines = 0;
        std::cout <<"plz enter how many lines code u need : ";
        std::cin >> lines;
        std::cout <<"here is result by FuncPointA " << std::endl;
        FuncPointImp(lines, FuncPointA);
        std::cout <<"here is result by FuncPointB " << std::endl;
        FuncPointImp(lines, FuncPointB);
    }

    void FuncArray() {
        std::array<double, 4> salary;
        FuncArrayChange(&salary);
        FuncArrayDisplay(salary);
    }
}
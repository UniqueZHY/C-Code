//
// Created by 张红妍 on 2024/7/30.
//

#include "observerable.h"

void Observerable::Attench(Observer* observer) {
    if (observer == nullptr)
        return;
    observer_list.push_back(observer);
}

void Observerable::Dettench(Observer *observer) {
    if (observer == nullptr)
        return;
    auto list_iter = std::find(observer_list.begin(), observer_list.end(),observer);
    if (list_iter != observer_list.end()) {
        //observer_list.erase(list_iter);
    }
}

void Observerable::Notify(void *str) {
    if (!change_)
        return;
    for (auto iter = observer_list.begin(); iter != observer_list.end(); iter++) {
        (*iter)->Update(str);
    }
    change_ = false;
}

void Observerable::SetChange(void * str) {
    if (change_)
        return;
    change_ = true;
    Notify(str);
}

void Observerable::GetNews() {
    string str = "NEWS";
    SetChange(&str);
}
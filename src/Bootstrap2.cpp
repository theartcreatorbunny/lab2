//
// Created by erixon on 03.05.2020.
//

#include "ListOpt.h"
#include <stdlib.h>
#include <iostream>

ListOpt initSimpleList();
ListOpt initRndList();
void selectSeq(ListOpt& list);
void selectRnd(ListOpt& list);

int main() {
    ListOpt list = initSimpleList();
//    selectSeq(list);
    selectRnd(list);
    std::cout << "all ok!";
    return 0;
}


ListOpt initSimpleList() {
    const int val_size = 100;
    ListOpt list(100'000'000);
    for (int i = 0; i < 1'000'000; i++) {
        int * val = new int[val_size];

        for (int j = 0; j < val_size; j++) {
            val[j] = rand();
        }
        list.push(val, val_size);
        delete[] val;
    }
    return list;
}

void selectSeq(ListOpt& list) {

    for (int i = 0; i < 500; i ++) {
        for (int j = 0; j < 100; j++) {
            std::cout << list.retrieve(i, j) << '\n';
//            list.retrieve(i,j);
        }
    }
}

void selectRnd(ListOpt& list) {
    for (int x = 0; x < 50'000; x++) {
        int i = rand()%1'000'000;
        int j = rand()%100;
        std::cout << list.retrieve(i, j) << '\n';
//            list.retrieve(i,j);
    }
}


ListOpt initRndList() {
    ListOpt list(400'000'000);
    for (int i = 0; i < 2'000'000; i++) {
        int val_size = rand()%199 + 1;
        int *val = new int[val_size];

        for (int j = 0; j < val_size; j++) {
            val[j] = rand();
        }

        list.push(val,val_size);

        delete[] val;

    }
}
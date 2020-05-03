//
// Created by erixon on 02.05.2020.
//

#include "List.h"
#include <iostream>

int main() {
    using namespace std;
    try {

        List list;

        for (int i = 0; i < 1'000'000; i++) {
            cout << "iteration #" << i << endl;
            list.push(new int[4]{1,1,2,2}, 4);
        }
    } catch (std::runtime_error& e) {
        cout << e.what();
    }

    cout<<"not visible";

    return 0;
}

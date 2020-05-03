//
// Created by erixon on 02.05.2020.
//

#ifndef GRIGORY_LL_WITH_ARR_LISTOPT_H
#define GRIGORY_LL_WITH_ARR_LISTOPT_H



struct node {
    int size;
    int val;
    struct node* nextInd;
    node(int val, int size): size(size), val(val) {}
};

class ListOpt {
public:
    void push(int* val, int size);
    int retrieve(int i, int j);
    ListOpt(int data_size):
        data(new int[data_size]), data_size(data_size), node_cnt(0), last_ind(0), head(nullptr) {}
private:
    int* data;
    int data_size;
    node* head;
    int node_cnt;
    int last_ind;
};


#endif //GRIGORY_LL_WITH_ARR_LISTOPT_H

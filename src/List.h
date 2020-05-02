//
// Created by erixon on 02.05.2020.
//

#ifndef GRIGORY_LL_WITH_ARR_LIST_H
#define GRIGORY_LL_WITH_ARR_LIST_H

typedef struct node {
    int size;
    int* val;
    struct node* next;
    ~node() {
        delete[] val;
    }
} node_t;


class List {
public:
    void push(int* val, int size);
    int retrieve(int i, int j);
    List() : head(nullptr), size(0){}
    ~List() {
        node* cur = head;
        while(cur != nullptr) {
            node* to_del = cur;
            cur = cur -> next;
            delete to_del;
        }
    }
private:
    int size;
    node_t* head;


};


#endif //GRIGORY_LL_WITH_ARR_LIST_H

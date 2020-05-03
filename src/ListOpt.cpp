//
// Created by erixon on 02.05.2020.
//

#include <stdexcept>
#include "ListOpt.h"

void ListOpt::push(int *val, int size) {
    node* new_node = new node(last_ind, size);

    node* old_node = this->head;
    this -> head = new_node;
    new_node -> nextInd = old_node;

    if (last_ind + size > data_size) {
        throw std::runtime_error("data_size is too small");
    }

    for (int i = 0; i < size; i++ ) {
        data[i + last_ind] = val[i];
    }

    last_ind += size;
    node_cnt++;
}

int ListOpt::retrieve(int i, int j) {
    if (i < node_cnt && i >=0) {
        node* cur = head;
        for (int x = 0; x < i-1; x++) {
            cur = cur -> nextInd;
        }
        if (j < cur->size && j >=0) {
            return data[cur->val + j];
        }
    }
    throw std::runtime_error("index out of bounds!");
}

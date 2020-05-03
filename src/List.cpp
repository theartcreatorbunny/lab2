//
// Created by erixon on 02.05.2020.
//

#include <stdexcept>
//#include <iostream>
#include "List.h"


void List::push(int *val, int size) {
    node* new_node = new node();
    new_node->size = size;
    new_node->val = val;
    new_node->next = nullptr;

    node* old_head = this->head;
    this->head = new_node;
    new_node->next = old_head;
    this->size++;
}

int List::retrieve(int i, int j) {
    if (i < this->size && i >= 0) {//for empty list this condition is always false
        node* result_node = this -> head;
        for (int x = 0; x < i-1; i++) {
            result_node = result_node -> next;
        }
        if (j < result_node ->size && j >= 0) {
            return result_node ->val[j];
        } else {
//            std::cout << "index out of bounds";
            throw std::runtime_error("index out of bounds");
        }
    } else {
//        std::cout << "index out of bounds";
        throw std::runtime_error("index out of bounds");
    }
}

//
// Created by Sarah Nicholls on 11/7/19.
//

#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H

#include "LinkedList.h"

class Stack : public LinkedList{
public:
    Stack();
    void push_head(const Data& d);
    bool pop_head();
    Data print();


};
#endif //PROJECT7_STACK_H

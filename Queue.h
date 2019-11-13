//
// Created by Sarah Nicholls on 11/7/19.
//

#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H

#include "LinkedList.h"

class Queue: public LinkedList{
public:
    Queue();
    void enqueue_tail(const Data& d);
    bool dequeue_head();
    Data print();

private:
    Node* tail;
};
#endif //PROJECT7_QUEUE_H

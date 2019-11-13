//
// Created by Sarah Nicholls on 11/7/19.
//

#include "Queue.h"

bool Queue::dequeue_head() {
        if (head != nullptr) {
            // save location of where head points
            Node *curr = head;
            // head points to next node
            head = head->next;
            // delete node where head originally pointed
            delete curr;
            return true;
        }else{
            return false;
        }
}

void Queue::enqueue_tail(const Data &d) {
    Node *newNode= new Node(d);
    tail->next=newNode;
    tail=newNode;
    if(head==nullptr){
        head=newNode;
    }
}

Queue::Queue() {
    head=nullptr;
    tail=nullptr;
}

Data Queue::print() {
    return head->data;
}

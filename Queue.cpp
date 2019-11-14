//
// Created by Sarah Nicholls on 11/7/19.
//

#include "Queue.h"

bool Queue::dequeue_head() {
    if(head== nullptr)
        return false;
    else if (head->next != nullptr) {
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
//adds data to tail
void Queue::enqueue_tail(const Data &d) {
    Node *newNode= new Node(d);
    if(tail==nullptr){//case if queue is empty
        tail=newNode;
        head=newNode;
    }else{
        tail->next=newNode;
        tail=newNode;
    }

}

//constructor
Queue::Queue() {
    head=nullptr;
    tail=nullptr;
}

//returns data at head to be printed in main
Data Queue::print() {
    return head->data;
}

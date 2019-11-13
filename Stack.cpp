//
// Created by Sarah Nicholls on 11/7/19.
//

#include "Stack.h"

Stack::Stack() {
    head= nullptr;
}

bool Stack::pop_head() {
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

//inserts at head
void Stack::push_head(const Data & d) {
    //creates new node with data
    Node *newNode= new Node(d);
    //inserts at head
    if(head== nullptr){
        head=newNode;
    }else{
        newNode->next=head;
        head=newNode;
    }
}

Data Stack::print() {
    return head->data;
}

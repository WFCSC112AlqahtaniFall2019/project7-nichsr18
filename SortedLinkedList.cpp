//
// Created by Sarah Nicholls on 11/7/19.
//

#include "SortedLinkedList.h"

void SortedLinkedList::insertSorted(const Data &d) {
    Node* curr= new Node(d);
    Node* mockH=new Node(Data("","",0.0,0.0),nullptr);
    //inserts at head if empty
    if(head==nullptr){
            head=curr;
    }else{
        mockH->next=head;
        Node* loc=mockH;
        //finds value of loc
        while(loc->next!=nullptr&&loc->next->data<curr->data){//stops running if at end of list
            loc=loc->next;

        }
        //inserts in list
        curr->next=loc->next;
        if(loc->next==head){//updates head if necessary
            head=curr;
        }
        loc->next=curr;

        delete mockH;
    }




}

void SortedLinkedList::print(ostream &os) {
    return LinkedList::print(os);
}





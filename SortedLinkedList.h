//
// Created by Sarah Nicholls on 11/7/19.
//

#ifndef PROJECT7_SORTEDLINKEDLIST_H
#define PROJECT7_SORTEDLINKEDLIST_H

#include "LinkedList.h"

class SortedLinkedList: public LinkedList{
public:
    void insertSorted(const Data& d);
    void print(ostream& os);
};

#endif //PROJECT7_SORTEDLINKEDLIST_H

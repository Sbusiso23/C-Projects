#pragma once
#include "Node.h"



class LinkedList
{
    private:
        int count;
        Node* front;
    public:
        LinkedList();
        void addAtFront(int);
        void addAtLast(int);
        void insert(int);
        void removeNode(int);
        Node* getLastNode();
        void display();
        friend LinkedList* merge(LinkedList*,LinkedList*);
        friend LinkedList mergeSortedLists(LinkedList,LinkedList);

};

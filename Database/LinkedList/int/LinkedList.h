#pragma once
#include "Node.cpp"

class LinkedList
{
    private:
        int count;
        Node* front;
    public:
        LinkedList();
        void addAtFront(int);
        void addAtLast(int);
        void removeNode(int);
        Node* getLastNode();
        void display();
};

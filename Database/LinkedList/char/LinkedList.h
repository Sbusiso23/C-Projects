#pragma once
#include "Node.cpp"

class LinkedList
{
    private:
        int count;
        Node* front;
    public:
        LinkedList();
        void addAtFront(char);
        void addAtLast(char);
        void removeNode(int);
        Node* getLastNode();
        void display();
};

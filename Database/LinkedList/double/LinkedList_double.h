#pragma once
#include "double/Node_double.h"


class LinkedList_double
{
    private:
        int count;
        Node_double* front;
    public:
        LinkedList_double();
        void addAtFront(double);
        void addAtLast(double);
        void removeNode(int);
        Node_double* getLastNode();
        void display();
};

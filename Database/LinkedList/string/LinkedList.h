#pragma once
#include "Node.cpp"

class LinkedList
{
    private:
        int count;
        Node* front;
    public:
        LinkedList();
        void addAtFront(string);
        void addAtLast(string);
		string getNodeItem(int);
        void removeNode(int);
        Node* getLastNode();
		int getListCount();
        void display();
};

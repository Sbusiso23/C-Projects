#pragma once
#include "Node.h"



struct LinkedList
{
    int count;
    Node* front;

       
};

LinkedList createLinkedList();
LinkedList addAtFront(LinkedList,int);
LinkedList addAtLast(LinkedList,int);
Node* getLastNode(LinkedList);
void display(LinkedList);

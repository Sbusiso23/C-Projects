#pragma once
#include "Node.h"

struct Queue{
    int count;
    Node* head;
    Node* back;
    
};

Queue createQueue();
Queue enqueue(Queue,int);
Queue dequeue(Queue);    
void display(Queue);

#pragma once
#include "Node.h"


struct Stack
{
    int count;
    Node* top;
    
};


Stack createStack();        
Stack push(int);
Stack pop(Stack);
void display(Stack);
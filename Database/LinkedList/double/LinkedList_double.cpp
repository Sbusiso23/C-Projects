#include "double/Node_double.h"
#include "LinkedList_double.h"
#include <iostream>
using namespace std;


LinkedList_double::LinkedList_double()
{
    front = NULL;
    count = 0;
}

void LinkedList_double::addAtFront(double a)
{
    Node_double* newptr = new Node_double(a);

    if(front == NULL){
        front = newptr;
        count++;

    }else{
        newptr->next = front;
        front = newptr;
        count++;
    }
}

void LinkedList_double::display()
{
    Node_double* ptr = front;

    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    
    cout<<"END"<<endl<<"Items In the list: "<<count<<endl;
    cout<<endl;
}

Node_double* LinkedList_double::getLastNode()
{
    Node_double* last = front;

    while(last->next != NULL){
        last = last->next;
    }

    return last;
}

void LinkedList_double::addAtLast(double d)
{
    Node_double* newptr = new Node_double(d);

    if(front == NULL){
        front = newptr;
        count++;

    }else{
        Node_double* last = getLastNode();
        last->next = newptr;
        newptr->next = NULL;
        count++;
    }
}

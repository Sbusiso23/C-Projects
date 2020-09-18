#include "Node.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;


LinkedList::LinkedList()
{
    front = NULL;
    count = 0;
}

void LinkedList::addAtFront(int d)
{
    Node* newptr = new Node(d);

    if(front == NULL){
        front = newptr;
        count++;

    }else{
        newptr->next = front;
        front = newptr;
        count++;
    }
}

void LinkedList::insert(int num)
{
    //This insert function should insert numbers in an ascending order
     Node* newptr = new Node(num);
     Node* ptr = front;
    
    if(front == NULL){
        front = newptr;
    }else if(front->data >= num){
        newptr->next = front;
        front = newptr;

    }else if(front->data <= num){
        newptr->next = front->next;
        front->next = newptr;

    }else{
        while(ptr->next != NULL && ptr->data <= num)
        {   
            ptr = ptr->next;
        }
        newptr->next = ptr->next;
        ptr->next = newptr;
    }
    count++;
}

void LinkedList::display()
{
    Node* ptr = front;

    while(ptr != NULL){
        cout<<ptr->data<<" -> ";
        ptr = ptr->next;
    }
    
    cout<<"END"<<endl<<"Items In the list: "<<count<<endl;
    cout<<endl;
}

Node* LinkedList::getLastNode()
{
    Node* last = front;

    while(last->next != NULL){
        last = last->next;
    }

    return last;
}

void LinkedList::addAtLast(int d)
{
    Node* newptr = new Node(d);

    if(front == NULL){
        front = newptr;
        count++;

    }else{
        Node* last = getLastNode();
        last->next = newptr;
        newptr->next = NULL;
        count++;
    }
}
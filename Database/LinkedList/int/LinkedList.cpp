#include "LinkedList.h"

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

void LinkedList::display()
{
    Node* ptr = front;

    while(ptr != NULL){
        cout<<ptr->data<<" ";
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

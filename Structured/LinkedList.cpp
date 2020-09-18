#include "Node.h"
#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList createLinkedList()
{
    LinkedList al;
    al.front = NULL;
    al.count = 0;

    return al;
}

LinkedList addAtFront(LinkedList al,int d)
{
    Node* newptr = new Node(d);

    if(al.front == NULL){
        al.front = newptr;
        al.count++;

    }else{
        newptr->next = al.front;
        al.front = newptr;
        al.count++;
    }

    return al;
}

void display(LinkedList li)
{
    Node* ptr = li.front;

    while(ptr != NULL){
        cout<<ptr->data<<" -> ";
        ptr = ptr->next;
    }
    
    cout<<"END"<<endl<<"Items In the list: "<<li.count<<endl;
    cout<<endl;
}

Node* getLastNode(LinkedList alist)
{
    Node* last = alist.front;

    while(last->next != NULL){
        last = last->next;
    }

    return last;
}

LinkedList addAtLast(LinkedList list,int d)
{
    Node* newptr = new Node(d);

    if(list.front == NULL){
        list.front = newptr;
        
    }else{
        Node* last = getLastNode(list);
        last->next = newptr;
        newptr->next = NULL;
        
    }
    list.count++;

    return list;
}
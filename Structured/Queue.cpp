#include <iostream>
#include "Queue.h"
using namespace std;

Queue createQueue()
{
    Queue aQ;
    aQ.count = 0;
    aQ.head = aQ.back = NULL;

    return aQ;
}

Queue enqueue(Queue q, int x)
{
    Node* newptr = new Node(x);

    if(q.head == NULL){
        q.head = q.back = newptr;
        
    }else{
        q.back->next = newptr;
        q.back = newptr;

    }
    q.count++;

    return q;
}

Queue dequeue(Queue qu)
{
    Node* dlt = qu.head;
    
    qu.head = qu.head->next;
    delete dlt;

    return qu;
}

void display(Queue q)
{
    Node* ptr;
    int x = 0;
    int cnt = q.count;

    while(cnt > x)
    {
        ptr = q.head;
        cout<<ptr->data<<" -> ";
        q = dequeue(q);
        cnt--;
    }

    cout<<"END"<<endl<<"Items in the queue: "<<q.count<<endl;
    cout<<endl;
}


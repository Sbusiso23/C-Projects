#include "Node.h"
#include "Node.cpp"
#include "LinkedList.cpp"
#include "LinkedList.h"
#include "Queue.h"
#include "Queue.cpp"
#include "Stack.h"
#include "Stack.cpp"
using namespace std;


int main()
{
    LinkedList alist = LinkedList();
    
    alist = createLinkedList();
    alist = addAtFront(alist,2);
    alist = addAtFront(alist,4);
    alist = addAtFront(alist,6);
    alist = addAtLast(alist,8);
    alist = addAtLast(alist,10);
    alist = addAtLast(alist,12);

    display(alist);

    Queue aQ = Queue();
    aQ = createQueue();

    aQ = enqueue(aQ,2);
    aQ = enqueue(aQ,4);
    aQ = enqueue(aQ,6);
    aQ = enqueue(aQ,8);

    display(aQ);


    Stack stk = Stack();
    stk = createStack();

    stk = push(stk,1);
    stk = push(stk,3);
    stk = push(stk,5);
    stk = push(stk,7);
    stk = push(stk,9);

    display(stk);

    
    return 0;

}
#include "Stack.h"
#include <iostream>
using namespace std;

Stack createStack()
{
    Stack st;
    st.count = 0;
    st.top = NULL;

    return st;
}

Stack push(Stack sk,int a)
{
    Node* newptr = new Node(a);

    if(sk.top == NULL){
        sk.top = newptr;

    }else{
        newptr->next = sk.top;
        sk.top = newptr;
    }
    sk.count++;
}

Stack pop(Stack stk)
{
    Node* dlt = stk.top;

    stk.top = stk.top->next;
    delete dlt;
}

void display(Stack s)
{
    Node* ptr;
    int cnt = s.count;

    for(int x = 0; cnt > x; cnt--)
    {
       ptr = s.top;
       cout<<ptr->data<<" -> ";
       s = pop(s);
    }
    cout<<"END"<<endl<<"Items in the stack: "<<s.count<<endl;
    
}
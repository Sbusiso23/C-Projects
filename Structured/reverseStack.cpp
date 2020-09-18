#include "Node.h"
#include "Node.cpp"
#include "Stack.h"
#include "Stack.cpp"
using namespace std;

Stack reverseString(Stack st)
{
    Stack ks;

    int cnt = st.count;
    int x = 0;

    while(cnt > x)
    {
        ks = push(ks,st.top->data);
        st = pop(st);
        cnt--;
    }

}

Stack display(Stack st,int a)
{
    Stack ks;
    if(st.top != NULL){
        Node* ptr;
        int cnt = st.count;

        for(int x = 0; cnt > x; cnt--)
        {   
            ptr = st.top;
            cout<<ptr->data<<" -> ";
            ks = push(ks,ptr->data);
            st = pop(st);
        }
        cout<<"END"<<endl<<"Items in the stack: "<<st.count<<endl;
        ks = reverseString(ks);
        return ks;

    }else{
        cout<<"Stack is empty"<<endl;
        return ks;
    }
}



int main()
{
    Stack stk = Stack();
    stk = createStack();

    stk = push(stk,1);
    stk = push(stk,3);
    stk = push(stk,5);
    stk = push(stk,7);
    stk = push(stk,9);

    display(stk);

    stk = display(stk,2);
    
    return 0;
}
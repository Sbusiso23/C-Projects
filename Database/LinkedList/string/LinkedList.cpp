#include "LinkedList.h"

LinkedList::LinkedList()
{
    front = NULL;
    count = 0;
}

int LinkedList::getListCount()
{
	return count;
}

void LinkedList::addAtFront(string d)
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

void LinkedList::removeNode(int k)
{
    Node* dlt = front;
    Node* prePtr = front;
    int pos = 0;
    int cnt = count;

    if(k == 0){
        front = front->next;
        delete dlt;
        count--;

    }else if(k > 0 && k < cnt){
        pos++;
        dlt = dlt->next;
         while(dlt->next != NULL && k != pos)
        {
            dlt = dlt->next;
            prePtr = prePtr->next;
            pos++;
        } 
        prePtr->next = dlt->next;
        dlt->next = NULL;
        delete dlt;
        count--;

    }else{
        cout<<"Index out of range"<<endl;
    }
}


string LinkedList::getNodeItem(int index)
{
    int x = 0;
    string value;
    Node* element = front;
    
    if(index < count && index >= 0){    
        while(x < index){
            element = element->next;
            x++;
        }
        value = element->data;
    }else{
        cout<<"Index out of range"<<endl;
        value = "\0";
    }
    
    
    return value;
}

Node* LinkedList::getLastNode()
{
    Node* last = front;

    while(last->next != NULL){
        last = last->next;
    }

    return last;
}

void LinkedList::addAtLast(string d)
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

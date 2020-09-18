#include "Node.h"
#include "Node.cpp"
#include "LinkedList.cpp"
#include "LinkedList.h"
using namespace std;

LinkedList merge(LinkedList xlist, LinkedList ylist)
{
    Node* aLastNode = getLastNode(xlist);
    aLastNode->next = ylist.front;
    xlist.count+= ylist.count;
    
    return xlist;
}

int main()
{
  LinkedList alist = LinkedList();
  alist = createLinkedList();
  
  alist = addAtLast(alist,4);
  alist = addAtFront(alist,2);
  alist = addAtLast(alist,6);
  display(alist);

  LinkedList blist = LinkedList();
  blist = createLinkedList();

  blist = addAtLast(blist,8);
  blist = addAtLast(blist,10);
  blist = addAtLast(blist,12);
  display(blist);

  alist = merge(alist,blist);

  display(alist);
  

}
//#include "LinkedList/string/LinkedList.cpp"
#include "LinkedList/char/LinkedList.cpp"

int main()
{
	/*Let's test if LinkedList works
	LinkedList* alist = new LinkedList();

	alist->addAtFront("Muchas");
	alist->addAtLast("Gracious");
	alist->addAtLast("Sbusiso x-D");

	alist->display();

	cout<<"Memory used during execution: "<<sizeof(alist)<<" bytes"<<endl;
	delete alist;
	*/

	LinkedList blist = LinkedList();

	blist.addAtFront('J');
	blist.addAtLast('A');
	blist.addAtLast('M');
	blist.addAtLast('E');
	blist.addAtLast('S');

	blist.display();

	cout<<"Memory used during execution: "<<sizeof(blist)<<" bytes"<<endl;

	/*
	
	LinkedList_int* clist = new LinkedList_int();

	clist->addAtFront(0);
	clist->addAtLast(7);
	clist->addAtLast(6);
	clist->addAtLast(1);
	clist->addAtLast(3);
	clist->addAtLast(2);
	clist->addAtLast(7);
	clist->addAtLast(2);
	clist->addAtLast(4);
	clist->addAtLast(2);

	clist->display();

	cout<<"Memory used during execution: "<<sizeof(clist)<<" bytes"<<endl;
	delete clist;


	 LinkedList_double* dlist = new LinkedList_double();

	dlist->addAtFront(2.98);
	dlist->addAtLast(0.27);
	dlist->addAtLast(6.14);
	dlist->addAtLast(1.00);
	dlist->addAtLast(3.14);
	dlist->addAtLast(1.15);
	dlist->addAtLast(9.91);
	dlist->addAtLast(2.12);
	dlist->addAtLast(7.07);
	dlist->addAtLast(14.24);

	dlist->display();

	cout<<"Memory used during execution: "<<sizeof(dlist)<<" bytes"<<endl;
	delete dlist;

	*/
	return 0;
}

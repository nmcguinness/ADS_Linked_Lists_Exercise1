// SinglyLinkedList source from Moodle
//

#include <iostream>
#include "SimpleNode.h"

using namespace std;

void simpleNodeDemo()
{
	SimpleNode<int> first(10);
	auto pNext = first.getNext();
	cout << first.toString() << endl;
}

void simpleLinkedListDemo() {
	//make list
	SimpleLinkedList<int> intList;

	//make some nodes
	SimpleNode<int> n1(10);
	SimpleNode<int> n2(20);
	SimpleNode<int> n3(30);
	SimpleNode<int> n4(40);

	//add the node to the list
	intList.add(&n1); //pointerize an object by using & operator -> return address of object
	intList.add(&n2); //pointerize an object by using & operator -> return address of object
	intList.add(&n3); //pointerize an object by using & operator -> return address of object
	intList.add(&n4); //pointerize an object by using & operator -> return address of object

	//print it
	intList.print();
}

void simpleLinkedListSizeDemo() {
	//make list
	SimpleLinkedList<int> intList;

	//make some nodes
	SimpleNode<int> n1(10);
	SimpleNode<int> n2(20);
	SimpleNode<int> n3(30);
	SimpleNode<int> n4(40);

	//test size
}

int main()
{
	//cout << "simpleNodeDemo..." << endl;
//	simpleNodeDemo();

	cout << "simpleLinkedListDemo..." << endl;
	simpleLinkedListDemo();

	cout << "simpleLinkedListSizeDemo..." << endl;
	simpleLinkedListSizeDemo();
}
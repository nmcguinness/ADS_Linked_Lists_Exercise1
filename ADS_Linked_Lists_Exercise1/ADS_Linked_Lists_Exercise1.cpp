// SinglyLinkedList source from Moodle
//

#include <iostream>
#include "SimpleNode.h"

using namespace std;

void simpleNodeDemo()
{
	SimpleNode first(10);

	auto pNext = first.getNext();

	cout << first.toString() << endl;
}

void simpleLinkedListDemo() {
	//make list
	SimpleLinkedList intList;

	//make some nodes
	SimpleNode n1(10);
	SimpleNode n2(20);
	SimpleNode n3(30);
	SimpleNode n4(40);

	//add the node to the list
	intList.add(&n1); //pointerize an object by using & operator -> return address of object
	intList.add(&n2); //pointerize an object by using & operator -> return address of object
	intList.add(&n3); //pointerize an object by using & operator -> return address of object
	intList.add(&n4); //pointerize an object by using & operator -> return address of object

	//print it
	intList.print();
}

int main()
{
	//cout << "simpleNodeDemo..." << endl;
//	simpleNodeDemo();

	cout << "simpleLinkedListDemo..." << endl;
	simpleLinkedListDemo();
}
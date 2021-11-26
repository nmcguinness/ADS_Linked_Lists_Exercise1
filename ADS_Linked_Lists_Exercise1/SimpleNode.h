#pragma once
#include <string>

using namespace std;

/*
1. template
2. size, clear
3. search
4. predicate

*/

class SimpleNode {
private:
	SimpleNode* pNext;
	int data;

public:
	SimpleNode(int data) {
		this->data = data;
		pNext = nullptr;
	}

	SimpleNode* getNext() const {
		return this->pNext;
	}

	void setNext(SimpleNode* pNode) /*const*/ {
		this->pNext = pNode;
	}

	string toString() const {
		return to_string(this->data);
	}
};

class SimpleLinkedList {
private:
	SimpleNode* pHead;

public:
	SimpleLinkedList() {
		this->pHead = nullptr;
	}

	void add(SimpleNode* pNode) {
		if (this->pHead == nullptr)
			pHead = pNode;
		else
		{
			SimpleNode* pCurrent = pHead; //Node(10)
			SimpleNode* pNext = pHead->getNext(); //nullptr

			while (pNext != nullptr) {
				//store the last non-null node
				pCurrent = pNext;

				//traversing the list
				pNext = pNext->getNext();
			}
			pCurrent->setNext(pNode);
		}
	}

	int search(int target)
	{
	}

	void clear()
	{
	}

	int size()
	{
	}

	void print() const {
		SimpleNode* pNext = pHead;
		while (pNext != nullptr) {
			cout << pNext->toString() << endl;
			pNext = pNext->getNext();
		}
	}
};
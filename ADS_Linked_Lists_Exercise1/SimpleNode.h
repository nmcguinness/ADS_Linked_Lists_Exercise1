#pragma once
#include <string>
#include <functional>

using namespace std;

/*
1. template
2. size, clear
3. search
4. predicate
*/

template <typename E>
class SimpleNode {
private:
	SimpleNode* pNext;
	E data;

public:
	SimpleNode(E data) {
		this->data = data;
		pNext = nullptr;
	}

	E getData() const {
		return this->data;
	}

	SimpleNode* getNext() const {
		return this->pNext;
	}

	void setNext(SimpleNode* pNode) {
		this->pNext = pNode;
	}

	string toString() const {
		return to_string(this->data); //type must to convertible to string using to_string
	}
};

template <typename E>
class SimpleLinkedList {
private:
	SimpleNode<E>* pHead;
	int size;

public:
	SimpleLinkedList() {
		this->pHead = nullptr;
		this->size = 0;
	}

	~SimpleLinkedList() {
		//TODO - clear?
	}

	void add(SimpleNode<E>* pNode) {
		if (pNode == nullptr)
			throw invalid_argument("New node data cannot be null!");

		if (this->pHead == nullptr) {
			pHead = pNode;
		}
		else
		{
			SimpleNode<E>* pCurrent = pHead; //Node(10)
			SimpleNode<E>* pNext = pHead->getNext(); //nullptr

			while (pNext != nullptr) {
				//store the last non-null node
				pCurrent = pNext;

				//traversing the list
				pNext = pNext->getNext();
			}
			pCurrent->setNext(pNode);
		}

		this->size++;
	}

	int count()
	{
		return this->size;
	}

	int search(E target)
	{
		auto pred = [target](int value) { return target == value; };
		return search(pred);
	}

	int search(function<bool(E)> predicate)
	{
		//store position
		int index = 0;
		//iterate through each node
		SimpleNode<E>* pNext = pHead;

		//until we hit the tail
		while (pNext != nullptr) {
			//test the predicate
			if (predicate(pNext->getData()))
				return index;

			//continue with next
			pNext = pNext->getNext();

			//increment index
			index++;
		}

		return -1;
	}

	void clear()
	{
		throw "Implement me!";
	}

	void print() const {
		SimpleNode<E>* pNext = pHead;
		while (pNext != nullptr) {
			cout << pNext->toString() << endl;
			pNext = pNext->getNext();
		}
	}
};

/*
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

	void setNext(SimpleNode* pNode) {
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

*/
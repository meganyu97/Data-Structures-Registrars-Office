// Andrew Dieken & Megan Yu
// ID# 1968999 & 2263079
// dieke102@mail.chapman.edu
// yu204@mail.chapman.edu
// CPSC 350-01
// Assignment 04

#ifndef QUEUEDLL
#define QUEUEDLL

#include "DoublyLinkedList.h"


/*
*creates a separate DoublyLinkedList based off of the functions that are defined in the DoublyLinkedList.h file 
*/
class QueueDLL : public List
{
public:
	QueueDLL(); 

	~QueueDLL();

	void addBack(Student &newValue);

	void removeFront();

	Student getFront();

	bool isEmpty();

	int getSize();
private:
	DoublyLinkedList doublyLinkedList;
};

QueueDLL::QueueDLL()
{}

QueueDLL::~QueueDLL()
{
	while (!isEmpty()) //cheking that Queue is not empty
	{
		removeFront();
	}
}

void QueueDLL::addBack(Student &newValue)
{
	doublyLinkedList.addBack(newValue);
}

void QueueDLL::removeFront()
{
	doublyLinkedList.removeFront();
}

Student QueueDLL::getFront()
{
	return doublyLinkedList.getFront();
}

bool QueueDLL::isEmpty()
{
	return (doublyLinkedList.isEmpty());
}

int QueueDLL::getSize()
{
	return doublyLinkedList.getSize();
}

#endif

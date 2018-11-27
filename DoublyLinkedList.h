// Andrew Dieken & Megan Yu
// ID# 1968999 & 2263079
// dieke102@mail.chapman.edu
// yu204@mail.chapman.edu
// CPSC 350-01
// Assignment 04

#ifndef DLLIST_H
#define DLLIST_H

#include "list.h"
#include "ListNode.h"

class DoublyLinkedList : public List
{
public:
	DoublyLinkedList();

	~DoublyLinkedList();
	void addBack(Student &d);
	void removeFront();
	Student getFront();

	bool isEmpty()  //checking if empty
	{
		return (size == 0);
	}

	int getSize() //getting the size
	{
		return size;
	}
private:
	ListNode *front;
	ListNode *back;
	int size;
};

DoublyLinkedList::DoublyLinkedList()
{
	size = 0;
	front = 0;
	back = 0;
}

DoublyLinkedList::~DoublyLinkedList()
{
	while (!isEmpty())
	{
		removeFront();
	}
}

/*
*adds a node to the back of the list
*/
void DoublyLinkedList::addBack(Student &d)
{
	ListNode *node = new ListNode(d);

	if (isEmpty())
	{
		front = node;
		back = node;
		++size;
	}
	else
	{
		back->next = node;
		node->prev = back;
		back = node;
		++size;
	}
}

/*
*removes the front node in the list
*/
void DoublyLinkedList::removeFront()
{
	ListNode *node = front;

	if (getSize() == 1)
	{
		front = node->next;
		back = NULL;
		--size;
	}
	else
	{
		front = node->next;
		front->prev = NULL;
		--size;
	}
}

/*
*returns the front node value in the list
*/
Student DoublyLinkedList::getFront()
{
	ListNode *node = front;
	return node->data;
}

#endif

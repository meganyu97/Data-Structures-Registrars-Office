// Andrew Dieken & Megan Yu
// ID# 1968999 & 2263079
// dieke102@mail.chapman.edu
// yu204@mail.chapman.edu
// CPSC 350-01
// Assignment 04

#ifndef LISTNODE
#define LISTNODE


/*
*this class creates a single node used to fill our lists 
*/
class ListNode
{
public:
	inline ListNode(Student &d); //cunstructor

	inline ~ListNode(); //destructor

	Student data;
	ListNode *next;
	ListNode *prev;
};

ListNode::ListNode(Student &d)
{
	data = d;
	next = 0; //setting next equal to 0
	prev = 0; //setting previous equal to 0
}

ListNode::~ListNode()
{
	delete next;
	delete prev;
}


#endif

// Andrew Dieken & Megan Yu
// ID# 1968999 & 2263079
// dieke102@mail.chapman.edu
// yu204@mail.chapman.edu
// CPSC 350-01
// Assignment 04

#ifndef LIST
#define LIST

class List
{
public:
	virtual void addBack(Student &d) = 0;

	virtual void removeFront() = 0;

	virtual Student getFront() = 0;

	virtual bool isEmpty() = 0; //checking if empty
	virtual int getSize() = 0; //getting the size
};
#endif

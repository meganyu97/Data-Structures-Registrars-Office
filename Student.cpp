// Andrew Dieken & Megan Yu
// ID# 1968999 & 2263079
// dieke102@mail.chapman.edu
// yu204@mail.chapman.edu
// CPSC 350-01
// Assignment 04

#include "Student.h"

Student::Student()
{
	WindowTime = 0; //setting window time equal to 0
	timeEnteredLine = 0; //setting time they entered the line to 0
}

Student::Student(int windowNum, int timeEnteredLine)
{
	WindowTime = windowNum;
	this->timeEnteredLine = timeEnteredLine;
}

Student::~Student()
{
	WindowTime = 0;
	timeEnteredLine = 0;
}

/*
*returns the time the student entered the line
*/
int Student::getTimeEnterQueue()
{
	return timeEnteredLine;
}

/*
*returns the time of the given window 
*/
int Student::getWindowTime()
{
	return WindowTime;
}

/*
*returns the time waited
*/
int Student::getQueueWait(int TimeExitQueue)
{
	return (TimeExitQueue - timeEnteredLine);


}

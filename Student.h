// Andrew Dieken & Megan Yu
// ID# 1968999 & 2263079
// dieke102@mail.chapman.edu
// yu204@mail.chapman.edu
// CPSC 350-01
// Assignment 04

#ifndef STUDENT
#define STUDENT

//Class to Represent a Student
class Student
{
public:
	Student();

	Student(int windowNum, int timeEnteredLine);

	~Student();

	int getWindowTime();

	int getTimeEnterQueue();

	int getQueueWait(int TimeExitQueue);
private:
	int WindowTime;
	int timeEnteredLine;
};
#endif

// Andrew Dieken & Megan Yu
// ID# 1968999 & 2263079
// dieke102@mail.chapman.edu
// yu204@mail.chapman.edu
// CPSC 350-01
// Assignment 04

#ifndef WINDOW
#define WINDOW

//Class To Represent a Window
class Window
{
public:
	Window();

	~Window();

	void canTakeStudent(int time);

	void getStudent(int windowTime, int studentLeave);

	void reset();

	int getMaxIdle();

	bool isOpen();

	int idle;
private:
	int maxIdle;
	int studentLeaveQueue;
	int studentWindowTime;
	bool open;
};

#endif

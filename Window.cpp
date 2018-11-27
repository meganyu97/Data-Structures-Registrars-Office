// Andrew Dieken & Megan Yu
// ID# 1968999 & 2263079
// dieke102@mail.chapman.edu
// yu204@mail.chapman.edu
// CPSC 350-01
// Assignment 04

#include "Window.h"

Window::Window()
{
	idle = 0;
	open = true; //setting the bool 'open' equal to true
}

Window::~Window()
{
	idle = 0; //setting idle equal to 0
	maxIdle = 0;
	open = 0;
	studentLeaveQueue = 0;
	studentWindowTime = 0;
}

/*
*
*/
void Window::canTakeStudent(int time)
{
	open = (studentLeaveQueue + studentWindowTime) == time;
}

/*
*
*/
void Window::getStudent(int windowTime, int studentLeave)
{
	studentLeaveQueue = studentLeave;
	studentWindowTime = windowTime;
	open = false; //setting the bool 'open' equal to false
}

/*
*resets the idle to 0
*/
void Window::reset()
{
	if (idle > maxIdle)
	{
		maxIdle = idle;
		idle = 0;
	}
}

/*
*
*/
int Window::getMaxIdle()
{
	return maxIdle;
}

/*
*returns open to show that a given window is open and available to take a student
*/
bool Window::isOpen()
{
	return open;
}

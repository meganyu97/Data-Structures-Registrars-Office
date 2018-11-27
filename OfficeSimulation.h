// Andrew Dieken & Megan Yu
// ID# 1968999 & 2263079
// dieke102@mail.chapman.edu
// yu204@mail.chapman.edu
// CPSC 350-01
// Assignment 04

#ifndef OFFICESIMULATION
#define OFFICESIMULATION``

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include "Student.h"
#include "QueueDLL.h"
#include "Window.h"
#include "list.h"

using namespace std;

//Class to Run the Simulation
class OfficeSimulation
{
public:

	OfficeSimulation(string fileName);
	~OfficeSimulation();

	void runSimulation();
	void printOutput();
	bool getFile();

private:
	List *l;
	QueueDLL studentLine;
	Window *windows;
	Student student;
	int enterTime; 
	int lineOfStudents; //student line index
	int studentCount;
	int numberOfStudents;
	int timeRequired; //time each student needs at a window
	int *studentLineArray;
	int windowCount;
	int availableWindows; 
	int totalMaxIdleTime;
	int longestIdleTime; 
	int idleOverFive;
	int stdWaitTen;
	double lineTotalTime;
	string fileLine;
	string fileName;
};


#endif

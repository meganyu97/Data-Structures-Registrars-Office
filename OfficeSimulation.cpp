// Andrew Dieken & Megan Yu
// ID# 1968999 & 2263079
// dieke102@mail.chapman.edu
// yu204@mail.chapman.edu
// CPSC 350-01
// Assignment 04

#ifndef WINDOW_H
#define WINDOW_H
#include "OfficeSimulation.h"

//Constructor
OfficeSimulation::OfficeSimulation(string fileName)
{
	this->fileName = fileName;
	totalMaxIdleTime = 0;
	longestIdleTime = 0;
	idleOverFive = 0;
	stdWaitTen = 0;
	lineTotalTime = 0.0;
	lineOfStudents = 0;
}

//Deconstructor
OfficeSimulation::~OfficeSimulation()
{
	delete[] studentLineArray;
	delete[] windows;
}

//File Processing
/*
*this function opens the file given by the user
*goes through and takes each line and assigns the numbers to each variable based on what line data comes from
*/
bool OfficeSimulation::getFile()
{

	ifstream file(fileName.c_str());

	if (!file.is_open())
	{
		cout << "Error opening file, please try again." << endl;
		return false;
	} else
	{
		getline(file, fileLine);
		windowCount = atoi(fileLine.c_str());
		windows = new Window[windowCount];

		while (!file.eof())
		{
			while (getline(file, fileLine))
			{
				if (fileLine.size() > 0)
				{
					enterTime = atoi(fileLine.c_str());
					break;
				}
				else
					continue;
			}

			while (getline(file, fileLine))
			{
				if (fileLine.size() > 0)
				{
					studentCount = atoi(fileLine.c_str());
					break;
				}
				else
					continue;

			}

			//getline(file, fileLine);

			for (int i = 0; i < studentCount; ++i)
			{
				while (getline(file, fileLine))
				{
					if (fileLine.size() > 0)
					{
						timeRequired = atoi(fileLine.c_str());
						break;
					}
					else
						continue;

				}

			}
		}
	}
	return true;
}

//runs simulation
/*
*this function takes everything gathered from the file and every file to run the simulation
*gets called in the main file
*/
void OfficeSimulation::runSimulation()
{
	studentLineArray = new int[studentLine.getSize()];
	l = &studentLine;
	numberOfStudents = l->getSize();

	for (int time = 0; time < 1000000000; ++time)
	{
		openWindows = 0;

		for (i = 0; i < windowCount; ++i) {
			if (window isOpen() and isEmpty() ) {
				++openWindows;
			}

		}

		if (number of open windows equals number of windows) {
			reset() windows
		}

		for (i = 0; i < windowCount; ++i) {
			if (list is not isEmpty()) {
				student goes to front
			}

			if (window.isOpen()) {
				add window to idle
			}
			if (!window.isOpen()){
				window.canTakeStudent();
			}

		}
	}
}


/*
*this function takes all the updated variable information gathered from the runSimulation function and calculates and prints everything
*gets called in the main
*/
void OfficeSimulation::printOutput()
{
	cout << lineTotalTime<< endl;
	cout << numberOfStudents << endl;
	cout << "Average student wait time: " << (float) lineTotalTime / numberOfStudents << " minutes." << endl;;

	sort(studentLineArray, studentLineArray + numberOfStudents);
	if (numberOfStudents % 2 == 0)
	{
		int a = (numberOfStudents / 2) - 1;
		int b = (numberOfStudents / 2);
		cout << "Median student wait time: " << (float) ((studentLineArray[a] + studentLineArray[b]) / 2.0)
			 << endl;
	} else
	{
		cout << "Median student wait time: " << (float) (studentLineArray[numberOfStudents] / 2.0) << " minutes." << endl;
	}

	cout << "Longest Student wait time: " << (studentLineArray[numberOfStudents - 1]) << " minutes." << endl;


	for (int i = 0; i < numberOfStudents; ++i)
	{
		if (studentLineArray[i] > 10)
		{
			++countWait10;
		}
	}
	cout << "Number of Students waiting over 10 minutes: " << stdWaitTen << " students." << endl;


	for (int i = 0; i < windowCount; ++i)
	{
		totalMaxIdleTime = current window.getMaxIdle();
		if (longestIdle < windows[i].getMaxIdle())
		{
			longestIdle = windows[i].getMaxIdle();
		}
		if (windows[i].getMaxIdle() > 5)
		{
			++countOver5;
		}
	}
	cout << "Mean window idle time: " << (float) (totalMaxIdleTime / windowCount) << " minutes." << endl;
	cout << "Longest window idle time: " << longestIdleTime << " minutes." << endl;
	cout << "Number of windows idle over 5 min: " << idleOverFive << " windows." << endl;
}

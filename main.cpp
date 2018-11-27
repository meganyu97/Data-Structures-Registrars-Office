// Andrew Dieken & Megan Yu
// ID# 1968999 & 2263079
// dieke102@mail.chapman.edu
// yu204@mail.chapman.edu
// CPSC 350-01
// Assignment 04

// This code simulates a registrars office line and inventories the wait times of each student in line to get help,
// the average amount of time each student needs at a window, and how long windows are idle for before a student
// comes for help using doubly linked lists and queues. 

#include <cstdlib>
#include <stdlib.h>
#include "OfficeSimulation.h"

using namespace std;

int main(int argc, char *argv[])
{
	OfficeSimulation *officeSimulation;
	bool fileCanOpen; //determins if the file was able to open.

	if (argc != 2)
	{
		cout << "Error no file name found" << endl;
		return EXIT_FAILURE;
	} else
	{
		officeSimulation = new OfficeSimulation(argv[1]); //takes in user input as argument
		goodFile = officeSimulation.getFile();

		/*
		*if the file was able to open
		**run the simulation and print everything
		*if the file was not able to open
		**then exit the program
		*/
		if (fileCanOpen)
		{
			officeSimulation.runSimulation();
			officeSimulation.printOutput();
			return EXIT_SUCCESS;
		} else
		{
			return EXIT_FAILURE;
		}
	}
}

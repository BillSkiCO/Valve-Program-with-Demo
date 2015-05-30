// FILE: valvedemo.cpp
// AUTHOR: Bill Golembieski
// DATE: 5/30/2015
// This demo is used to show how valve class implimentation

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "valve.h"

using namespace std;
using golembieski_1::valve;

const int DEMO_SIZE = 6;

int main()
{

	valve demo(DEMO_SIZE);
	int user_input;

	// Setting the sample valve to a postion indicated by the user
	cout << "Here is a valve with: " << DEMO_SIZE << " positions." << endl;
	cout << "What position would you like to set the valve to?" << endl;
	cout << "Please type a number from 0 to " << DEMO_SIZE << ":";
	cin >> user_input;
	demo.shift(user_input);

	//Shift flow down to zero, printing flow along the way
	while (demo.is_open())
	{
		cout << "The flow is now " << demo.flow() << endl;
		demo.shift(-1);
	}

	cout << "The flow is now off" << endl;
	
	return EXIT_SUCCESS;

}
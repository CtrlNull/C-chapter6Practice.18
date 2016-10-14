// This program uses a static local variable

#include "stdafx.h"
#include <iostream>
using namespace std;

void showStatic();		// Function prototypes


int main()
{
	// Call the showStatic function five times
	for (int count = 0; count < 5; count++)
		showStatic();
	return 0;
}

//**********************************************************
// The showStatic Function's statNum is a static local
// variable. its value is displayed and then incremented 
// just before the function returns
//*********************************************************

void showStatic()
{
	static int statNum;
	cout << "statNum is " << statNum << endl;
	statNum++;
}

/*********************************************************************
** Author:		Billy R. Shelton
** Date:		7/4/2018
** Description:
*********************************************************************/


#include <iostream>
#include "Die.hpp"
#include <string>
#include <stdlib.h>		//library for random function
#include <ctime>		//includes present time 

using namespace std;



int Die::getNumSides()
{
	return NumSides;
}

void Die::setNumSides(int SidesIn)
{
	NumSides = SidesIn;
}

int Die::roll()									//produces a random outcome when rolling the die
{
	
	int outcome;						
	outcome = (rand() % NumSides) + 1;			//outcome stores a random number from the roll of the regular die
	//cout << outcome << endl;
	//cout << endl;
	return outcome;
	
}

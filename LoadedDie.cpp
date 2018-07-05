/*********************************************************************
** Author:		Billy R. Shelton
** Date:		7/4/2018
** Description:
*********************************************************************/

#include <iostream>
#include "LoadedDie.hpp"
//#include "Die.hpp"
#include <string>
#include <stdlib.h>		//library for random function
#include <ctime>		//includes present time 

using namespace std;

int LoadedDie::roll()								//this makes the dice roll give higher outcomes on average
{
	loaded_outcome = (rand() % NumSides) + 3;

	if (loaded_outcome > NumSides)
	{
		loaded_outcome = NumSides;
	}
	//cout << loaded_outcome << endl;
	//cout << endl;
	return loaded_outcome;
}

#pragma
/*********************************************************************
** Author:		Billy R. Shelton
** Date:		7/4/2018
** Description: This is a header file which creates the class LoadedDie. It 
uses inheritance to acquire most of it's data but does define a new function. 
The function simulates a toss of the loaded die.
*********************************************************************/

#ifndef LOADEDDIE_HPP
#define lOADEDDIE_HPP
#include "Die.hpp"

class LoadedDie:public Die					
{
protected :
	int loaded_outcome;
public:
	int roll();		//function which specifies how a loaded die rolls
};
#endif 

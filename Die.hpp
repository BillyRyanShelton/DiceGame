#pragma
/*********************************************************************
** Author:		Billy R. Shelton
** Date:		7/4/2018
** Description:	This is a header file which creates the class Die.  The
class has 1 data member.  The member functions are created but not defined
here.  They include get and set functions and a simulated roll of the die 
function.
*********************************************************************/


#ifndef DIE_HPP
#define DIE_HPP


class Die		
{
protected:
	int NumSides;				//data member which is equal to the number of sides of the die

public:
	int getNumSides();			//functions which store and return the die's number of sides
	void setNumSides(int);
	virtual int roll();			//function which specifies how a regular die rolls
};

#endif

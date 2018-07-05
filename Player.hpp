#pragma
/*********************************************************************
** Author:		Billy R. Shelton
** Date:		7/4/2018
** Description: This is a header file which creates the class Player.  The
class has 3 data members.  The member functions are created but not defined
here.  They include get and set functions, a function which has the player 
choose their type of die and a function which has the player play the game.
*********************************************************************/

#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "LoadedDie.hpp"
#include "Die.hpp"
#include <string>

using namespace std;

class Player							
{
private:
	string name;				//data member which will store the player's name
	LoadedDie loadedDie;		//loaded die object is created
	Die regularDie;				//die object is created
	int DieType;				//int which keeps track of die type
		
public:
	string getName();				//functions which store and return the player's name
	void setName(string);		
	void chooseDieType();			//determines what kind of die the player wants
	string getDieType();
	int play();				//player rolls their die
};

#endif

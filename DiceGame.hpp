#pragma
/*********************************************************************
** Author:		Billy R. Shelton
** Date:		7/4/2017
** Description:	This is a header file which creates the class DiceGame.  The
class has 3 data members.  The member functions are created but not defined
here.  They include a function which gets the number of rounds from the user
and a function which simulates the dice game.
*********************************************************************/


#ifndef DICEGAME_HPP
#define DICEGAME_HPP
#include "Player.hpp"

class DiceGame							
{
private:
	Player player1;					//2 player objects are created
	Player player2;			
	int numRounds;
	
public:
	int getRounds(int);				//function which stores number of rounds
	void play();					//function that initializes the board game
};

#endif



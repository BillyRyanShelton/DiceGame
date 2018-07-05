/*********************************************************************
** Author:		Billy R. Shelton
** Date:		7/4/2018
** Description:		This is the client code file which implements 
a Dice War game.

Preconditions:
-User specifies number of rounds to be played
-User chooses the the type of dice(regular or loaded) for each player and the number of sides the dice has

Game Rules:
-Each player rolls a dice and the player with the highest dice toss wins that round
     -If both players have the same number, the round is a draw
-The winner is the player who won the most rounds

Post-Conditions:
-The program will output the results of each round, the final score of each player and the winner of the game

*********************************************************************/



#include <iostream>
#include "DiceGame.hpp"
#include "Die.hpp"
//#include "LoadedDie.hpp"				//this was causing an error, something about redefintions
#include "Player.hpp"
#include <string>
#include <time.h>
#include <stdlib.h>				//used to call random function

using namespace std;

int main()
{
	srand(time(NULL));
	DiceGame Game1;
	Game1.play();
	return 0;
}

/*********************************************************************
** Author:		Billy R. Shelton
** Date:		7/4/2018
** Description:	This is an implementation file which defines the function
definitions created in the DiceGame.hpp file. 
*********************************************************************/

#include <iostream>
#include "DiceGame.hpp"
#include <string>
#include <math.h>				//used to call fmod function
#include <stdlib.h>				//strtof 
#include <iomanip> 
using namespace std;



int DiceGame::getRounds(int RoundsIn)
{
	numRounds = RoundsIn;
	return numRounds;
}


void DiceGame::play()
{
	cout << "Let's play a dice game! \n\n";

	cout << "Rules:  There are two players and both have an individual die." << endl;
	cout << "For a number of specified rounds, the players will roll their dice." << endl;
	cout << "The player with the higher value wins the round, otherwise it's a draw." << endl;
	cout << "The player with the most wins, wins the game.\n\n";

	cout << "How many rounds would you like the game to run for?\n";

	//Integer Input Validation
	float input1;
	char firstChar;
	cin >> input1;
	firstChar = cin.peek();
	cout << firstChar;
	cin.clear();
	cin.ignore(100, '\n');
	
	while ((input1 < 1) || (fmod(input1, 1) != 0) || (firstChar != '\n'))
	{
		cout << "Please enter an integer greater than 1:" <<endl;
		cin >> input1;
		firstChar = cin.peek();
		cin.clear();
		cin.ignore(100, '\n');
	} 
	
	//get user names
	numRounds = input1;
	string player1name;
	string player2name;
	cout << "What is player 1's name?:" << endl;
	getline(cin, player1name);
	cout << endl;
	cout << "What is player 2's name?:" << endl;
	getline(cin, player2name);
	cout << endl;

//set user names
	player1.setName(player1name);
	player2.setName(player2name);

	//player 1 chooses their die type
	cout << player1.getName() << ":" << endl;
	player1.chooseDieType();
	
	cout << endl;

	//player 2 chooses their die type
	cout << player2.getName()  << ":" << endl;
	player2.chooseDieType();

	int player1total = 0;
	int player2total = 0;

	//the players begin rolling!
	cout << setw(18) << (player1.getDieType()) << setw(10) << (player2.getDieType()) << endl;
	cout << setw(18) << (player1.getName()) << setw(10) << (player2.getName()) << endl;
	for (int i = 0; i < numRounds; i++)
	{
		int player1num = player1.play();				//two variables used to hold the score for both player only for this round
		int player2num = player2.play();
		//the outcome of each round is printed
		cout << endl;
		cout << "Round " << setw(4) << (i+1) << ":" << setw(7) << (player1num) << setw(10) << (player2num);


		//the results of each round saved
		if ((player1num) > (player2num))
		{
			player1total++;
		}
		
		if ((player1num) < (player2num))
		{
			player2total++;
		}
	
	}

	cout << "\n\n";

	cout << player1.getName() << " won " << player1total << " round(s)." << endl;
	cout << player2.getName() << " won " << player2total << " round(s)." << endl;
	cout << endl;

	//the winner of the game is announced
	if ((player1total) > (player2total))
	{
		cout << "The WINNER is " << player1.getName() << endl;
	}
	else if ((player1total) < (player2total))
	{
		cout << "The WINNER is " << player2.getName() << endl;
	}
	else
	{
		cout << "The game is a DRAW." << endl;
	}
}

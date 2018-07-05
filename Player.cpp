/*********************************************************************
** Author:		Billy R. Shelton
** Date:		7/4/2018
** Description:	This is an implementation file which defines the function
definitions created in the Player.hpp file. 
*********************************************************************/

#include <iostream>
#include "Player.hpp"
#include <string>
#include <stdlib.h>	
#include <math.h>

string Player::getName()
{
	return name;
}

void Player::setName(string nameIn)
{
	name = nameIn;
}

void Player::chooseDieType()
{
	//asking player what kind of die they want
	cout << "Do you want a regular die? (y/n)?" << endl;

  char regDie;
	cin >> regDie;
	cout << endl;
	cin.clear();
	cin.ignore(100, '\n');

	while ((regDie != 'y') && (regDie != 'n'))
	{
		cout << "Please print 'y' for yes and 'n' for no." << endl;
		cin >> regDie;
		cout << endl;
		cin.clear();
		cin.ignore(100, '\n');
	}

	//IF player picks normal die
	if (regDie == 'y')
	{
		cout << "Ok, how many sides would you like it to have?\n";
	
		//Integer Input Validation
		float SideAmt;
		char firstChar1;
		cin >> SideAmt;
		firstChar1 = cin.peek();
		//cout << firstChar1;
		cin.clear();
		cin.ignore(100, '\n');

		while (((SideAmt < 1) && (SideAmt > 100)) || (fmod(SideAmt, 1) != 0) || (firstChar1 != '\n'))
		{
			cout << "Please enter an integer greater than 1 and less than 100:" << endl;
			cin >> SideAmt;
			firstChar1 = cin.peek();
			cin.clear();
			cin.ignore(100, '\n');
		}
		
		regularDie.setNumSides(SideAmt);
		DieType = 1;			//1 signifies a regular die
	}

	//IF player picks loaded die
	else if (regDie == 'n')
	{
		cout << "Ok, you will get a loaded die." << endl;
		cout << "How many sides would you like it to have?\n";
		//Integer Input Validation
		float SideAmt;
		char firstChar1;
		cin >> SideAmt;
		firstChar1 = cin.peek();
		//cout << firstChar1;
		cin.clear();
		cin.ignore(100, '\n');

		while (((SideAmt < 1) && (SideAmt > 100)) || (fmod(SideAmt, 1) != 0) || (firstChar1 != '\n'))
		{
			cout << "Please enter an integer greater than 1 and less than 100:" << endl;
			cin >> SideAmt;
			firstChar1 = cin.peek();
			cin.clear();
			cin.ignore(100, '\n');
		}

		loadedDie.setNumSides(SideAmt);
		DieType = 0;		//0 signifies a loaded die
		
		cout << endl;
	}

}

int Player::play()
{
	if (DieType == 1)
	{
		return(regularDie.roll());
	}
	else
	{
		return(loadedDie.roll());
	}
}

string Player::getDieType()
{
	if (DieType == 1)
	{
		return("Regular Die");
	}
	else
	{
		return("Loaded Die");
	}
}

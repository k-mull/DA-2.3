#include "DiceConsole.h"
#include "Die.h"
#include "DieHand.h"
#include <string>
#include <iostream>
using namespace std;
void DiceConsole::displayDie(Die* die)
{
	cout << "Die shows: " << die->getFaceValue() << endl;
}
void DiceConsole::displayDice(Die* dice, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Die " << i + 1 << ":" << dice[i].getFaceValue() << endl;
	}
}
int DiceConsole::getUserChoice(string menu)
{
	int choice;
	cout << "do you want to reroll?" + menu + " " << endl << endl;
	cin >> choice;
	return choice;
}

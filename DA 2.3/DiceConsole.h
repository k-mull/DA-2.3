#ifndef DICE_CONSOLE
#define DICE_CONSOLE
#include "DiceConsole.h"
#include "DieHand.h"
#include "Die.h"
#include <iostream>
using namespace std;
class DiceConsole
{
public:
	void displayDie(Die* die);
	void displayDice(Die* dice, int size);
	int getUserChoice(string menu);
};
#endif 
#include "DieHand.h"
#include <iostream>
#include <string>


void DiceHand::setDice(Die*d)
{
	d = new Die[size];
	for (int i = 0; i < size; i++)
	{
		d[i].setFaceValue(6);
	}

}

void DiceHand::setSize(int s)
{
	size = s;
}

int DiceHand::getSize() const
{
	return size;
}
Die* DiceHand::getDice() const
{
	return dice;
}
string DiceHand::displayDiceHand()
{
	string display = "Dice values:\n";
	for (int i = 0; i < size; i++) {
		display += dice[i].describeDie() + "\n";
	}
	return display;
}
void DiceHand::rollDie(int num)
{
	if (num >= 0 && num < size) {
		dice[num].roll();
	}
}
void DiceHand::rollAllDice()
{
	for (int i = 0; i < size; i++) {
		dice[i].roll();
	}
}
//added constructors
DiceHand::DiceHand() : DiceHand(5, dice)
{
	//dice = new Die[size]; ??
	//size = 5;

}
DiceHand::DiceHand(int s, Die* d)
{
	size = s;
	dice = new Die[size];
}
DiceHand::~DiceHand()
{
	delete[] dice;
}
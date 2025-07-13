#ifndef DIEHAND
#define DIEHAND
#include "Die.h"
#include "DieHand.h"
#include <iostream>
using namespace std;

class DiceHand
{
private:
	Die* dice;
	int size;
public:
	//constructors
	DiceHand();
	DiceHand(int s, Die* d);
	~DiceHand();
	void setDice(Die* d);
	void setSize(int s);
	int getSize() const;
	Die* getDice() const;

	string displayDiceHand();
	void rollDie(int num);
	void rollAllDice();

};
#endif

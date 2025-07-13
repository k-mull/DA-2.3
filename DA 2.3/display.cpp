#include "Die.h"
#include "DieHand.h"
#include "DiceConsole.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void testRun();
int main()
{
	Die Die1, Die2, Die3, Die4, Die5;
	DiceHand hand;



	Die1.setFaceValue(6);
	Die2.setFaceValue(6);
	Die3.setFaceValue(6);
	Die4.setFaceValue(6);
	Die5.setFaceValue(6);


	srand(time(0));

	Die1.roll();
	Die2.roll();
	Die3.roll();


	cout << Die1.describeDie() << endl;
	cout << Die2.describeDie() << endl;
	cout << Die3.describeDie() << endl;

	cout << endl;




	hand.setSize(5);
	


	hand.rollAllDice();
	cout << "after rolling all dice -> " << hand.displayDiceHand() << endl;
	hand.rollDie(0);
	hand.rollDie(4);
	cout << "after rolling first and fifth die -> " << hand.displayDiceHand() << endl;


	testRun();
}
void testRun()
{
	DiceHand handTest;
	DiceConsole console;
	handTest.setSize(2);
	srand(time(0));


	bool continueRolling =true;
	while (continueRolling) 
	{
		handTest.rollAllDice();
		console.displayDice(handTest.getDice(), handTest.getSize());
		int choice = console.getUserChoice("\n1. re-roll\n2. stay");

		if (choice == 2) {
			console.displayDice(handTest.getDice(), handTest.getSize());
			cout << "thanks for playing !!! " << endl; 
			continueRolling = false;
		}
	}
}

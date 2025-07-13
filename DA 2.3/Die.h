#ifndef DIE
#define DIE
#include "Die.h"
#include <iostream>
using namespace std;

class Die
{
private:
	int const numberOfSides;
	int faceValue;
public:
	// Constructor
	Die();
	Die(int numSides);

	//void setNumberOfSides(int numSides);
	void setFaceValue(int fVal);

	int getNumberOfSides() const;
	int getFaceValue() const;
	void roll();

	string describeDie();

};
#endif
#include "Die.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


void Die::setFaceValue(int fVal)

{
	faceValue = fVal;
}
int Die::getNumberOfSides() const
{
	return numberOfSides;
}
int Die::getFaceValue() const
{
	return faceValue;
}
void Die::roll()
{
	faceValue = (rand() % (numberOfSides - 1 + 1) + 1);
}
string Die::describeDie()
{
	return "The value of the Die is " + to_string(faceValue);
}
//added constructor
Die::Die() : numberOfSides(6)
{
	faceValue = 1;
}
Die::Die(int numSides) : numberOfSides(numSides) {
	faceValue = 1;
}

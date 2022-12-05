#ifndef CAR_H_
#define CAR_H_
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
private:
	int doorNum;

public:
	Car();
	Car(string manufacturer, int year, int numDoors);
	int getDoorNum();
	void setDoorNum(int numDoors);
	void displayInfo();
};

#endif
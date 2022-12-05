#include <iostream>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car() : Vehicle()
{
}

Car::Car(string manufacturer, int year, int numDoors) : Vehicle(manufacturer, year)
{
	doorNum = numDoors;
}

int Car::getDoorNum()
{
	return doorNum;
}

void Car::setDoorNum(int numDoors)
{
	doorNum = numDoors;
}

void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors: " << getDoorNum() << endl;
}

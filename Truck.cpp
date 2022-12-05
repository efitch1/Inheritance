#include <iostream>
#include "Vehicle.h"
#include "Truck.h"

using namespace std;

Truck::Truck() : Vehicle()
{
}

Truck::Truck(string manufacturer, int year, int towCap) : Vehicle(manufacturer, year)
{
	this->towCap = towCap;
}
int Truck::getTowCap()
{
	return towCap;
}

void Truck::setTowCap(int towCap)
{
	this->towCap = towCap;
}
void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << getTowCap() << endl;
}

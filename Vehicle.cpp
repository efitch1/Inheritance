#include <iostream>
#include "Vehicle.h"

using namespace std;
Vehicle::Vehicle()
{
}

Vehicle::Vehicle(string manufacturer, int year)
{
	this->manufacturer = manufacturer;
	this->year = year;
}

string Vehicle::getManufacturer()
{
	return manufacturer;
}

int Vehicle::getYear()
{
	return year;
}

void Vehicle::setManufacturer(string manufacturer)
{
	manufacturer = manufacturer;
}

void Vehicle::setYear(int year)
{
	this->year = year;
}
void Vehicle::displayInfo()
{
	cout << "Vehicle Information:" << endl;
	cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year Built: " << getYear() << endl;
}

#ifndef VEHICLE_H_
#define VEHICLE_H_
#include <iostream>

using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int year;

public:
	Vehicle();
	Vehicle(string manufacturer, int year);
	string getManufacturer();
	int getYear();
	void setManufacturer(string manufacturer);
	void setYear(int year);
	void displayInfo();
};

#endif


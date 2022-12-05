#ifndef TRUCK_H_
#define TRUCK_H_
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle
{
private:
	int towCap;

public:
	Truck();
	Truck(string manufacturer, int year, int towCap);
	int getTowCap();
	void setTowCap(int towCap);
	void displayInfo();
};

#endif

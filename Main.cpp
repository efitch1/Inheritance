//Eduardo Fitch
//CIS 1202
//11/29/2022
#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
	string manufacturer;
	int year;
	int doorNum;
	int towCap;

	cout << "Vehicle Program" << endl;
	cout << endl << "Vehicle: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	Vehicle vehicle(manufacturer, year);
	vehicle.displayInfo();
	cout << endl << "Car: " << endl;
	cin.clear();
	cin.ignore(100, '\n');
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the number of doors: ";
	cin >> doorNum;
	Car car(manufacturer, year, doorNum);
	car.displayInfo();
	cout << endl << "Truck: " << endl;
	cin.clear();
	cin.ignore(100, '\n');
	cout << "Enter the manufacturer: ";
	getline(cin, manufacturer);
	cout << "Enter the year built: ";
	cin >> year;
	cout << "Enter the towing capacity: ";
	cin >> towCap;
	Truck truck(manufacturer, year, towCap);
	truck.displayInfo();

	return 0;
}

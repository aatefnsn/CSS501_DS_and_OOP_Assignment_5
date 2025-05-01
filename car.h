#pragma once
#include <iostream>
using namespace std;

class car {
private:
	int counter;
public:
	string make;
	car(string make);
	car();
	void setMake(string make);
	string getMake();
	int getCounter();
	bool operator ==(const car &car);
	friend ostream& operator<<(ostream &outstream, const car &car);
	void printCar();
	//bool operator<(const car &lcar, const car &rcar);
	bool operator<(const car &lcar) const;

};
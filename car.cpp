#include "pch.h"
#include "car.h"
#include <string>

car::car(string make) {
	//this->make = make;
	setMake(make);
}
car::car() {
	//this->make = NULL;
}
void car::setMake(string make) {
	if (&make != NULL)
		this->make = make; 
}
string car::getMake() {
	return this->make; 
}
int car::getCounter() {
	return this->counter;
}

bool car::operator ==(const car &car) {
	return (this->make == car.make);
}
//bool car::operator <(const car &lcar, const car &rcar) {
//	if(lcar.make< rcar.make)
//		return true;
//	else return false;
//}

bool car::operator <(const car &lcar) const { // operator overload for comparing the car to insert inside Map
	return (!(this->make < lcar.make) && !(lcar.make < this->make));
}

ostream& operator<<(ostream &outstream, const car &car) {
	outstream << "Car make is " << car.make << endl;
	return outstream;
}
void car::printCar() {
	cout << "the car make is " << this->make << endl;
}
#pragma once
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

template <class T>
class Airplane {
private: 
	T model;
	int counter;
public:
	
	Airplane(T model);
	Airplane();
	void setModel(T model);
	T getModel();
	int getCounter(); 
	bool operator ==(const Airplane<T> &airplane) const ;
	friend ostream& operator<<(ostream &outstream, const Airplane<T> &airplane) {
		outstream << "Airplane " << airplane.model ;
		return outstream;
	}
	void printAirplane();
};

//#include "Airplane.cpp"


//either do this to inlude .ccp file at the end of the header file or 
//#include "Airplane.cpp"
// explicit instantiations in the .cpp file
//template class Airplane<int>;
//template class Airplane<string>;
// You will only be able to use Airplane with int or string
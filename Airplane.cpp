#include "pch.h"
#include <iostream>
#include "Airplane.h"
#include <string>
using namespace std;

template <class T>
Airplane<T>::Airplane(T model) { // constructor
	if (&model != NULL )
		this->model = model;
		this->counter = 1;
}

template <class T>
Airplane<T>::Airplane() {
	
}

template <class T>
void Airplane<T>::setModel(T model) { // setter
	if (model != NULL) {
		this.model = model;
	}
	this->counter = 1;
}

template <class T>
T Airplane<T>::getModel() { // getter
	return this->model; 
}

template <class T>
int Airplane<T>::getCounter() { // getter 
	return this->counter; 
}

template <class T>
bool Airplane<T>::operator ==(const Airplane<T> &airplane) const { // operator overload
	return (this->model == airplane.model);
}



//template <class T>
// ostream& operator<<(ostream &outstream,const Airplane<T> &airplane) { // operator overload for cout << 
//	 outstream << "Airplane " << airplane.model << endl;
//	return outstream;
//}

template <class T>
void Airplane<T>::printAirplane() { // print 
	cout << "Airplane " << model << endl; 
}

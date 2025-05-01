#pragma once
#include <iostream>
#include <map>
#include "car.h"
#include <utility> 

template <class T>
class setmap {	

public:
	map<T, int>* data;
	setmap();
	void insertSetMap(T obj);
	int getCounter();
	T topThree();
	void printSetMap();
	bool operator<(const T& obj) const;
};


#pragma once
#include <vector>
#include <iostream>
//#include "Airplane.h"
//#include <iterator>
using namespace std;

template <class T>
class set {
private:
	vector <T> setvector;
	vector <int> counters;
public:
	set();
	void insert(T obj);
	int find(T obj); 
	void topThree();
	void printSet(); 
};
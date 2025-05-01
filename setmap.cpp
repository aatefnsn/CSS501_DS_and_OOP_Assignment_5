#include "pch.h"
#include "setmap.h"
#include <iterator>
#include <iostream>  


template <class T>
setmap<T>::setmap() {
	map<T, int > mymap;
	this->data = &mymap; 
}

template <class T>
void setmap<T>::insertSetMap(T obj) {	
	//if (*this->data.empty()) {
		map<T, int > mymap;
		//this->data = &mymap;
		mymap.insert(std::pair < T, int>(obj, 1));
		this->data = &mymap;
	//}
		
	//}
	//mymap.insert(std::pair < T, int>(obj, 1));
	//this->data->insert(std::pair < T, int>(obj, 1));
	//mymap.find(obj);
	
	
	//mymap& = data; 
	//auto x = mymap.insert(std::make_pair(obj, 1));
//	map<T, int>::iterator it = mymap.begin();
//	mymap.insert(std::make_pair<T, int>(obj, 0));
	//*data->insert
	//mymap.insert();
	//if (obj != NULL) {
		//*data->insert(obj);
		//*data->insert(obj);
	//}

	//if (this->mymap->begin != NULL) {
	//	//cout << "beeb beeb" << endl; 
	//	this->mymap.insert(obj);
	//}
	/*if (this->mymap.empty()) {
		this->mymap.insert(obj);
	}*/
	//else {
	//	class vector<T>::iterator vi = this->setvector.begin();
	//	bool flag = false;
	//	while (vi != this->setvector.end()) {
	//		if (*vi == obj) {
	//			flag = true; // ************ increment counter *************
	//			break;
	//		}
	//		vi++;
	//	}
	//	if (flag == false)
	//		this->setvector.push_back(obj); // ************** set counter to 1 ******
	//	//obj.counter = 1; 
	//}
}

template <class T>
void setmap<T>::printSetMap() {
	/*for (auto it = this->data.cbegin(); it != this->data.cend(); ++it)
	{

		std::cout << it->first << " " << it->second<< "\n";
	}*/

	/*for (std::map<T, int>::iterator it = this->data.begin(); it != this->data.end(); ++it) {
		std::cout << it->first << " => " << it->second << '\n';
	}*/

	/*class iterator map<T, int>::it; 
	it = this->*data->begin(); */
	/*for (this )	)	{
		std::cout << it->first << " " << it->second.first << " " << it->second.second << "\n";
	}*/
}

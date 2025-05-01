#include "pch.h"
#include "set.h"
#include <iterator>

template <class T>
set<T>::set(){
	
}

template < class T >
void set<T>::insert(T obj) {	// Big O for insert method is Big O (n) as worst case scenario it goes over the set to check for duplicates  
	if (this->setvector.empty()) { // if set is empty push object and set it counter to 1
		this->setvector.push_back(obj);
		this->counters.push_back(1); 
	}
	else { // if set is not empty 
		class vector<T>::iterator vi = this->setvector.begin();	
	     vector<int>::iterator viCount = this->counters.begin();
		bool flag = false;
		while (vi != this->setvector.end() ) { // go over the entire objects vector to check for duplicates 
			if (*vi == obj) {
				flag = true; // ************ increment counter *************	
			   //viCount--; 
				*viCount = *viCount + 1; // if found do not pushback but only increment the counter vector at the itirator place by 1
				break; 
			}
			vi++; // move both itirators 
			viCount++; // move both itirators 
			//break;
		}
		//viCount++;
		if (flag == false) { // if object not found then push and set counter to 1
			this->setvector.push_back(obj); // ************** set counter to 1 ******
			this->counters.push_back(1);
		}
	}
}

template <class T>
void set<T>::printSet() {
	class vector<T>::iterator vi = this->setvector.begin();	
	while (vi != this->setvector.end()) {		 // go over each value in the vector and print it
		cout << *vi <<" ";
		vi++;
	}
	cout << "\n" << " ";

	 vector<int>::iterator vic = this->counters.begin();
	//class vector<T>::iterator vic = this->counters.begin();
	while (vic != this->counters.end()) {		 // go over each value in the vector and print it
		cout << *vic << " " ;
		vic++;
	}
}

template <class T>
int set<T>::find(T obj) { 
	int index = -1;
	class vector<T>::iterator vi = this->setvector.begin();
	vector<int>::iterator vic = this->counters.begin();
	while (vi != this->setvector.end()) {
		if (*vi == obj) {

			cout << "The counter for the given key " << *vi << " is " << *vic << endl;
			index = *vic;
			return index; 
		}			
		vi++;
		vic++; 
	}
	if (index == -1) {

		cout << "Object cannot be find" << endl;
	
	}
	return index; 
}

template <class T>
void set<T>::topThree() { // Big O for topThree is O(n) since it traverses over the set to check if there are other bigger counters and replaces them to with the smallest value of the current top 3
	class vector<T>::iterator vi = this->setvector.begin();
	vector<int>::iterator vic = this->counters.begin();

	T obj1 = *vi;
	vi++;
	T obj2 = *vi;
	vi++;
	T obj3 = *vi;
	vi++;
	int count1= *vic;
	vic++;
	int count2 = *vic;
	vic++;
	int count3 = *vic;	
	vic++;

	if (this->setvector.size() < 3) { 
		cout << "this set vector has less than 3 elements" << endl;  // or itirate over the vectors and just display the contents of the set but i will not cover it since it is not required in the assignment
	}	
	else {
		while (vi != this->setvector.end()) {
			if (*vic > count1 || *vic > count2 || *vic > count3) { // find if there is a smaller count in the list, if there is one just replace it with the smallest one
				if (count1 < count2 && count1 < count3) { // count1 is the smallest
					count1 = *vic;
					obj1 = *vi;
				}
				else if (count2 < count3 && count2 < count1) { // count2 is the smallest
					count2 = *vic;
				 obj2 = *vi;
				}
				else { // count 3 is the smallest
					count3 = *vic;
					obj3 = *vi;
				}
			}
			vi++;
			vic++;
		}
		cout << "top 3 are " << obj1 << " , " << obj2 << " and " << obj3 << endl;
	}
	
 }
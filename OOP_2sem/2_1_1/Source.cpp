#include <iostream>
#include "Header.h"
using namespace std;

MyClass::MyClass() {
	cout << "Constructor" << endl;
}

MyClass:: ~MyClass() {
	cout << "Destructor" << endl;
}
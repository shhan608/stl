/************************

2017-03-02

Function Object

************************/

#include <iostream>
using namespace std;

void Print(int a, int b) {
	cout << "Global Function: " << a << "," << b << endl;
}

struct Functor {
	void operator() (int a, int b) {
		cout << "Function Object: " << a << "," << b << endl;
	}
};

void main() {
	Functor functor;

	Print(3, 4);		// global function
	functor(10, 20);	// function object
}

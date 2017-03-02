/************************

2017-03-02

Function Object

************************/

#include <iostream>
using namespace std;

void Print(int a, int b) {
	cout << "전역 함수: " << a << "," << b << endl;
}

struct Functor {
	void operator() (int a, int b) {
		cout << "함수 객체: " << a << "," << b << endl;
	}
};

void main() {
	Functor functor;

	Print(3, 4);		// global function
	functor(10, 20);	// function object
}
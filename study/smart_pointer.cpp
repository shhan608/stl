/************************

2017-03-02

Smart Pointer

************************/

#include <iostream>

using namespace std;

class Point {
private:
	int x_;
	int y_;
public:
	explicit Point(int x = 0, int y = 0) :x_(x), y_(y) {}
	void Print() const { cout << x_ << ',' << y_ << endl; }
};

class PointPtr {
private:
	Point *ptr_;
public:
	PointPtr(Point *p) :ptr_(p) {}

	~PointPtr() {
		delete ptr_;
	}

	Point* operator->() const {
		return ptr_;
	}
};

void main() {
	//Point p = 30;

	PointPtr p1 = new Point(2, 3);
	PointPtr p2 = new Point(5, 5);

	p1->Print();	// p1.operator->()->Print() call
	p2.operator->()->Print();
}
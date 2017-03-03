/************************

2017-03-03

Function Object - sort

************************/

#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <algorithm>
using namespace std;

#define LENGTH 5

template<class T = void>
struct greater{
	bool operator() (const T &first, const T &second) {
		return (first > second);
	}
};

void main() {
	vector<int> v;
	int data[LENGTH] = { 50, 10, 20, 40, 30 };

	for (int i = 0; i < LENGTH; i++) {
		v.push_back(data[i]);
	}
	
	sort(v.begin(), v.end(), less<int>());	// less
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

	sort(v.begin(), v.end(), greater<int>());	// greater
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

}
/************************

2017-03-03

STL Container - Vector Iterator

************************/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	vector<int>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << endl;
	}

	v.push_back(50);
	
	iter = v.begin();
	iter += 2;

	cout << *iter << endl;


}
/************************

2017-03-03

STL Algorithm - Find

************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main() {
	vector<int> v;

	for (int i = 10; i < 100; i += 10) {
		v.push_back(i);
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	vector<int>::iterator iter;
	iter = find(v.begin(), v.end(), 20);
	cout << "find -> " << *iter << endl;

	iter = find(v.begin(), v.end(), 100);
	if (iter == v.end()) {
		cout << "not exist" << endl;
	}
}
/************************

2017-03-03

Reverse Iterator

************************/

#include <iostream>
#include <vector>
using namespace std;

#define LENGTH 5

void main() {
	vector<int> v;
	int data[LENGTH] = { 50, 10, 20, 40, 30 };

	for (int i = 0; i < LENGTH; i++) {
		v.push_back(data[i]);
	}

	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << " ";
	}
	cout << endl;

	reverse_iterator<vector<int>::iterator> riter(v.end());
	reverse_iterator<vector<int>::iterator> end_riter(v.begin());

	for (; riter != end_riter; ++riter) {
		cout << *riter << " ";
	}
	cout << endl;


}
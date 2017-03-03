/************************

2017-03-03

STL Container - Vector

************************/

#include <iostream>
#include <vector>
using namespace std;

void main() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	cout << v.size() << endl;

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
}
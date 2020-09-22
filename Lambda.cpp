#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void affiche(int i) { cout << ' ' << i; }


int main() {

	vector<int> vect;
	vect.push_back(10);
	vect.push_back(12);
	vect.push_back(2);
	vect.push_back(19);
	vect.push_back(66);
	
	for_each(vect.begin(), vect.end(), affiche);
	cout << endl;
	for_each(vect.begin(), vect.end(), [&](int i) { cout << ' ' << i; });
	cout << endl;

	return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool IsOdd(int i) {
	return ((i%2)==1);
}


void ajout(int i) { i++; }

/*int main() {
	vector<int> vect;
	vect.push_back(10);
	vect.push_back(12);
	vect.push_back(2);
	vect.push_back(19);
	vect.push_back(66);

	vector<int>::iterator it = find_if(vect.begin(), vect.end(), IsOdd);
	cout << "The first odd value is : " << *it << endl;

	for_each(vect.begin(), vect.end(), affiche);
	for_each(vect.begin(), vect.end(), ajout);
	cout << endl;
	for_each(vect.begin(), vect.end(), affiche);
	cout << endl;
	return 0;
}*/
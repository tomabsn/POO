#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct myclass {           // function object type:
    void operator() (int i) { std::cout << ' ' << i; }
} myobject;

/*int main()
{
    vector<int> vect;
    vect.push_back(1);
    vect.push_back(5);
    vect.push_back(15);
    vect.push_back(63);
    vect.push_back(70);
    vect.push_back(80);

    vector<int>::iterator it;
    it = find(vect.begin(), vect.end(), 80);
    if (it != vect.end())
        cout << "Found element : " << *it << endl;
    else
        cout << "Element not found." << endl;
}*/
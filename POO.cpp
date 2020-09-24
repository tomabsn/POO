#include <random>
#include <iostream>
using namespace std;


int main() {
    random_device rd;
    mt19937 prng{ rd() };
    uniform_int_distribution<int> d6{ 1, 6 };
    for (short i = 0; i < 10; ++i)
        cout << d6(prng) << " ";
    cout << endl;
}
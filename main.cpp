// Noah Conchas
#include "Pair.h"
#include "Pair.cpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
	Pair<int> p1(1, 2);
	Pair<string> p2("apple", "banna");
	Pair<char> p3('a', 'b');

	cout << "Pair 1: " << p1.getFirst() << ", " << p1.getSecond() << endl;

	cout << "Pair 2: " << p2.getFirst() << ", " << p2.getSecond() << endl;

	cout << "Pair 3: " << p3.getFirst() << ", " << p3.getSecond() << endl;


    return 0;
}

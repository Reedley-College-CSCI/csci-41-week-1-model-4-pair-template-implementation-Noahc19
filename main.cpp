// Noah Conchas
#include "Pair.h" // file with class
#include "Pair.cpp" // file with member functions
#include <iostream>
#include <string>
using namespace std;

int main() {
	Pair<int> p1(1, 2);
	Pair<string> p2("apple", "banana");
	Pair<char> p3('a', 'b');
	
	cout << "Pair 1: " << p1.getFirst() << ", " << p1.getSecond() << endl; // Output: Pair 1: 1, 2

	cout << "Pair 2: " << p2.getFirst() << ", " << p2.getSecond() << endl; // Output: Pair 2: apple, banana

	cout << "Pair 3: " << p3.getFirst() << ", " << p3.getSecond() << endl; // Output: Pair 3: a, b


    return 0;
}

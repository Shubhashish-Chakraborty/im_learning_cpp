#include <iostream>
#include <string>
using namespace std;

int main () {
	string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
	
	for (auto car : cars) {
		cout << car << endl;
	}

	return 0;
}

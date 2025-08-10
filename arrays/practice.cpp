#include <iostream>
using namespace std;

int main () {
	string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

	for (int car = 0; car < sizeof(cars)/sizeof(cars[0]); car++) {
		cout << cars[car] << " ";
	}
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

// a simple and basic function, can make it more complex!
int totalFruitCount(string fruits[] , int size) {
	int fruitCount = 0;

	for (int fruit = 0; fruit < size; fruit++) {
		fruitCount += 1;
	}

	return fruitCount;

}

int main() {

	string fruits[3] = {"Apple" , "Banana" , "Grapes"};

	int totalFruits = totalFruitCount(fruits , 3);

	cout << totalFruits << endl;

	return 0;
}
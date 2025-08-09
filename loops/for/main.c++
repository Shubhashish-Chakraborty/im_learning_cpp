// Write a Program to print multiplication table of a number, take number input from the user!

#include <iostream>
using namespace std;

int main() {
	unsigned int number;
	int i = 1;

	cout << "Enter the number: ";
	cin >> number; // number is stored!
	
	while (i <= 10) {
		cout << number << " X " << i << " = " << number*i << endl;
		i++;
	}
	
	return 0;
}

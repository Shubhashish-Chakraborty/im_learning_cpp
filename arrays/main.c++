#include <iostream>
using namespace std;

int main() {
	int marks[3] = {67,57,86};

	int arrLen = sizeof(marks) / sizeof(marks[0]); // calculating the length of arr in C++ here

	//cout << arrLen << endl;
	
	// sizeof(marks) = total bytes
    // sizeof(marks[0]) = bytes of one element
	// Analyse this:
	
	// int sizeof1 = sizeof(marks);
	// int sizeof2 = sizeof(marks[0]);

	// cout << sizeof1 << " " << sizeof2;

	// Printing array/arrray elements
	// by using loop hi print kerte!
	
	for (int i = 0 ; i < arrLen ; i++) {
		cout << marks[i] << endl;
	}

	return 0;
}

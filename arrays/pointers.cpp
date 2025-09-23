#include <bits/stdc++.h>
using namespace std;

// integer type ka pointer bnate hai!
int* returnArr(int numberOfElements) {

	// ek array declare kerna hai and uska reference bhi rkhna hai

	int* theArr = new int[numberOfElements];

	for (int i = 0; i < numberOfElements; i++) {
		theArr[i] = (i + 1) * 10; // first me 10, 2nd 20 and so on..
	}

	return theArr; // ye hoga ek memory ka reference
}

int main() {

	int num = 10;
	int* arrr = returnArr(num);

	for (int i = 0; i < num; i++) {
		cout << arrr[i] << " ";
	}

	cout << endl;

	delete[] arrr;


	return 0;
}
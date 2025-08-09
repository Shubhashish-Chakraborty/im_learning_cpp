#include <iostream>
using namespace std;

int main () {
	unsigned int n;
	
	cout << "Enter number of elements of array: ";
	cin >> n;

	int arr[n]; // Variable length array (GCC supports, but C++ standard prefers std::vector)

	// taking input
	for (int i = 0; i < n; i++) {
		cout << "Enter Array Element " << i+1 << ":";
		cin  >> arr[i];
	}

	cout << "you made this array:" << endl;

	for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++) {
		cout << arr[j] << " ";
	}

	return 0;	
}

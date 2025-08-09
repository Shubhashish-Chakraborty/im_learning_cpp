// COUNT VOWELS

#include <iostream>
#include <string>
using namespace std;

int main () {
	string STRING;
	unsigned int vowelCount = 0;

	cout << "Enter the String: ";
	getline(cin, STRING);

	for (int i = 0; i < STRING.size(); i++) {
		if (STRING[i] == 'a' || STRING[i] == 'e' || STRING[i] == 'i' || STRING[i] == 'o' || STRING[i] == 'u') {
			vowelCount += 1;
		}
	}

	cout << vowelCount << endl;

	return 0;
}


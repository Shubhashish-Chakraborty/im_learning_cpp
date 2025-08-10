#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	vector<string> usernames = {"Mark", "Sam Altman", "Shubh"};
	
	cout << "Before Adding:" << endl;
	for (int i = 0; i < usernames.size(); i++) {
		cout << usernames[i] << " ";
	}

	cout << "\n" << endl;
	usernames.push_back("Elon");
	
	cout << "After Adding:" << endl;
	for (int j = 0; j < usernames.size(); j++) {
		cout << usernames[j] << " ";
	}
			
	return 0;
}

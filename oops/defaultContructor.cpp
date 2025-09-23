#include <bits/stdc++.h>
using namespace std;

class User {
public:
	string username;
	long long int contactNumber;
	vector<string> langs;

	// default constructor:
	User() {
		// setting some values by default, jaise hii object bna!
		username = "ShubhCEO";
		contactNumber = 8602954463;
		langs = {"Python" , "C/C++" , "Typescript"};
	}

	void displayUserDetails() {
		cout << "Username: " << username << endl;
		cout << "ContactNumber: " << contactNumber << endl;
		cout << "Languages Known: ";

		for (string lang : langs) {
			cout << lang << ", ";
		}
		cout << endl;
	}
};

int main() {
	User user;

	user.displayUserDetails();

	return 0;
}
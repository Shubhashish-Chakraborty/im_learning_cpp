#include <bits/stdc++.h>
using namespace std;

class User {
public:
	string username;
	long long int contactNumber;
	vector<string> langs;

	// parameterized constructor:
	User(string username, long long int contactNumber, vector<string> langs) {
		// setting some values by default, jaise hii object bna!
		this->username = username;
		this->contactNumber = contactNumber;
		this->langs = langs;
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

	User user("ShahRukhKhan" , 9340230130, {"Python" , "C/C++" , "Typescript"});
	user.displayUserDetails();
	return 0;
}
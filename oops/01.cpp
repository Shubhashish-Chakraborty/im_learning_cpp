#include <iostream>
#include <vector>
#include <string>
using namespace std;

class User {
	// Data members (Attributes)
	public:
		string username;
		long long int contactNumber;
		vector<string> langs; // list/array of langs the user knows!

		// member function
		void displayUserDetails() {
			cout << "Username: " << username << endl;
			cout << "ContactNumber: " << contactNumber << endl;
			cout << "Languages Known: ";

			// langs ek vector/array hai, toh loop lgana hoga!
			// traversing use ker skte hai!

			for (string lang : langs) {
				cout << lang << ", ";
			}
			cout << endl;
		}


};

int main() {

	User user;

	user.username = "Shubh";
	user.contactNumber = 9228736273;
	user.langs = {"Python" , "Rust" , "cpp" , "GoLang"};

	user.displayUserDetails();



	return 0;
}
#include <bits/stdc++.h>
using namespace std;

class PrepnerdzUser {
public:
	string username;
	string email;
	string password;

	PrepnerdzUser() {
		cout << "An Object Created!" << endl;
	}

	void displayUserDetails() {
		cout << "Username: " << username << endl;
		cout << "Email: " << email << endl;
		cout << "Password: " << password << endl;
	}
};

int main() {
	cout << "Started With OOPS Practice!" << endl;

	PrepnerdzUser pu1;

	pu1.username = "Shubh";
	pu1.email = "shubhashish147@gmail.com";
	pu1.password = "shubhceo";

	pu1.displayUserDetails();

	return 0;
}
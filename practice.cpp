#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Default Constructor called!" << endl;
    }

    ~Student() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    
    Student s1;

    cout << "Inside main function" << endl;
    
    return 0;
}
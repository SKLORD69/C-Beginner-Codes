// Asign and print the 1.roll no. 2.phone no. and address of two students having names SAM and JOHN, respectively by creating two object of the class student
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollno;
    string phoneno;  // Changed from double to string
    string address;

public:
    void getdata() {
        cin.ignore(); // To clear the input buffer before getline
        cout << "Enter the name of the student: ";
        getline(cin, name);  // Allows input with spaces
        cout << "Enter the roll no. of the student: ";
        cin >> rollno;
        cout << "Enter the phone no. of the student: ";
        cin >> phoneno;  // Now input is taken as a string
        cin.ignore(); // To clear the input buffer before getline
        cout << "Enter the Address of the student: ";
        getline(cin, address);  // Allows input with spaces
    }

    void display() {
        cout << "Name of the student is: " << name << endl;
        cout << "Roll no. of the student is: " << rollno << endl;
        cout << "Phone no. of the student is: " << phoneno << endl;
        cout << "Address of the student is: " << address << endl;
    }
};

int main() {
    Student s1, s2;
    s1.getdata();
    s1.display();
    
    cout << "----- Second Student -----" << endl;

    s2.getdata();
    s2.display();

    return 0;
}

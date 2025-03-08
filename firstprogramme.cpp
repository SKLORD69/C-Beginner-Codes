// Create a class name Student with string variable name and an integer variable roll no. and assign the value of roll no. as 2 and the name as John by creating an object of class student.
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int rollno;
public:
    void studentname(){
        cout << "Enter the name of the student: ";
        cin >> name;
    }
    void studentrollno(){
        cout << "Enter the roll no of the student: ";
        cin >> rollno;
    }
    void display(){
        cout << "Name of the student is: " << name << endl;
        cout << "Roll no of the student is: " << rollno << endl;
    }
};
int main()
{
    Student s1;
    s1.studentname();
    s1.studentrollno();
    s1.display();
    return 0;
}
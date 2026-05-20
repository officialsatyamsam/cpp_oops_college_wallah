#include <iostream>
using namespace std;

class Student{  // Class Student is a User Defined Data Type

public:
    int rno;
    string name;
    float gpa;

};

int main()
{
    Student s1;
    // s1.rno = 101;
    cout << "Enter roll no. for student s1 :" ;
    cin >> s1.rno;
    s1.name = "Satyam";
    s1.gpa = 9.2;
    
    cout << s1.rno << endl;
    cout << s1.name << endl;    
    cout << s1.gpa << endl;


    Student s2;
    s2.rno = 102;
    s2.name = "Mithlesh";
    s2.gpa = 9.5;
    
    cout << s2.rno << endl;
    cout << s2.name << endl;    
    cout << s2.gpa << endl;

    




    return 0;
}
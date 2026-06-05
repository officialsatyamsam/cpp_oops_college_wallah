#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        int rollno;
        string name;
        float marks;
};

void rev(Student s){
    s.rollno = 001;
    s.name = "Nhoj";
    s.marks = 5.85;

}

int main()
{
  Student s1;
  s1.rollno = 100;
  s1.name = "John";
  s1.marks = 85.5;   

//   before changing the value of s1
   cout << s1.rollno << " " << s1.name << " " << s1.marks << endl;
    rev(s1);    
//   after changing the value of s1
    cout << s1.rollno << " " << s1.name << " " << s1.marks << endl; 
    
    
    
    return 0;
}
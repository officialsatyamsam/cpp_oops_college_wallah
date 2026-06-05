// Constructor in C++ is like a soecial function wuith no return type and same name as class which is used to initialize the object of class. It is automatically called when an object of class is created. It can be parameterized or non-parameterized. In this example we will see how to use parameterized constructor in class object.
#include <iostream>
#include<string.h>
using namespace std;

class Department{
    public:
        int dept_id;
        string dept_name;
        float dept_budget;
        

    Department(int i, string n,float b){    // Parameterized constructor definition
        dept_id = i;
        dept_name = n;
        dept_budget = b;
    }
};


int main()
{
    Department dept1(1, "Computer Science", 500000.0);  // Parameterized constructor called to initialize dept1
    // dept1.dept_id = 1;
    // dept1.dept_name = "Computer Science";
    // dept1.dept_budget = 500000.0;

    Department dept2(2, "Mathematics", 200000.0);  // Parameterized constructor called to initialize dept2
    // dept2.dept_id = 2;
    // dept2.dept_name = "Mathematics";
    // dept2.dept_budget = 200000.0;

    cout << "Department 1: " << dept1.dept_id << " " << dept1.dept_name << " " << dept1.dept_budget << endl;
    cout << "Department 2: " << dept2.dept_id << " " << dept2.dept_name << " " << dept2.dept_budget << endl;

    return 0;
}
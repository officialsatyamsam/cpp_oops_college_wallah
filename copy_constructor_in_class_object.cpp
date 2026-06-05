#include <iostream>
#include<string>
using namespace std;

class Department{
    public:
        int dept_id;
        string dept_name;
        float dept_budget;

    Department(){
        dept_id = 0;
        dept_name = "Unknown";
        dept_budget = 0.0;
    }

    Department(int i, string n,float b){    // Parameterized constructor definition
        dept_id = i;
        dept_name = n;
        dept_budget = b;
    }
    
    Department(const Department& d){
        dept_id = d.dept_id;
        dept_name = d.dept_name;
        dept_budget = d.dept_budget;

    }
    
    
};

void print(Department & d){
    cout << "Department Id: " << d.dept_id << " " << "Department Name: " << d.dept_name << " " << "Department Budget: " << d.dept_budget << endl;   
}


int main()
{
    Department dept1(1, "Computer Science", 500000.0);  // Parameterized constructor called to initialize dept1

    Department dept2;
    dept2.dept_id = 2;
    dept2.dept_name = "Mathematics";    
    dept2.dept_budget = 200000.0;

    // Both are same and will call the copy constructor to create a new object by copying the values of existing object.
    Department dept3 = dept1; // Copy constructor by assignment
    Department dept4(dept2); // Copy constructor by initialization

    // Department dept5; // Default constructor


    // It is a deep copy as the values of dept1 are copied to dept3 and they are independent of each other. So, changing the values of dept3 will not affect dept1.
    dept3.dept_name = "Physics";

    // It is a deep copy as the values of dept2 are copied to dept4 and they are independent of each other. So, changing the values of dept4 will not affect dept2.
    dept4.dept_name = "Chemistry";

    print(dept1);
    print(dept2);
    print(dept3);
    print(dept4);




    // print(dept5(dept1)); // Copy constructor by passing object as argument to function

    

    return 0;
}
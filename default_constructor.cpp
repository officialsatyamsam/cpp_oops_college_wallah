#include <iostream>
#include <string>
using namespace std;


class Employee{
    public:
        int emp_id;
        string emp_name;
        float emp_salary;


    Employee(int i, string n){    // Parameterized constructor definition
        emp_id = i;
        emp_name = n;
    }

    // Employee(){ 
    //     //  This is default constructor which is always called in every class if there is not any constructor defined by the user. 
    //     cout << "Default constructor called" << endl;
    //     emp_id = 0;
    //     emp_name = "Unknown";
    //     emp_salary = 0.0;
    
    // }
};

void print(Employee e){
    cout << "Emp Id: " << e.emp_id << " " << "Emp Name: " << e.emp_name << " " << "Emp Salary: " << e.emp_salary << endl;
}

int main()
{
    // There should be a default constructor in every class if we are initializing the object of class without any parameters with dot operator. It will give error if there is any parameterized constructor defined in class and we are initializing the object of class with dot operator. To create objects without arguments, define a default constructor.
    // If a parameterized constructor exists, the compiler will not automatically generate a default constructor.

    // Default constructor will always be called an object is created without any arguments and a default constructor exists.

    // Employee emp1;
    // emp1.emp_id = 101;
    // emp1.emp_name = "Alice";   
    // emp1.emp_salary = 50000.0;
    // print(emp1);


    // Here we can give value or update / reassign to the object both by passing the value to the parameterized constructor and by using dot operator if there is both default constructor and parameterized constructor defined in class.   
    Employee emp2(102,"Satyam");   
    emp2.emp_name = "Bob";
    emp2.emp_salary = 60000.0;
    print(emp2); 
    // Here, in print function, emp2 is copying to the parameter of data type Employee then that's why copy contructor are called to create a new object e initialized from emp2 for the parameter e of data type Employee. If there is no user defined copy constructor in class then default copy constructor will be called to copy the values of emp2 to the parameter e of data type Employee in print function.

    
    // Employee emp3; // Default constructor will be called to initialize emp3
    // print(emp3);
    return 0;
}
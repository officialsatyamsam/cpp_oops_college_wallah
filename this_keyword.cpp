#include <iostream>
using namespace std;

class Cricketer{
    public:
        string name;
        int runs;
        float average;

        Cricketer(string name, int runs, float average){
            // The 'this' pointer or keyword is used to refer to the current object. It is used to differentiate between the member variables and the parameters of the constructor when they have the same name.
            this->name = name;
            this->runs = runs;
            this->average = average;
        }

        void display(int runs){
            // Here we use this->runs to refer the actual variable of class i.e. runs and not the parameter of display function. If we use runs without this-> then it will refer to the parameter of display function and not the member variable of class.
            // So, we will always do the practise of using this-> to refer to the member variables of class to avoid any confusion and to make the code more readable. 
            cout << "Serial Number: " << runs << endl;
            cout << name << " " << this->runs << " " << average << endl;
        }

        int matches (){
            return runs / average;
        }
};


int main()
{
    Cricketer c1 ("Virat Kohli", 12000, 50.5); // Parameterized constructor called to initialize c1
    Cricketer c2 ("Rohit Sharma", 9000, 45.2); // Parameterized constructor called to initialize c2

    // Cricketer c2;
    // c2.name = "Rohit Sharma";
    // c2.runs = 9000;
    // c2.average = 45.2;


    // cout << c1.name << " " << c1.runs << " " << c1.average << endl;
    // cout << c2.name << " " << c2.runs << " " << c2.average << endl;

    c1.display(1);
    c2.display(2);

    cout << "Matches played by " << c1.name << ": " << c1.matches() << endl;
    cout << "Matches played by " << c2.name << ": " << c2.matches() << endl;

    return 0;
}
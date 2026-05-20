#include <iostream>
using namespace std;

void change (int &x){
    x = 5;
    cout << x << endl; // Value of x is changed to 5 inside the function
    
}


int main()
{
    int x = 1;
    cout << x << endl; // Normal value of x is 1
    change(x);
    cout << x << endl; 

    // // Since '&' is used in the parameter in the function definition, x is passed by reference, so the change inside the function affects the original variable x in main function
    return 0;
}
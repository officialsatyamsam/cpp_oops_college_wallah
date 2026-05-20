#include <iostream>
using namespace std;

void change (int x){
    x = 5;
    cout << x << endl; // Value of x is changed to 5 inside the function
}

int main()
{
 int x = 1;
 cout << x << endl; // Normal value of x is 1
    change(x);   
    cout << x << endl; // Value of x remains 1 outside the function
    // Here x is passed by value, so the change inside the function does not affect the original variable x in main function
    return 0;
}
#include <iostream>
using namespace std;


class Phone {
    public:
    string name;
    float price;
    int qty; 
};


void printing (Phone &p)
{
    cout << p.name << " " 
         << p.price << " "
         << p.qty << endl;
}

void change_by_value (Phone p){
    p.name = "iPhone";
    p.price = 50000;
    p.qty = 5;
}

void change_by_reference (Phone &p){
    p.name = "iPhone";
    p.price = 50000;
    p.qty = 5;
}


int main()
{

    Phone p1;
    p1.name = "Vivo";
    p1.price = 10000;
    p1.qty = 12;

    Phone p2;
    p2.name = "Realme";
    p2.price = 15000;
    p2.qty = 10;

    Phone p3;
    p3.name = "Samsung";
    p3.price = 20000;
    p3.qty = 6;

    printing(p1);
    
    change_by_value(p1);
    printing(p1);

    change_by_reference(p1);
    printing(p1);

    return 0;
}
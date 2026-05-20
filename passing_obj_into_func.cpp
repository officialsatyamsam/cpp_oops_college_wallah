#include <iostream>
using namespace std;


class lap{
    public:
    string name;
    float price;
    int qty; 


};

void printing(lap l){
    cout << l.name << " " << l.price << " " << l.qty << endl;
}

int main()
{
    lap l1;
    l1.name = "Lenovo";
    l1.price = 40000;
    l1.qty = 12;

    lap l2;
    l2.name = "Dell";
    l2.price = 50000;
    l2.qty = 10;

    lap l3;
    l3.name = "Acer";
    l3.price = 60000;
    l3.qty = 6;

    printing(l1);
    printing(l2);
    printing(l3);



    return 0;
}
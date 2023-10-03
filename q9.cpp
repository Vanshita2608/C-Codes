#include <iostream>
using namespace std;

class product
{
    int code, quantity, price, finalCost;
    char name[30];

    public:
        void setter()
        {
            cout << "Enter Product Code: ";
            cin >> code;
            cout << "Enter Product Name: ";
            cin >> name;
            cout << "Enter Product Price: ";
            cin >> price;
            cout << "Enter Quantity: ";
            cin >> quantity;
        }
        void calc()
        {
            finalCost = quantity * price;
        }
        void getter()
        {
            cout << "Code: " << code << endl;
            cout << "Name: " << name << endl;
            cout << "Cost: "<< price << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Price: " << finalCost << endl;
        }
};  
int main()
{
    int n;
    cout << "Enter Total Number Of Product: ";
    cin >> n;

    product p[n];

    cout << "\n\nProduct Input\n\n";
    for(int i=0; i<n; i++)
    {
        p[i].setter();
        p[i].calc();
        cout << "\n\n";
    }
    cout << "\n\nProduct Output\n\n";
    for(int i=0; i<n; i++)
    {
        p[i].getter();
        cout << "\n\n";
    }

}
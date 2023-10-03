//class and object
#include<iostream>
using namespace std;

class product
{
    private:
            int code;
            char name[50];
            int quantity;
            float price;
    public:
            void set_pr();
            void get_pr();
            float investment();
};

void product :: set_pr()
{
    cout<<"Enter code of product:"<<endl;
    cin>>code;
    cout<<"Enter name of product:"<<endl;
    cin>>name;
    cout<<"Enter quantity of product:"<<endl;
    cin>>quantity;
    cout<<"Enter price of product:"<<endl;
    cin>>price;
}

void product :: get_pr()
{
    cout<<"CODE:"<<code<<endl;
    cout<<"NAME:"<<name<<endl;
    cout<<"QUANTITY:"<<quantity<<endl;
    cout<<"PRICE:"<<price<<endl;
}

float product :: investment()
{
    float value = quantity * price;
    return value;
}

main()
{
    product P1;
    P1.set_pr();
    P1.get_pr();
    float invest = P1.investment();

    cout<<"TOTAL INVESTMENT:"<<invest<<endl;
}

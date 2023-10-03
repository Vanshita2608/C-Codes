//allocating memory

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
            void setter();
            void getter();
            float valuation();
            product()
            {
                cout<<"Constructor invoked"<<endl;
            }
            ~product()
            {
                cout<<"Object destroyed"<<endl;
            }
};
void product :: setter()
{
    cout<<endl<<"Enter code:";
    cin>>code;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter quantity:";
    cin>>quantity;
    cout<<"Enter price:";
    cin>>price;
}

void product :: getter()
{
    cout<<endl<<"CODE:"<<code<<endl;
    cout<<"NAME:"<<name<<endl;
    cout<<"QUANTITY:"<<quantity<<endl;
    cout<<"PRICE:"<<price<<endl;
}

float product :: valuation()
{
    float value = quantity * price;
    return value;
}

int main()
{
    int n , i;
    cout<<"You can enter maximum 10 product's data:"<<endl;
    cout<<"How many product's data would you like to enter?:";
    cin>>n;

    product *p = new product[n];
    product * temp;
    cout<<"Enter "<<n<<" product data:"<<endl;

    for(temp = p ; temp<p+n ; temp++)
    {
        temp -> setter();
    }
    cout<<endl<<"Entered "<<n<<" product data are as follows:"<<endl;

    for(temp = p ; temp<p+n ; temp++)
    {
        temp -> getter();
        float value = temp -> valuation();
        cout<<"Valuation is:"<<value<<endl;
    }
    delete[]p;
}

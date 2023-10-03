//pointer to an object

#include<iostream>
#include<string>
using namespace std;

class product
{
    private:
        int code;
        char name[100];
        float price;
        int stock;
    public:
        void setpr();
        void getpr();
};
void product :: setpr()
{
    cout<<"Enter code , name , price and quantity of  product: "<<endl;
    cin>>code>>name>>price>>stock;
}
void product :: getpr()
{
    cout<<"Code = "<<code<<endl;
    cout<<"Name = "<<name<<endl;
    cout<<"Price = "<<price<<endl;
    cout<<"Quantity = "<<stock<<endl;
}
int main()
{
    product p;
    product *pob = &p;
    (*pob).setpr();
    (*pob).getpr();
    /* pob -> setpr();
       pob -> getpr();*/
}
// the arrow function helps to understand pointer ka pointing value aur sab easily!!!!!!!!!!!!!!!!!!!!










//operator overloading

#include<iostream>
using namespace std;

class UnaryMinus
{
    private:
            int x , y;
    public:
            void setData()
            {
                cout<<"Enter x and y values:"<<endl;
                cin>>x>>y;
            }
            void getData()
            {
                cout<<"x = "<<x<<" and y = "<<y<<endl;
            }
            void operator -();
};
void UnaryMinus :: operator -()
{
    x = -x;
    y = -y;
}

int main()
{
    UnaryMinus ob1 , ob2;
    ob1.setData();
    -ob1;
    ob1.getData();
    ob2.setData();
    -ob2;
    ob2.getData();
}




















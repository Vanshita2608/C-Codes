//operator overloading

#include<iostream>
using namespace std;

class UnaryPlus
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
            void operator ++();
};
void UnaryPlus :: operator ++()
{
    x = ++x;
    y = ++y;
}

int main()
{
    UnaryPlus ob1 , ob2;
    ob1.setData();
    ++ob1;
    ob1.getData();
    ob2.setData();
    ++ob2;
    ob2.getData();
}

















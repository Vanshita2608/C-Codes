//operator overloading 2

#include<iostream>
using namespace std;

class relational
{
    private:
            int x , y;
    public:
            void setData()
            {
                cout<<"Enter the values of x and y:"<<endl;
                cin>>x>>y;
            }
            void getData()
            {
                cout<<"The value of x = "<<x<<" and y ="<<y<<endl;
            }
            int operator ==(relational r2);
};

int relational :: operator ==(relational r2)
{
    if (x == r2.x && y == r2.y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    relational r1 , r2;

    r1.setData();
    r2.setData();
    r1.getData();
    r2.getData();

    if(r1 == r2)
    {
        cout<<"The numbers are same"<<endl;
    }
    else
    {
        cout<<"The numbers are not same"<<endl;
    }
    return 0;
}















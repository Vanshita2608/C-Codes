//virtual function example

#include<iostream>
#include<string.h>
using namespace std;

class base
{
    public:
        void display()
        {
            cout<<"Display base"<<endl;
        }
        virtual void show()
        {
           cout<<"Show base"<<endl;
        }
};
class derived : public base
{
    public:
        void display()
        {
            cout<<"Display derived"<<endl;
        }
        void show()
        {
           cout<<"Show derived"<<endl;
        }
};
int main()
{
    base *bptr;
    derived d;
    bptr = &d;
    bptr -> display();
    bptr -> show();
    return 0;
}

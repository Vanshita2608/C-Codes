//constructor call in inheritance

#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout<<"Welcome to A"<<endl;
        }
};
class B : public A
{
    public:
        B()
        {
            cout<<"Welcome to B"<<endl;
        }
};
class C : public B
{
    public:
        C()
        {
            cout<<"Welcome to C"<<endl;
        }
};
int main()
{
    C c;
}

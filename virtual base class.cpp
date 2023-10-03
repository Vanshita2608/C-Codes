//virtual base class

#include<iostream>
using namespace std;

class A
{
    public:
        void setA()
        {
            cout<<"ABC"<<endl;
        }
};
class B1 : virtual public A
{
    public:
        void setB1()
        {
            cout<<"DEF"<<endl;
        }
};
class B2 : public virtual A
{
    public:
        void setB2()
        {
            cout<<"GHI"<<endl;
        }
};
class C : public B1 , public B2
{
    public:
        void show()
        {
            cout<<"Alphabets!!!"<<endl;
        }
};
int main()
{
    C c;
    c.setA();
    c.setB1();
    c.setB2();
    c.show();
}

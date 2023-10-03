// ambiguity

#include<iostream>
using namespace std;

class A
{
    public:
        void display()
        {
            cout<<"I am class A"<<endl;
        }
};
class B
{
    public:
        void display()
        {
            cout<<"I am class B"<<endl;
        }
};
class C : public A , public B
{
    public:
        void view()
        {
            A :: display();
            B :: display();
        }
};
main()
{
    C C1;
    C1.view();
}

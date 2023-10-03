//single inheritance

#include<iostream>
using namespace std;

class A
{
    int a;
    public:
            int b;
            void set_ab();
            int get_a();
            void show_a();
};
void A :: set_ab()
{
    cout<<"Enter the values of a and b:"<<endl;
    cin>>a>>b;
}
int A :: get_a()
{
    return a;
}
void A :: show_a()
{
    cout<<"A = "<<a<<endl;
}
class B : public A
{
    int c;
    public:
            void mul();
            void display();
};
void B :: mul()
{
    c = b*get_a();
}
void B :: display()
{
    cout<<"A = "<<get_a()<<endl;
    cout<<"B = "<<b<<endl;
    cout<<"C = "<<c<<endl;
}
int main()
{
    B b;
    b.set_ab();
    b.mul();
    b.show_a();
    b.display();

    b.b = 20;
    b.mul();
    b.display();
}


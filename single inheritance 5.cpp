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
class B : private A
{
    int c;
    public:
            void mul();
            void display();
            void set_B();
            void setB_data();
};
void B :: setB_data()
{
    set_ab();
}
void B :: set_B()
{
    b = 20;
}
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
    b.setB_data();
    b.mul();
    b.display();

    b.set_B();
    b.mul();
    b.display();
}


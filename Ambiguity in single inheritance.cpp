// ambiguity in single inheritance

#include<iostream>
using namespace std;

class A
{
    public:
        void display()
        {
            cout<<"A"<<endl;
        }
};
class B : public A
{
    public:
        void display()
        {
            cout<<"B"<<endl;
        }
};
int main()
{
    B B1;
    B1.display();
    B1.A :: display();
    B1.B :: display();
}

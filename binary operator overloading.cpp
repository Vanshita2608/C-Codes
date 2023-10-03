//binary operator overloading

#include<iostream>
using namespace std;

class complex
{
    private:
            int real , img;
    public:
            void setComp()
            {
                cout<<"Enter the real and imaginary part:";
                cin>>real>>img;
            }
            void getComp()
            {
                cout<<endl<<real<<"+"<<img<<"i";
            }
            complex operator +(complex c);
};

complex complex :: operator +(complex c)
{
    complex temp;
    temp.real = real+c.real;
    temp.img = img+c.img;
    return temp;
}
int main()
{
    complex c1 , c2 , c3;
    c1.setComp();
    c2.setComp();
    c3 = c1 + c2;
    cout<<"Addition:";
    c3.getComp();
    return 0;
}











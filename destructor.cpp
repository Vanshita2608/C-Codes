//destructor

#include<iostream>
using namespace std;

class complex
{
    private:
            int real , img;
    public:
            complex();                          //user defined constructor
            complex(int r , int im);            //parameterized constructor
            void getcomplex();
            complex sumcomplex(complex c);
            ~complex();

};
complex :: complex()
{
    real = 0;
    img = 0;
}
complex :: complex(int r , int im)
{
    real = r;
    img = im;
}
void complex :: getcomplex()
{
    cout<<real<<"+"<<img<<"i"<<endl;
}
complex complex :: sumcomplex(complex c)
{
    complex temp;
    temp.real = real + c.real;
    temp.img = img + c.img;
    return temp;
}
complex :: ~complex()
{
    cout<<"Destructor called"<<endl;
}
int main()
{
    complex c1(2,3) , c2(4,5) , c3;
    c1.getcomplex();
    c1.getcomplex();
    c3 = c1.sumcomplex(c2);
    cout<<"Addition"<<endl;
    c3.getcomplex();
    return 0;
}



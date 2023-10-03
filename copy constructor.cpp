//copy constructor

#include<iostream>
using namespace std;

class complex
{
    private:
            int real , img;
    public:
            complex();                          //user defined constructor
            complex(int r , int im);            //parameterized constructor
            complex(complex & c);               //copy constructor
            void getcomplex();
            complex sumcomplex(complex c);
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
complex :: complex(complex & c)
{
    cout<<"Welcome";
    real = c.real;
    img = c.img;
}
void complex :: getcomplex()
{
    cout<<endl<<real<<"+"<<img<<"i";
}
int main()
{
    complex c1(2,3) , c3;
    complex c2(c1);                   //or= complex c2 = c1;
    c1.getcomplex();
    c2.getcomplex();
    c3 = c1;
    c3.getcomplex();
    return 0;
}

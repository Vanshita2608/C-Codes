//add 2 complex numbers

#include<iostream>
using namespace std;

class complex
{
    private:
            int real;
            int img;
    public:
        void set_comp();
        void get_comp();
        complex add_comp(complex c2);
};

void complex :: set_comp()
{
    cout<<endl<<"Enter the real part:";
    cin>>real;
    cout<<"Enter the imaginary part:";
    cin>>img;
}

void complex :: get_comp()
{
    cout<<"The complex number is:"<<real<<"+"<<img<<"i"<<endl;
}

complex complex :: add_comp(complex c2)
{
    complex ans;
    ans.real = real + c2.real;
    ans.img = img + c2.img;
    return ans;
}

main()
{
    complex c1 , c2;
    c1.set_comp();
    c1.get_comp();
    c2.set_comp();
    c2.get_comp();
    complex c3 = c1.add_comp(c2);
    c3.get_comp();
}

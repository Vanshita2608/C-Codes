//Program to multiply 3 numbers using class and object
#include<iostream>
using namespace std;

class multiply
{
    private:
        int a,b,c;
    public:
        inline int mult()
        {
            cout<<"Enter Values for a,b,c : ";
            cin>>a>>b>>c;

            int m = a*b*c;
            return m;
        }
};

main()
{
    multiply M;
    int mu = M.mult();
    cout<<"Multiplication : "<<mu<<endl;
}

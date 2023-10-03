#include<iostream>
using namespace std;

class demo
{
    private:
        int n1 , n2;
    public:
        demo(int num1 , int num2)
        {
            cout<<"Constructor";
            n1 = num1;
            n2 = num2;
        }
        void display()
        {
            cout<<"Num1 = "<<n1;
            cout<<"Num2 = "<<n2;
        }
        ~demo()
        {
            cout<<"Destructor";
        }
};
main()
{
    demo d(10 , 20);
    d.display();
    return 0;
}

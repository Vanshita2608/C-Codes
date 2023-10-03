//single inheritance.

#include<iostream>
using namespace std;

class Account
{
    public:
            float salary = 60000;
};
class Programmer : public Account
{
    public:
            float bonus = 5000;
};
main()
{
    Programmer P1;
    cout<<"Salary = "<<P1.salary<<endl;
    cout<<"Bonus = "<<P1.bonus;
}












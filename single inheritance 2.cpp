//single inheritance.

#include<iostream>
using namespace std;

class Animal
{
    public:
            void eat()
            {
                cout<<"Eating!!!"<<endl;
            }
};
class Dog : public Animal
{
    public:
            void bark()
            {
                cout<<"Barking!!!"<<endl;
            }
};
main()
{
    Dog D1;
    D1.eat();
    D1.bark();
}



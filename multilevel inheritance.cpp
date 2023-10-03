//multilevel inheritance.

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
class BabyDog : public Dog
{
    public:
            void weep()
            {
                cout<<"Weeping!!!"<<endl;
            }

};
main()
{
    BabyDog B1;
    B1.eat();
    B1.bark();
    B1.weep();
}


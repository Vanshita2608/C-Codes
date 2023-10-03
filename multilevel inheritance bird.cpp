//multilevel inheritance class bird

#include<iostream>
using namespace std;

class Bird
{
    public:
            void fly()
            {
                cout<<"Flying!"<<endl;
            }
};
class Parrot : public Bird
{
    public:
            void chirp()
            {
                cout<<"Chirping!"<<endl;
            }
};
class Peacock : public Parrot
{
    public:
            void beauty()
            {
                cout<<"Beautiful!"<<endl;
            }
};
main()
{
    Peacock P1;
    P1.fly();
    P1.chirp();
    P1.beauty();
}

//base class pointer to derived class object

#include<iostream>
#include<string>
using namespace std;

/*using bptr we can only access the public members of D which are inherited by  B.
 It cannot access personal properties of D*/

class BC
{
    public:
        int b;
        void show()
        {
            cout<<"b = "<<b<<endl;
        }
};
class DC : public BC
{
    public:
        int d;
        void show()
        {
            cout<<"b = "<<b<<endl;
            cout<<"d = "<<d<<endl;
        }

};
int main()
{
    BC *bptr;
    BC base;
    bptr = &base;
    cout<<"bptr points to object base"<<endl;
    bptr -> b = 100;
    bptr -> show();

    DC derived;
    bptr = &derived;
    cout<<"bptr points to object derived"<<endl;
    cout<<"It can only access the public members inherited by BC .ie. only b"<<endl;
    bptr -> b = 200;
    cout<<"b = "<<bptr -> b<<endl;

    DC *dptr;
    dptr = &derived;
    cout<<"dptr points to object derived"<<endl;
    cout<<"As dptr is of type DC .ie. it can access all members of DC"<<endl;
    dptr -> d = 300;
    dptr -> show();

    return 0;
}

// friend function

#include<iostream>
using namespace std;

class Distance
{
    private:
        int meter;
    public:
        distance(){meter = 0;}
        friend int addfive(Distance);
};
int addfive(Distance d)
{
    d.meter += 5;
    return d.meter;
}
int main()
{
    Distance d;
    cout<<"Distance = "<<addfive(d);
    return 0;
}

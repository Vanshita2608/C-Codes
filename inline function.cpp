//inline function

#include<iostream>
using namespace std;

class item
{
    private:
        int number;
        float cost;
    public:
        void get_data(int a , int b);
        void put_data()
        {
            cout<<"NUMBER:"<<number<<endl;
            cout<<"COST:"<<cost<<endl;
        }
};

void item :: get_data(int a , int b)
{
    number = a;
    cost = b;
}
main()
{
    item x;
    x.get_data(100,200);
    x.put_data();
}

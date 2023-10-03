#include<iostream>
using namespace std;

class india
{
    public:
        void print()
        {
            cout<<"Country Capital:"<<capital;
        }
        string capital;
};
main()
{
    india i;
    i.capital = "Delhi";
    i.print();
    return 0;
}

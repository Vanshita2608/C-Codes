//multiple inheritance

#include<iostream>
using namespace std;

class M
{
    protected:
        int m;
    public:
        void set_m()
        {
            cout<<"Enter value of m:";
            cin>>m;
        }
};
class N
{
    protected:
        int n;
    public:
        void set_n()
        {
            cout<<"Enter value of n:";
            cin>>n;
        }
};
class P : public M , public N
{
    public:
        void display()
        {
            cout<<"M = "<<m<<" and N= "<<n<<endl;
        }
};
int main()
{
    P p;
    p.set_m();
    p.set_n();
    p.display();
}

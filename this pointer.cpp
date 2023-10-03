//this pointer

#include<iostream>
using namespace std;

class test
{
    private:
        int a;
    public:
        void sets(int x)
        {
            cout<<"Add. of this = "<<this<<endl;
            this -> a = x;
        }
        void gets()
        {
            cout<<a;
        }
};
int main()
{
    test t;
    cout<<"Add. of t = "<<&t<<endl;
    t.sets(3);
    t.gets();
}

//passing and returning objects multiply 3 nos

#include<iostream>
using namespace std;

class multiply
{
    private:
            int num;
    public:
            void set_data();
            void get_data();
            multiply mult(multiply m2 , multiply m3);
};
void multiply :: set_data()
{
    cout<<"Enter number:";
    cin>>num;
}
void multiply :: get_data()
{
    cout<<"ANSWER:"<<num<<endl;
}
multiply multiply :: mult(multiply m2 , multiply m3)
{
    multiply ans;
    ans.num = num * m2.num * m3.num;
    return ans;
}
main()
{
    multiply m1 , m2 , m3 , m4;
    m1.set_data();
    m2.set_data();
    m3.set_data();
    m4 = m1.mult(m2,m3);
    m4.get_data();
}

//hierarchical inheritance

#include<iostream>
using namespace std;

class sports
{
    public:
            int runs;
            int goals;
    int calc_cr()
    {
        int points = runs*10;
        return points;
    }
    int calc_fb(int a)
    {
        int finals = goals*2;
        return finals;
    }

};
class cricket : public sports
{
    public:
        getdata()
        {
            cout<<"Enter runs scored:"<<endl;
            cin>>runs;
        }
};
class football : private sports
{
    public:
        void calc()
        {
            int a;
            cout<<"Enter goals scored:"<<endl;
            cin>>a;
            int out = calc_fb(a);
            cout<<"Points:"<<out<<endl;
        }
};
main()
{
    cricket c;
    football f;

    c.getdata();
    int a = c.calc_cr();
    cout<<"Points:"<<a<<endl;

    f.calc();
    return 0;
}

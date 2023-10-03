//multiple inheritance flower

#include<iostream>
using namespace std;

class Flower
{
    public:
            void smell()
            {
                cout<<"Sweet smell!"<<endl;
            }
};
class Sun
{
    public:
            void bright()
            {
                cout<<"Bright as sun!"<<endl;
            }
};
class Growth : public Flower , public Sun
{
    public:
            void show()
            {
                cout<<"Flower is so beautiful"<<endl;
            }
};
main()
{
    Growth G1;
    G1.smell();
    G1.bright();
    G1.show();
}

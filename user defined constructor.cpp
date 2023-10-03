//user defined constructor

#include<iostream>
using namespace std;

class Box
{
    float width , height , depth;
    public:
            Box();
            void getBox();
};

Box :: Box()
{
    width =   2;
    depth = 6;
    height = 8;
}

void Box ::  getBox()
{
    cout<<"Width = "<<width<<endl;
    cout<<"Depth = "<<depth<<endl;
    cout<<"Height = "<<height<<endl;
}

int main()
{
    Box b1;
    b1.getBox();
}

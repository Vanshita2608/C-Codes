//parameterized constructor original

#include<iostream>
using namespace std;

class Box
{
    float width , height , depth;
    public:
            Box(float w , float d , float h);
            void getBox();
};

Box :: Box(float w , float d , float h)
{
    cout<<"Welcome to the parameterized constructor:"<<endl;
    width = w;
    depth = d;
    height = h;
}

void Box ::  getBox()
{
    cout<<"Width = "<<width<<endl;
    cout<<"Depth = "<<depth<<endl;
    cout<<"Height = "<<height<<endl;
}

int main()
{    Box b1(1.1 , 2.2 , 3.3);
    b1.getBox();
}

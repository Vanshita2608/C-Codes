//parameterized constructor by changing values

#include<iostream>
using namespace std;

class Box
{
    int width;
    char height;
    float depth;
    public:
            Box(int w , float d , char h);
            void getBox();
};

Box :: Box(int w , float d , char h)
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
{
     Box b1(1 , 2.2 , 'V');
     b1.getBox();
}

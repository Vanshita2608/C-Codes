//constructor destructor

#include<iostream>
using namespace std;

class Box
{
    float width,depth,height;
    public:
        Box();
        Box(float w,float d,float h);
        Box(float vol);
        Box(Box&ob);
        ~Box();
        void getBox();
};
Box :: Box(Box&ob)
{
    cout<<"Hello!!Copy Constructor"<<endl;
    width = ob.width;
    depth= ob.depth;
    height = ob.height;
}
Box :: ~Box()
{
    cout<<"Object Destroyed"<<endl;
}
Box :: Box()
{
    width=0;
    depth=0;
    height=0;
}
Box :: Box(float w,float d,float h)
{
    width=w;
    depth=d;
    height=h;
}
Box :: Box(float val)
{
    width=val;
    depth=val;
    height=val;
}
void Box :: getBox()
{
    cout<<"width="<<width<<endl;
    cout<<"depth="<<depth<<endl;
    cout<<"height="<<height<<endl;
}
int main()
{
    Box b1(1.2,2.2,3.2);
    Box b2;
    b1.getBox();
    b2.getBox();
    Box b3(5.3);
    b3.getBox();
    Box b4;
    b4=b3;
    b4.getBox();
    Box b6;
}


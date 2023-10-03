//area of different shape

#include<iostream>
using namespace std;

float area(int r)
{
    float a_cir = r*r*3.14;
    return a_cir;
}
int area(int L , int B)
{
    int a_rect = L*B;
    return a_rect;
}
float area(int ba , float h)
{
    float a_tri = 0.5*ba*h;
    return a_tri;
}

int main()
{
    int num , r , L , B , ba;
    float h;

    cout<<"****MENU****"<<endl;
    cout<<"1. Area of Circle"<<endl;
    cout<<"2. Area of Rectangle"<<endl;
    cout<<"3. Area of Triangle"<<endl;
    cout<<"Choose the number given aside the area of shapes of your choice:"<<endl;
    cin>>num;
    switch(num)
    {
        case 1:{cout<<"Enter the radius of the circle:"<<endl;
                cin>>r;
                float a_cir = area(r);
                cout<<"The area of the circle is:"<<a_cir <<endl;
                break;}

        case 2:{cout<<"Enter the length of the rectangle:"<<endl;
                cin>>L;
                cout<<"Enter the breadth of the rectangle:"<<endl;
                cin>>B;
                int a_rect = area(L,B);
                cout<<"The area of the rectangle is:"<<a_rect <<endl;
                break;}

        case 3:{cout<<"Enter the base of the triangle:"<<endl;
                cin>>ba;
                cout<<"Enter the height of the triangle:"<<endl;
                cin>>h;
                float a_tri = area(ba,h);
                cout<<"The area of the triangle is:"<<a_tri <<endl;
                break;}

        default:{cout<<"SORRY!!!You have entered and invalid input!!!"<<endl;
                 break;}

    }

    cout<<endl;
    cout<<"cout is also called extraction/get from"<<endl;
    cout<<"cin is also known as insertion/put to"<<endl;

}






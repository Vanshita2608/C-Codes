//hierarchical inheritance

#include<iostream>
using namespace std;

class shape
{
    public:
            int a;
            int b;
    void get_data(int n , int m)
    {
        a = n;
        b = m;
    }
};
class rectangle : public shape
{
    public:
        int rect_area()
        {
            int result = a*b;
            return result;
        }
};
class triangle : public shape
{
    public:
        int triangle_area()
        {
            float result = 0.5 * a * b;
            return result;
        }
};
main()
{
    rectangle r;
    triangle t;
    int length , breadth , base , height;

    cout<<"Enter length and breadth of the rectangle:"<<endl;
    cin>>length>>breadth;
    r.get_data(length , breadth);
    int m = r.rect_area();
    cout<<"Area of rectangle:"<<m<<endl;

    cout<<"Enter base and height of the triangle:"<<endl;
    cin>>base>>height;
    t.get_data(base , height);
    int n = t.triangle_area();
    cout<<"Area of triangle:"<<n<<endl;
}


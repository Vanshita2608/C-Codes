//inheritance

#include<iostream>
using namespace std;

class student
{
    protected:
            int id;
            char name[50];
    public:
            void setter()
            {
                cout<<"Enter ID and name:";
                cin>>id>>name;
            }
            void getter()
            {
                cout<<"ID is "<<id<<" and name is "<<name<<endl;
            }
};

class test : public student
{
    protected:
            int sub1 , sub2;
    public:
            void setMarks()
            {
                cout<<"Enter marks of 2 subjects:";
                cin>>sub1>>sub2;
            }
            void getMarks()
            {
                cout<<"Marks of first subject is "<<sub1<<" and second subject is "<<sub2<<endl;
            }
};

class result :  public test
{
    private:
            int total;
            float avg;
    public:
            void d_result()
            {
                total = sub1 + sub2;
                avg = total/2.0;
                cout<<"TOTAL:"<<total<<endl;
                cout<<"AVERAGE:"<<avg<<endl;
            }
};

int main()
{
    result r;
    r.setter();
    r.getter();
    r.setMarks();
    r.getMarks();
    r.d_result();
}

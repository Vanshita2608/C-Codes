//class and object
#include<iostream>
using namespace std;

class student
{
    private:
            char name[50];
            int roll_no;
            int marks;
            float percentage;
    public:
            void set_st();
            void get_st();
};

void student :: set_st()
{
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter roll no:"<<endl;
    cin>>roll_no;
    cout<<"Enter marks:"<<endl;
    cin>>marks;
    cout<<"Enter percentage:"<<endl;
    cin>>percentage;
}

void student :: get_st()
{
    cout<<"NAME:"<<name<<endl;
    cout<<"ROLL NO:"<<roll_no<<endl;
    cout<<"MARKS:"<<marks<<endl;
    cout<<"PERCENTAGE:"<<percentage<<endl;
}

main()
{
    student s1;
    cout<<"**Enter Data**"<<endl;
    s1.set_st();
    cout<<"**Student Data**"<<endl;
    s1.get_st();
}

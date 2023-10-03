//WAP to create a class "student" with roll no, name, marks of 2 subjects, department as data members and getinfo(), printinfo(), calculate() as member functions

#include<iostream>
using namespace std;

class student
{
    private:
            int roll_no;
            char name[50];
            char department[50];
            int sub_1;
            int sub_2;
    public:
            void get_info();
            void print_info();
            int calculate();
};

void student :: get_info()
{
    cout<<"ENTER ROLL.NO:";
    cin>>roll_no;
    cout<<"ENTER NAME:";
    cin>>name;
    cout<<"ENTER DEPARTMENT:";
    cin>>department;
    cout<<"ENTER MARKS OF SUBJECT 1:";
    cin>>sub_1;
    cout<<"ENTER MARKS OF SUBJECT 2:";
    cin>>sub_2;

}
void student::print_info()
{
    cout<<endl<<"ROLL.NO:"<<roll_no<<endl;
    cout<<"NAME:"<<name<<endl;
    cout<<"DEPARTMENT:"<<department<<endl;
    cout<<"MARKS OF SUBJECT 1:"<<sub_1<<endl;
    cout<<"MARKS OF SUBJECT 2:"<<sub_2<<endl;
}
int student::calculate()
{
    int total_sum = sub_1 + sub_2;
    return total_sum;
}
int main()
{
    student s1;
    s1.get_info();
    s1.print_info();
    int total = s1.calculate();

    cout<<"THE TOTAL MARKS ARE:"<<total<<endl;
}

/* WAP to create DOCTOR class with doc.name , doc.age , department are data members get_data()
and put_data()are member functions. Scan an print information of 3 doctors*/

#include<iostream>
using namespace std;

class doctor
{
    private:
            char name[50];
            int age;
            char department[50];
    public:
            void get_data();
            void put_data();
};

void doctor :: get_data()
{
    cout<<endl<<"Enter name:";
    cin>>name;
    cout<<"Enter age:";
    cin>>age;
    cout<<"Enter department:";
    cin>>department;
}

void doctor :: put_data()
{
    cout<<endl<<"NAME:"<<name<<endl;
    cout<<"AGE:"<<age<<endl;
    cout<<"DEPARTMENT:"<<department<<endl;
}

main()
{
    int n;
    cout<<"Enter number of doctors:";
    cin>>n;
    doctor D[n];
    int i;
    for(i=0 ; i<n ; i++)
    {
        D[i].get_data();
    }
    for(i=0 ; i<n ; i++)
    {
        D[i].put_data();
    }
}

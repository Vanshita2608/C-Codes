//array within class
#include<iostream>
using namespace std;

class employee
{
    private:
            int ID;
            char name[50];
    public:
            void get_data();
            void put_data();
};

void employee :: get_data()
{
    cout<<"Enter ID:";
    cin>>ID;
    cout<<"Enter name:";
    cin>>name;
}

void employee :: put_data()
{
    cout<<ID<<" ";
    cout<<name<<" ";
    cout<<endl;
}

int main()
{
    employee E[50];
    int n,i;
    cout<<"Enter number of employees:";
    cin>>n;
    for(i=0 ; i<n ; i++)
    {
        E[i].get_data();
    }

    cout<<"Employee data:"<<endl;

    for(i=0 ; i<n ; i++)
    {
        E[i].put_data();
    }
}


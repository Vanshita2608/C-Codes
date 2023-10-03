//inheritance

#include<iostream>
using namespace std;

class person
{
    private:
            char name[50];
            int age;
    public:
            void setP()
            {
                cout<<"Enter name and age:";
                cin>>name>>age;
            }
            void getP()
            {
                cout<<"Name is "<<name<<" and age is "<<age<<endl;
            }
};

class employee : public person
{
    int id , bsal;
    float tsal;

    public:
            void setE()
            {
                cout<<"Enter ID and basic salary:";
                cin>>id>>bsal;
            }
            void getE()
            {
                cout<<"ID is "<<id<<" and basic salary is " <<bsal<<endl;
            }
            void calSal()
            {
                tsal = (0.78 * bsal) + (0.55 * bsal) + bsal;
                cout<<"Total salary :"<<tsal;
            }
};

int main()
{
    employee e1;
    e1.setP();
    e1.setE();
    e1.getP();
    e1.getE();
    e1.calSal();
}

















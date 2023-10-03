/*WAP to scan and print 3 cricketers information using class and object (use array of objects).
Calculate reward points of cricketers based on their scores.*/

#include<iostream>
using namespace std;

class cricketer
{
    private:
            char name[50];
            char team[100];
            int runs;
            int wickets;
    public:
            void set_data();
            void get_data();
            int calculate();
};

void cricketer :: set_data()
{
    cout<<endl<<"Enter name:";
    cin>>name;
    cout<<"Enter team name:";
    cin>>team;
    cout<<"Enter runs scored:";
    cin>>runs;
    cout<<"Enter wickets scored:";
    cin>>wickets;
}

void cricketer :: get_data()
{
     cout<<endl<<"NAME:"<<name<<endl;
     cout<<"TEAM NAME:"<<team<<endl;
     cout<<"RUNS:"<<runs<<endl;
     cout<<"WICKETS:"<<wickets<<endl;
}
int cricketer ::  calculate()
{
    int reward;
    reward = (runs + wickets);
    return reward;
}
int main()
{
    int reward;
    cricketer c1[3];
    int i;
        for(i=0 ; i<3 ; i++)
        {
            c1[i].set_data();
        }
            for(i=0 ; i<3 ; i++)
            {
                c1[i].get_data();
            }

    for(i=0 ; i<3 ; i++)
    {

        if(reward >= 100)
        {
            cout<<"MAN OF THE MATCH!!!!!!!";
        }
        else if((reward >= 90) && (reward <= 99))
        {
            cout<<"RISING STAR!!!!";
        }
        else if((reward >= 80) && (reward <= 89))
        {
            cout<<"PLAYER!!!!!";
        }
        else if((reward >= 70) && (reward <= 79))
        {
            cout<<"@#$%&^*!!";
        }
        else
        {
            cout<<"AVERAGE!!!!!!";
        }
    }
}

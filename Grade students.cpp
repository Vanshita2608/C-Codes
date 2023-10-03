#include<iostream>
using namespace std;

int main()

{
    int a ;

    cout<<"ENTER THE PERCENTAGE OF THE STUDENT:"<<endl;
    cin>>a;


    if(a >=80)
    {
        cout<<"Congratulations !! You have passed with distinction !"<<endl;
    }
    else if((a>=60) && (a<=79))
    {
        cout<<"Congratulations !! You have passed with first class !"<<endl;
    }
    else if((a>=50) && (a<=59))
    {
        cout<<"Congratulations !! You have passed with second class !"<<endl;
    }
    else if((a>=40) && (a<=49))
    {
        cout<<"Congratulations !! You have passed with third class !"<<endl;
    }
    else
    {
        cout<<"Sorry , You have Failed."<<endl;
    }

}

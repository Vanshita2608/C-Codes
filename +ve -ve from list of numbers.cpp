//+ve -ve zero from a list of numbers

#include<iostream>
using namespace std;

main()
{
    int n[10];
    cout << "ENTER 10 NUMBERS : "<< endl;
        for(int i = 0; i<10 ; i++)
        {
          cin>>n[i];
        }
        for(int i = 0; i<10 ; i++)
        {
            if(n[i]>0)
            cout<<"Positive number = "<<n[i]<<endl;
            else if(n[i]<0)
            cout<<"Negative number = "<<n[i]<<endl;
            else
            cout<<"The number is zero"<<endl;
        }
}

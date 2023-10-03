//WAP to find even numbers from 2x2 matrix

#include<iostream>
using namespace std;

main()
{
    int a[2][2];
    int i,j,c;

    cout<<"Enter array elements for matrix:"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if (a[i][j]%2==0)
            {
                cout<<"Number "<<a[i][j]<<" is even"<<endl;
            }
            else
            {
                cout<<"Number "<<a[i][j]<<" is odd"<<endl;
            }
        }
    }

}

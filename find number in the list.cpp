// find number in the list
#include<iostream>
using namespace std;
int main()
{


 int i,n,m,flag=0;
 int a[10];


 cout<<"How many elements you want to enter:"<<endl;
 cin>>n;

 cout<<"Enter element in the array:"<<endl;
 for (i=0; i<n; i++)
 {

 cin>>a[i];

 cout<<"Enter the element you want to search:"<<endl;
 cin>>m;
 }
 for (i=0; i<n; i++)
  {
   if(a[i]==m)
   {
    flag==1;
    break;
   }
  }
 if(flag==0)
  cout<<"Not present";
 else
  cout<<"Present";

}

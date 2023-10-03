#include<iostream>
#include<string>
using namespace std;
class Demo
{
  int num;
  static int count;
public:
void set_num();
void get_num();
static void staticf();
};

int Demo::count;
void Demo::set_num()
{
cout<<"Enter the num"<<endl;
cin>>num;
count++;
}
void Demo::get_num()
{
cout<<"Num= "<<num<<endl<<"Count= "<<count;
}
void Demo::staticf()
{
cout<<"Count= "<<count<<endl;
}
int main()
{
Demo ob1,ob2;
ob1.set_num();
ob2.set_num();
Demo::staticf();
return 0;
}

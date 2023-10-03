//file handling

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("demo.txt",ios::out);
    outfile<<"Writing to a file in C++....."<<endl;
    outfile<<"ABCDEFGHIJKLMNOPQRSTUVWXYZ"<<endl;
    outfile<<"1234567890"<<endl;
    outfile<<"!@#$%^&*"<<endl;
    outfile<<"Be Happy....If possible!"<<endl;
    outfile.close();
}

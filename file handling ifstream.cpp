//file handling 2

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("demo.txt",ios::in);
    char file_data[15];
    infile.getline(file_data , sizeof(file_data));
    cout<<"data read from the file = "<<file_data<<endl;
    infile.close();
}

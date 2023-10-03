//file handling 3

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    ofstream outfile;
    ifstream infile;
    char str[10] , ch;
    int i;
    cout<<"enter the string:"<<endl;
    gets(str);
    outfile.open("Demo1.txt" , ios::out);
    for(i=0 ; i<strlen(str) ; i++)
    {
        outfile.put(str[i]);
    }
    outfile.close();

    infile.open("Demo1.txt" , ios::in);
    cout<<"data read from the file:"<<endl;
    while(infile)
    {
        ch = infile.get();
        cout<<ch;
    }
    infile.close();
    cout<<endl;
}

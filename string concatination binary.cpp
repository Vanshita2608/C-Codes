//binary operator overloading string concatination

#include<iostream>
#include<string.h>
using namespace std;

class strAdd
{
    private:
            char str[100];
    public:
            strAdd()
            {
                str[0] = '0';
            }
            void setString()
            {
                cout<<"Enter the string:";
                cin>>str;
            }
            void getString()
            {
                cout<<str<<endl;
            }
            strAdd operator +(strAdd str2);
};

strAdd strAdd :: operator +(strAdd str2)
{
    strAdd resultS;
    strcpy (resultS.str , str);
    strcat (resultS.str , str2.str);
    return resultS;
}
int main()
{
    strAdd s1 , s2 , s3;
    s1.setString();
    s2.setString();
    s3 = s1 + s2;
    cout<<"Addition:";
    s3.getString();
    return 0;
}











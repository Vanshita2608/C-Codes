//enum keyword

#include<iostream>
using namespace std;

enum subjects {WSD , CPP , DEX , CWP , AMT , APH , DLS};
int main()
{
    subjects sub;
    int usersub;
    cout<<"Enter the valid subject code ie.  0-WSD,1-CPP,2-DEX,3-CWP,4-AMT,5-APH,6-DLS"<<endl;
    cin>>usersub;
    switch(usersub)
    {
        case WSD:
                cout<<"WSD!";
                break;
        case CPP:
                cout<<"CPP!";
                break;
        case DEX:
                cout<<"DEX!";
                break;
        case AMT:
                cout<<"AMT!";
                break;
        case APH:
                cout<<"APH!";
                break;
        case DLS:
                cout<<"DLS!";
                break;
        default:
                cout<<"WRONG SUBJECT ENTERED";
    }
}

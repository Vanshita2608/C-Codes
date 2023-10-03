#include <iostream>
using namespace std;

class student
{
    int idNum, marks[5], sum;
    float avg;
    char name[20];

    public:
        void setter()
        {
            cout << "Enter Id Number: ";
            cin >> idNum;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Marks Of 5 Subjects: ";
            for(int i=0; i<5; i++)
            {
                cin >> marks[i];
            }
        }
        void calcAvg()
        {
            for(int i=0; i<5; i++)
            {
                sum = sum + marks[i];
            }
            avg = (sum / 5);
        }
        void getter()
        {
            cout << "Id Number: " << idNum << endl;
            cout << "Name: " << name << endl;
            cout << "Total Marks: " << sum << endl;
            cout << "Average Marks: " << avg << endl;
        }
};
int main()
{
    student s;

    cout << "\n\nEnter Information\n\n";
    s.setter();
    s.calcAvg();
    cout << "\n\nData Output\n\n";
    s.getter();
}
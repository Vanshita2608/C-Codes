#include <iostream>
using namespace std;
#define hra 0.5
#define da 9.5
#define ea 0.05

class employee
{
    int code, basicSalary, grossSalary;
    char name[20], level[30];

    public:
        void setter()
        {
            cout << "Enter Employee Code: ";
            cin >> code;
            cout << "Enter Employee Name: ";
            cin >> name;
            cout << "Enter Employee Post: ";
            cin >> level;
            cout << "Enter Basic Salary: ";
            cin >> basicSalary;
        }
        void calcSalary()
        {
            grossSalary = basicSalary + (hra + da + ea);
        }
        void getter()
        {
            cout << "Employee Code: " << code << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Post: " << level << endl;
            cout << "Gross Salary: " << grossSalary << endl;
        }
};
int main()
{
    employee e;

    cout << "\n\nEnter Information\n\n";
    e.setter();
    e.calcSalary();
    cout << "\n\nYour Data\n\n";
    e.getter();
}
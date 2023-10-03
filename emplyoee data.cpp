/*WAP to create a "Employee" class with employee ID, employee name, basic salary, overtime_value as data members and employee_info(), print_employee(), gross_salary() as data functions
    (NOTE: Overtime rate = for 1 hour ---> 100 rs.)*/

#include<iostream>
using namespace std;

class employee
{
    private:
            int emp_ID;
            char name[50];
            float basic_salary;
            int over_time;
    public:
            void employee_info();
            void print_employee();
            float gross_salary();
};

void employee :: employee_info()
{
    cout<<"Enter ID:";
    cin>>emp_ID;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter basic salary:";
    cin>>basic_salary;
    cout<<"Enter overtime value:";
    cin>>over_time;
}

void employee :: print_employee()
{
    cout<<endl<<"ID:"<<emp_ID<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"Basic salary:"<<basic_salary<<endl;
    cout<<"Overtime value:"<<over_time<<endl;
}

float employee :: gross_salary()
{
    if(over_time == 0)
    {
        float gross_salary = basic_salary;
        return gross_salary;
    }
    else
    {
        int overtime;
        overtime = over_time * 100;
        float gross_salary = basic_salary + overtime;
        return gross_salary;
    }
}

main()
{
    employee E1;
    E1.employee_info();
    E1.print_employee();
    float salary = E1.gross_salary();
    cout<<"SALARY="<<salary<<endl;

}

#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    char name[20];
    int age;
    float basic_salary;
    float gross_salary;

public:
    void input();
    void display();
};

void employee::input()
{
    cout << "\nEnter name of employee: ";
    cin >> name;
    cout << "employee Id: ";
    cin >> id;
    cout << "age of Employee: ";
    cin >> age;
    cout << "basic salary: ";
    cin >> basic_salary;
    gross_salary = basic_salary+(0.8*basic_salary)+(0.1*basic_salary);
}

void employee::display()
{

    cout<<name<<"\t"<<id<<"\t"<<age<<"\t"<<basic_salary<<"\t\t\t"<<gross_salary<<"\n";
}

int main()
{
    int n;
    cout<<"Enter number of employee: "<<endl;
    cin>>n;
    employee emp[n];
    for (int i=0;i<n;i++)
    {
        emp[i].input();
    }
    cout << "\nName\tId\tAge\tBasic Salary\t\tGross Salary\n"<< endl;
    cout<<"---------------------------------------------------------------------"<<endl;
    for (int i = 0; i < n; i++)
    {
        emp[i].display();
    }
    return 0;
}


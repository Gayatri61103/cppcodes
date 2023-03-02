#include <iostream>
using namespace std;
class student
{
private:
    int roll;
    int marks;
    float percentage;
    char name[20];
    int sum = 0;

public:
    void input();
    void display();
};

void student::input()
{
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter roll number: ";
    cin>>roll;
    for (int i=0;i<5;i++)
    {
        cout<<"Enter the marks in subject "<<i+1 <<":";
        cin>>marks;
        sum=sum+marks;
    }
}
void student::display()
{
    cout<<"\ndetails: ";
    cout << "\nName:" << name <<endl;
    cout << "Roll no.:" << roll <<endl;
    cout << "Total marks:" << sum <<endl;
    cout << "Percentage:" << (float)sum * 100 / 500 <<endl;
    cout << "\n";
}

int main()
{
    student stu;
    stu.input();
    stu.display();
    return 0;
}


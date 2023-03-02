#include <iostream>

using namespace std;
class stu{
    private:
        char name[20];
        int roll;
        int marks;
    public:
        void inputdata(void);
        void printdata(void);
};
void stu::inputdata(void)
{
    cout<<"enter name:";
    cin>>name;
    cout<<"enter roll:";
    cin>>roll;
    cout<<"enter marks:";
    cin>>marks;
}
void stu::printdata(void)
{
    cout<<"details:"<<endl;
    cout<<"name: ";
    cout<<name;
    cout<<"\nroll: ";
    cout<<roll;
    cout<<"\nmarks: ";
    cout<<marks;
}
int main()
{
    stu student;
    student.inputdata();
    student.printdata();
    return 0;
}


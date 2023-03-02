#include <iostream>
#include <math.h>
using namespace std;
class coordinate{
private:
    float x1, x2, y1, y2, dist;

public:
    void input();
    void output();
};

void coordinate::input()
{
    cout<<"Enter x1: ";
    cin>>x1;
    cout << "Enter y1: ";
    cin>>y1;
    cout<<"Enter x2: ";
    cin>>x2;
    cout<<"Enter y1: ";
    cin>>y2;
    dist=sqrt( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) );
}
void coordinate::output()
{
    cout<<"\nThe distance between points is "<< dist;
}
int main(){
    coordinate c;
    c.input();
    c.output();
    return 0;
}


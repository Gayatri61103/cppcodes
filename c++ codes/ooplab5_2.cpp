#include <iostream>
using namespace std;
class Time{
	public:
		int hh;
		int mm;
		Time(int x,int y=0)
		{
			hh=x;
			mm=y;
		}
		Time()
		{
			hh=6;
			mm=30;
		}
		Time(Time &x)
		{
			hh=x.hh;
			mm=x.mm;
		}
};
int main()
{
	Time t1(5,45);
	cout<<"time :"<<t1.hh<<":"<<t1.mm<<endl;
	Time t2(5);
	cout<<"time :"<<t2.hh<<":"<<t2.mm<<endl;
	Time t3;
	cout<<"time :"<<t3.hh<<":"<<t3.mm<<endl;
	Time t4(t1);
	cout<<"time :"<<t4.hh<<":"<<t4.mm;
	return 0;
}

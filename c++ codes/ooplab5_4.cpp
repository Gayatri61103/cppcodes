#include <iostream>
class Date
{
	public:
		int day,month,year;
		Date()
		{
			day=1;
			month=2;
			year=2000;
		}
		Date(int x,int y=2,int z=2000)
		{
			day=x;
			month=y;
			year=z;
		}
		Date(Date &i)
		{
			day=i.day;
			month=i.month;
			year=i.year;
		}
		void daysincejan(Date a)
		{
			int k=0;
			if (a.year %400==0)
				k++;
			else if(a.year %4==0 && a.year % 100 !=0)
				k++;
			int l=a.month -1;
			int m=0;
			switch (l){
				case 11:
					m+=31;
				case 10:
					m+=30;
				case 9:
					m+=31;
				case 8:
					m+=30;
				case 7:
					m+=31;
				case 6:
					m+=31;
				case 5:
					m+=30;
				case 4:
					m+=31;
				case 3:
					m+=30;
				case 2:
					m+=31;
				case 1:
					if (k==1)
						m+=29;
					else
						m+=28;
				case 0:
					m+=a.day;
				}
			printf("days :%d\n",m);
		}
};
int main(){
	Date a1;
	a1.daysincejan(a1);
	Date a2(3,3);
	a2.daysincejan(a2);
	Date a3(6,1,2000);
	a3.daysincejan(a3);
	return 0;
	}

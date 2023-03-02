#include <iostream>
using namespace std;


class Distance
{
	private:
		int feet;
		int inches;
	public: 
		void distance()
		{
			cout<<"Enter feet: ";
			cin>>feet;
			cout<<"Enter inches: ";
			cin>>inches;
		}
		void get_distance()
		{
			cout<<"\nDistance is\n"<<feet<<" feet and "<<inches<<" inches"<<endl;
		}
		void add(Distance x, Distance y)
		{
			feet = x.feet + y.feet;
			inches = x.inches + y.inches;
		}
};
int main()
{
	Distance d1, d2, d3;
	cout<<"Enter two distances"<<endl;
	d1.distance();
	d2.distance();
	d3.add(d1, d2);
	d3.get_distance();
	return 0;
}


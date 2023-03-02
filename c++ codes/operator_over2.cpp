//operator overloading unary -- and ++ postfix

#include <iostream>
using namespace std;

class dist{
	public:
		int feet,inches;
		dist(int f,int i)
		{
			feet = f;
			inches = i;
		}
		void display()
		{
			cout<<feet<<" feet "<< inches <<" inches ";
		}
		void operator --(int)
		{
			feet= feet--;
			inches = inches--;
		}
		void operator ++(int)
		{
			feet = feet++;
			inches = inches ++;
		}
};

int main(){
	dist d(2,39),p(2,20);
	cout << "distance = ";
	d.display();cout<<"   "; p.display();
	d--; d--;p++;
	cout <<endl<< "modified distance = ";
	d.display();cout <<"   "; p.display();
	return 0;
}

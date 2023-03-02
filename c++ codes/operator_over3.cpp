//operator overloading unary ++ , -- prefix
#include <iostream>
using namespace std;

class dist{
	public:
		int feet,inches;
		dist(int f, int i )
		{
			feet = f;
			inches = i;
		}
		void display()
		{
			cout << feet <<" feet " << inches << " inches ";
		}
		void operator ++()
		{
			feet = ++feet;
			inches = ++inches;
		}
		void operator --()
		{
			feet = --feet;
			inches = -- inches;
		}
};

int main(){
	dist d(2,30),p(4,20);
	cout <<" distance : ";
	d.display(); cout <<"    "; p.display();
	++d; --p;
	cout << "modified distance :";
	d.display(); cout <<"    "; p.display();
	return 0;
}

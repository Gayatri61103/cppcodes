//assignment and relational operator overloading

#include <iostream>
using namespace std;

class Distance
{
   	private:
      		int feet , inches;
   	public:
	Distance(){}
      	Distance(int f, int i)
      	{
         	feet = f;
         	inches = i;
      	}
      	void operator = (Distance k)
      	{
         	feet = k.feet;
         	inches = k.inches;
      	}
	void operator <(Distance d)
      	{
         	if(feet < d.feet)
         	{
            		cout<<"\n2nd one is larger";
         	}
         	else if(feet == d.feet )
         	{
            		cout<<"\nboth are equal";
         	}
         	else{
			cout<<"\n1st one is larger";
		}
      	}
      	void display()
      	{
        	cout << "\nFeet : " << feet <<  "\nInches :" <<  inches << endl;
      	}
};

int main()
{
   	Distance d1(2, 10), d2(5, 15);

   	cout << "a : ";
   	d1.display();

   	cout << "b :";
   	d2.display();

   	d1 = d2;

   	cout << "a(after) :";
   	d1.display();

	d1<d2;

   return 0;
}

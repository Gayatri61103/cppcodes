//insertion and extraction operator overloading

#include <iostream>
using namespace std;

class num
{
   private:
      int a;

   public:
      	num()
      	{}

      	num( int i)
   	{
         	a = i;
      	}

      	friend ostream &operator<<(ostream &output, num &n )
      	{
         output << "\na : " << n.a ;
         return output;
      	}

      	friend istream &operator>>(istream  &input, num &n )
      	{
         	input >> n.a ;
         	return input;
      	}
};

int main()
{
	num n1( 10), n2;

   	cout << "Enter 2nd obj : ";
   	cin >> n2;

   	cout << "1st obj : " <<n1 << endl;
	cout<< "2nd obj : "<< n2 <<endl;
   	return 0;
}

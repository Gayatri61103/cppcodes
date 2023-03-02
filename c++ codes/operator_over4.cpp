//addition ,subtraction , division,multiplication of 2 complex nos using binary operator overloading

#include <iostream>
using namespace std;
class complex{
	public:
		int real , imag;
		complex (){};
		complex(int a,int b)
		{
			real= a;
			imag = b;
		}
		void display()
		{
			cout<<"\nreal : "<<real;
			cout<<"\nimag : "<<imag;
		}
		complex operator +(complex k)
		{
			complex temp;
			temp.real=real+k.real;
			temp.imag=imag+k.imag;
			return temp;
		}
		complex operator -(complex k)
		{
			complex temp;
			temp.real=real-k.real;
			temp.imag=imag-k.imag;
			return temp;
		}
		complex  operator *(complex k)
                {
                        complex temp;
			temp.real=real*k.real;
			temp.imag=imag*k.imag;
			return temp;
               	}
		complex operator /(complex k)
                {
                        complex temp;
			temp.real=real/k.real;
			temp.imag=imag/k.imag;
			return temp;
                }
};

int main(){
	complex n(2,20),m(5,10),x;
	cout<<"n : ";n.display();
	cout<<"\nm: ";m.display();
	x=n+m;
	cout<<"\nadd : ";x.display();
	x=n-m;
        cout<<"\nsub : ";x.display();
	x=n*m;
        cout<<"\nmul : ";x.display();
	x=n/m;
        cout<<"\ndiv : ";x.display();
	return 0;
}

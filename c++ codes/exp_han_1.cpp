#include <iostream>
using namespace std;

float division(float x,float y)
{
	if(y==0)
	{
		throw "division by zero !!!";
	}
	return (x/y);
}
int main()
{
	float i=10.0;
	float j=5.0;
	float k=0;
	try{
		float a=division(i,j);
		cout<<i<<" % "<<j<<" = "<<a<<endl;
		float b=division(i,k);
		cout<<i<<" % "<<k<<" = "<<b<<endl;
	}
	catch(const char *msg)
	{
		cout<<msg;
	}
	//float b=division(i,k);
        //cout<<i<<" % "<<k<<" = "<<b;
	return 0;
}

#include <iostream>
using namespace std;

float Division(float num, float den)
{
	return (num / den);

}

int main()
{
	float a = 10;
	float b = 0;
	float c;
	c = Division(a, b);
	cout << "10/0 is "<< c << endl;

}


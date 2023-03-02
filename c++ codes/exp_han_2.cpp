#include <iostream>
using namespace std;

int array(int arr[],int i,int n)
{
	if(i<0 ||i>n)
        {
                throw "errorrrr !!!";
        }
	return(arr[i]);
}

int main()
{
	int n;
	cout<<"no of ele in array : ";
	cin>>n;
	int a[n];
	cout<<"enter arrray element :";
	for (int i=0 ; i<n ; i++)
	{
		cin>>a[i];
	}
	try
	{
		int k=array(a,3,n);
		cout<<"3rd ele : "<<k<<endl;
		int r=array(a,8,n);
		cout<<"8th ele : "<<r;

	}
	catch(const char *msg)
	{
		cout<<msg;
	}
	return 0;
}

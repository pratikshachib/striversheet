#include<iostream>
using namespace std;
int main()
{
	int n,i, a=0,b=1,c;
	cout<<"Enter how many elements you want in fibonacci series:";
	cin>>n;
	cout<<"the series is:"<<a<<"," <<b<<",";
	for(i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<i;
		if(i<n)
		cout<<",";
	}
	return 0;

}

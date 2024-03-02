#include<iostream>
using namespace std;
int main()
{
	int n,rev=0,rem,temp;
	cout<<"Enter a no:";
	cin>>n;
	temp=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
	{
		cout<<"no is palindrome";
	}
	else
	{
		cout<<"no is not a palindrome";
	}
	return 0;
}

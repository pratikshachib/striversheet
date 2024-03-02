#include<iostream>
using namespace std;
int main(){
	int n,r,sum=0,x;
	cout<<"enter the no:";
	cin>>n;
	x=n;
	while(n!=0){
		r=n%10;
       	sum=sum+(r*r*r);
    	n=n/10;	
	}
	if(x==sum)
	{
		cout<<"Armstrong no";
	}
	else
	{
		cout<<"Not an Armstrong no";
	}
	return 0;
}

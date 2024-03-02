#include<iostream>
using namespace std;
int main(){
	int n,count=0;
	cout<<"Enter the no. you want:";
	cin>>n;
	while(n!=0)
	{
		n=n/10;
		count++;
		
	}
	cout<<count;
}

#include<iostream>
using namespace std;

int main()

 {
	
	int t,r,sum,num;
	
	cout<<"Enter an integer: "<<endl;
	cin>>t;
	num=t;
	for(;t>0;)
	{
		sum=t%10;
		r=r*10+sum;
		t=t/10;
	}
	
	cout<<"Reversed number: "<<r;
	
	return 0;
}

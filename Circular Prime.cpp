#include<iostream>
#include<cmath>
using namespace std;
//function to check if integer is prime.
//returns 1 for prime. 0 otherwise.
int is_prime(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else if(n%2==0)
		return 0;
	else
	{
		for(int i=3;i*i<=n;i+=2)
		{
			if(n%i==0)
				return 0;
		}
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int len=ceil(log10(n));		//to find number of digits
		int i,flag=0;
		
		for(i=0;i<len;i++)
		{
			if(is_prime(n)!=1)
			{
				flag=1;
				break;
			}
			int d=n%10;		//rotates the number
			n/=10;
			d*=pow(10,len-1);
			n+=d;
		}
		
		if(flag==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}

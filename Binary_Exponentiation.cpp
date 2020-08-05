#include<iostream>
using namespace std;

long int power(int n,int k)
{
	if(n==0)
		return 1;
	else if (n==1)
		return n;
	else if(n%2==0)
	{
		return power(power(n/2,k),2);
	}
	else
	{
		return k*power(power((n-1)/2,k),2);
	}	
}
int main()
{
	cout<<power(4,5);
}

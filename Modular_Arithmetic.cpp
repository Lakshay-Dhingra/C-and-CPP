//Find the answer of ((A^B)/C)%M GIVEN THAT GCD(C,M)=1.

#include<iostream>
using namespace std;

long long int power(long long int x,long long int n,long long int m)
{
	if(n==0)
		return 1;
	else
	{
		if(n%2==1) //odd
		{
// 			return ((x%m)*(power(x,n-1,m))%m)%m;
            return (x*power((x*x)%m,(n-1)/2,m))%m;
		}
		else //even
		{
// 			long long int temp=(power(x,n/2,m))%m;
// 			return (temp*temp)%m;
            return power((x*x)%m,n/2,m);
		}
	}
}
long long int x,y,gcd;
void exteuclid(long long int a,long long int b)
{
	if(b==0)
	{
		gcd=a;
		x=1;
		y=0;
	}
	else
	{
		exteuclid(b,a%b);
		long long int temp;
		temp=x;
		x=y;
		y=temp-(y*(a/b));
	}
}

long long int mmi(long long int a,long long int m)
{
	exteuclid(a,m);
	return ((x%m)+m)%m
}

int main()
{
    long long int a,b,c,m;
    cin>>a>>b>>c>>m;
    cout<<(((power(a,b,m)))*((mmi(c,m)))+m)%m;
}

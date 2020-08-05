#include<stdio.h>

int fact(int n)
{
	static int i=1;
	static int f=1;
	while(i<=n)
	{
		f*=i;
		i++;
//		printf("loop run \n");
	}
	return f;
}

int main()
{
	printf("%d\n",fact(5));
	printf("%d\n",fact(6));
}

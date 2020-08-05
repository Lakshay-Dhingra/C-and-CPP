#include<stdio.h>

i=1;
f=1;
int fact(int n)
{
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

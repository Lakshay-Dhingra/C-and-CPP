#include<stdio.h>

int sum(int a,int b)
{
	return a+b;
}

void greetHello(int (*fptr)(int,int))
{
	printf("Hello\n");
	printf("sum: %d\n",fptr(7,9));
}

void greetGM(int (*fptr)(int,int))
{
	printf("Good morning\n");
	printf("sum: %d\n",fptr(7,9));
}

int main()
{
	int (*fptr)(int,int)=sum;
	greetHello(fptr);
	greetGM(fptr);
	return 0;
}

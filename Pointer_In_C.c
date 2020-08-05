#include<stdio.h>
int main()
{
	int i=234;
	int *ptr=&i;
	int *x;
	int *y=NULL;
	printf("%x\n",ptr);
	printf("%p\n",ptr);
	printf("%p\n",ptr+2);
	printf("%p\n",x);
	printf("%p\n",y);
	printf("%x\n",y);
}

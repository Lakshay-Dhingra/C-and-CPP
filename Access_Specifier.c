#include<stdio.h>
int main()
{
	int i=234;
	float a=18.9,b=19.9;
	float c=345.98172;
	printf("hello %d\n",i);
	printf("hello %f\n",i);
	printf("hello %f\n",a);
	printf("hello %d\n",a);
	printf("hello %d\n",b);
	
	printf("hello %.3f\n",c);
	printf("hello %.3f\n",a);
	printf("hello %2.4f\n",c);
	printf("hello %14.4f\n",c);
	printf("hello %-14.4fworld\n",c);
}

#include<stdio.h>
#include<string.h>

int main()
{
	char str[]="<h1>\0This is a Heading </h1>";
	printf("%chello",str[4]);
	printf("%s",str);
}

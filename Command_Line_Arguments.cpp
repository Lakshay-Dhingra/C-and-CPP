#include<stdio.h>

int main(int num,char* args[])
{
	printf("Number of arguments are: %d\n",num);
	int i=0;
	for(int i=0;i<num;i++)
	{
		printf("%s ",args[i]);
	}

	return 0;
}

#include<stdio.h>

int main()
{
	printf("Date: %s\n",__DATE__);
	printf("Time: %s\n",__TIME__);
	printf("File Path: %s\n",__FILE__);
	printf("Current Line No.: %d\n",__LINE__);
	printf("Is ANSI Compiled: %d\n",__STDC__);
	return 0;
}

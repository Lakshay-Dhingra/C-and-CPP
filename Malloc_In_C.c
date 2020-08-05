#include<stdio.h>
#include<stdlib.h>

int main()
{
    float* ptr=(float*)malloc(sizeof(float)*10);
    int i;
    printf("New memory location at: %p\n",ptr);
	for(i=0;i<10;i++)
	{
		printf("%f\n",ptr[i]);
	}
	free(ptr);
	printf("New memory location at: %p\n",ptr);
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float* ptr=(float*)malloc(sizeof(float)*10);
    int i;
    printf("New memory location at: %p\n",ptr);
	for(i=0;i<10;i++)
	{
		*(ptr+i)=i+1;
		printf("%f\n",*(ptr+i));
	}
	ptr=(float*)realloc(ptr,sizeof(float)*5);
	printf("Reallocating...\nNew memory location at: %p\n",ptr);
	for(i=0;i<5;i++)
	{
		printf("%f\n",*(ptr+i));
	}
//	for(i=10;i<15;i++)
//	{
//		ptr[i]=i+1;
//		printf("%f\n",ptr[i]);
//	}
	free(ptr);
	printf("New memory location at: %p\n",ptr);
	return 0;
}

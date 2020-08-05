#include<stdio.h>

int main()
{
    int* p=NULL;
    printf("%p\n",p);
    if(p!=NULL)
    	printf("%d\n",*p);	//Program will crash if this statement gets executed with null pointer
    else
    	printf("Null pointer encountered!\n");
    int* p2;
    printf("%p\n",p2);
    return 0;
}

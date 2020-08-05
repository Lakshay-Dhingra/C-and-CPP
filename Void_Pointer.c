#include<stdio.h>

int main()
{
    int x=10;
    char y='b';
    void *p=&x;
    printf("%p\n",p);
    p=&y;
    printf("%p\n",p);
    
//    printf("%c\n",*p);	//-->Gives Error
    
    int *p2;
    p2=p;
    printf("%p %c\n",p2,*p2);
    
//Pointer Arithmetic is allowed here    
	p+=2;
    printf("%p",p);
    return 0;
}

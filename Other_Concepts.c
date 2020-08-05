#include<stdio.h>

int main()
{
	int arr[]={1,3,4,5};
	
	printf("%d",1[arr]);	//-->it is same as 1[arr] arr[1]
	
	char str[10];
//	str="bye";	//-->Gives error
	
	char* str2;
	str2="bye";		//-->No Error
	
	45;		//--->No error

	return 0;
}

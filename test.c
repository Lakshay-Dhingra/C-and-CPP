#include<stdio.h>
int (*func())[2][3]
{
	int arr[2][3]={{1,2,3},{4,5,6}};
	return arr;
}



int main()
{
	int arr[]={1,3,4,5};
	
//	printf("%d",1[arr]);	//-->it is same as 1[arr] arr[1]
	
	char str[10];
//	str="bye";	//-->Gives error
	
	char* str2;
	str2="bye";		//-->No Error
	
	45;		//--->No error
	
	int **ptr2=func();
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
//			printf("%d ",*(ptr2+2*i+j));
			printf("%d ",ptr2[i][j]);
		}
	}
	return 0;
}

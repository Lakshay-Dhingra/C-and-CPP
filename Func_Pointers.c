#include<stdio.h>

int sum(int a,int b)
{
	return a+b;
}

//int** giveArr(int** arr,int a,int b)
//{
//	int i,j;
//	for(i=0;i<a;i++)
//	{
//		for(j=0;j<b;j++)
//		{
//			arr[i][j]=i+j+2;
//		}
//	}
//	return arr;
//}

int main()
{
	int (*p)(int,int);
	p=&sum;
//	printf("sum: %d",*p(10,23));--> Gives error
	printf("sum: %d\n",(*p)(10,23));
	printf("sum: %d\n",p(10,20));
	
//	int** (*ptr)(int**,int,int)=&giveArr;
//	int arr[6][8];
//	int **x=arr;
//	x=(*ptr)(x,6,8);
//	int i=0,j=0;
//	for(i=0;i<6;i++)
//	{
//		for(j=0;j<8;j++)
//		{
//			printf("%d ",x[i][j]);
//		}
//		printf("\n");
//	}
	return 0;
}

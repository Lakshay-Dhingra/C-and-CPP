#include<stdio.h>
#include<time.h>
#include<stdlib.h>

struct Stud
{
	int id;
	float marks;
	char name[50];
};


int main()
{
	srand(time(0));
	struct Stud Student[100];
	int i;
	for(i=0;i<100;i++)
	{
		Student[i].id=i+1;
		Student[i].marks=rand()%101;
		Student[i].name[0]=(char)((i%26)+65);
		Student[i].name[1]='\0';
	}
	for(i=0;i<100;i++)
	{
		printf("%d %f %s\n",Student[i].id,Student[i].marks,Student[i].name);
	}	
}

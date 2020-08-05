#include<stdio.h>
#include<time.h>
#include<stdlib.h>

typedef char* String;

typedef struct Stud
{
	int id;
	float marks;
	String name;
}Student;

int main()
{
	Student s1;
	s1.id=45;
	s1.name="hello";
	printf("%d %s",s1.id,s1.name);
}

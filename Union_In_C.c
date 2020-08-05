#include<stdio.h>
#include<string.h>
//programmer and cook can be active at same time, other only one employee is active at a time

union ActiveEmp
{
	char prog[30];
	char sweeper[50];
	char cook[20];
}person;


int main()
{
strcpy(person.sweeper,"Paritosh");
strcpy(person.prog,"Lakshay");
strcpy(person.cook,"Raj");
printf("%s %s %s",person.prog,person.sweeper,person.cook);
}

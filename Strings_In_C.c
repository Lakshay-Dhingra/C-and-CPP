#include<stdio.h>
#include<string.h>

int main()
{
	char name[]="Lakshay";
	char str1[]={'h','e','l','l','o','\0'};
	char *str2="world";
	printf("%s %s\n",str1,name);
	printf("%s %s\n",str1,str2);
	char *str3;
	gets(str3);
	puts(str3);
	printf("%s %s\n",str1,str3);
	char* str4=strcat(str1,str2);
	puts(str4);
	printf("%d\n",strlen(str4));
	printf("%d\n",strcmp(str1,"hello"));
	printf("%d\n",strcmp(str1,"jello"));
	printf("%d\n",strcmp(str1,"ello"));
	printf("%s\n",strrev(str4));
	return 0;
}

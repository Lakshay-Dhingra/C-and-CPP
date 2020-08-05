//This program takes html document and remove html tags from it.

#include<stdio.h>
#include<string.h>
typedef char* String;

void parser(String str)
{
	int flag=0,i,k=0;
	String s=(char*)malloc(100 * sizeof(char));
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='<')
		{
			flag=1;
		}
		if(flag==0)
		{
			
			s[k]=str[i];
			k++;
		}
		if(flag==1&&str[i]=='>')
		{
			flag=0;
		}
	}
	s[k]='\0';
	printf("%s",s);
}


int main()
{
	char str[]="<h1> This is a Heading </h1>";
	parser(str);
}

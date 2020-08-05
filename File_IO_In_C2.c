#include<stdio.h>
int main()
{
	
	//fputs()
	FILE *ptr=fopen("TextFile.txt","w");
	char* str="Hello This is Lakshay.";
	if(fputs(str,ptr) != EOF)
	{
		printf("Written Successfuly...\n");
	}
	else
	{
		printf("Some error ocurred!\n");
	}
	fclose(ptr);
	
	//fputc()
	FILE *ptr2=fopen("TextFile2.txt","w");
	char* str2="Hello This is Lakshay.";
	int i=0,flag=0,length=strlen(str2);
	while(i<length)
	{
		if(fputc(str2[i],ptr2)!=EOF)
		{
			flag=1;
		}
		else
		{
			printf("Some error ocurred!\n");
			break;
		}
		i++;
	}
	if(flag==1)
		printf("Written Successfuly...\n");
	fclose(ptr2);
	
	//fgets()
	ptr=fopen("TextFile.txt","r");
	char mystr[27];
	fgets(mystr,27,ptr);
	printf("%s\n",mystr);
	fclose(ptr);
	
	//fgetc()
	ptr=fopen("TextFile2.txt","r");
	char mystr2[27],x;
	for(i=0;i<27;i++)
	{
		x=fgetc(ptr);
		if(x==EOF)
			break;
		else
			mystr2[i]=x;
	}
	mystr2[i]='\0';
	printf("%s\n",mystr2);
	fclose(ptr);
	return 0;
}

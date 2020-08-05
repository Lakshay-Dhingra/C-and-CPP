#include<stdio.h>
int main()
{
	FILE *ptr=fopen("Lakshay.txt","w");
	fprintf(ptr,"%s","HelloMyNameisLakshay.");
	fclose(ptr);
	
	ptr=fopen("Lakshay.txt","a");
	fprintf(ptr,"%s","HelloMyNameisLakshay.");
	fclose(ptr);
	
	
	ptr=fopen("Lakshay.txt","r");
	char str[50];
	fscanf(ptr,"%s",&str);
	printf("%s\n",str);
	fclose(ptr);
	return 0;
}

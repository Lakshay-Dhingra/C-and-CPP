#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	#define PI 3.14
	
	#ifdef PI
	printf("%f\n",PI);
	#endif
	
	#undef PI
	
	#ifdef PI
	printf("%f\n",PI);
	#endif
	
	#ifndef PI
	printf("PI isn't there...\n");
	#endif

	#define i 20
	#if i<=10
	printf("lte 10\n");
	#elif i<=20
	printf("lte 20\n");
	#else
	printf("gt 20\n");
	#endif
	#undef i
	
	return 0;
}

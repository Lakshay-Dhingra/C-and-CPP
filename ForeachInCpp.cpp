#include <iostream>
using namespace std;

int main()
{
	int arr[]={1,2,3,5,4};
	char s[50];
	for(int i:arr)
	{
		cout<<i<<" ";
	}
	 cout<<"Enter String:";
	 cin>>s;
	for(char i:s)
	{
		cout<<i<<" ";
	}
	return 0;
}

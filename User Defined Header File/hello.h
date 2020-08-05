#include<iostream>
using namespace std;

class Hello
{
	int x;
	public:
		void setx(int y)
		{
			x=y;
		}
		int getx()
		{
			cout<<x<<endl;
			return x;
		}
};

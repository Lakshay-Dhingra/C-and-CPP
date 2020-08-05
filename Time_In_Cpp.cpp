#include<ctime>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	time_t t1,t2;
	clock_t time_req;
	
	t1=time(NULL);
	cout << t1 << " seconds has passed since 00:00:00 GMT, Jan 1, 1970"<<endl;
	t2=time(0);
	cout<<t2<< " seconds has passed since 00:00:00 GMT, Jan 1, 1970"<<endl;
	string s = ctime(&t2);
	cout<<"Date and Time: "<<s;
	
	int y;
	time_req = clock();
	for(int i=0; i<10000000; i++)
	{
		y=2*2*2+6+7;
	}
	time_req = clock()- time_req;
	cout << "Time Taken: " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;

	return 0;
}

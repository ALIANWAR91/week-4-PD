#include<iostream>
#include<windows.h>
using namespace std;
void longestTime(int h,int m)
{
	if(h*60>m)
	{
		cout<<h;
	}
	else
	{
		cout<<m;
	}

}
main()
{
	int h,m;
	cout << "Enter the number of hours: ";
	cin>>h;
	cout<<"Enter the number of minutes: ";
	cin>>m;
	longestTime(h,m);
}

#include<iostream>
#include<windows.h>
using namespace std;
void tpChecker(int people, int tp)
{
	int last;
	last=(tp*500)/(people*57);
	if(last>14)
	{
		cout<<"Your TP will last "<<last<<" days, no need to panic!";
	}
	else
	{
		cout<<"Your TP will only last "<<last<<" days, buy more!";
	}
}

main()
{
	int people,tp;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>tp;
	tpChecker(people,tp);
}
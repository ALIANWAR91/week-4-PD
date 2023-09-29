#include<iostream>
#include<windows.h>
using namespace std;
void pet(int holidays)
{
	int workDay,timeForGame,differenceFromNorm,hour,min;
	workDay=365-holidays;
	timeForGame=workDay*63+holidays*127;
	differenceFromNorm=30000-timeForGame;
	hour=differenceFromNorm/60;
	min=differenceFromNorm%60;
	if(hour<0)
	{
		hour=-hour;
	}
	if(min<0)
	{
		min=-min;
	}
	if(holidays>20)
	{
		cout<<"Tom will run away"<<endl;
		cout<<hour<<" hours and "<<min<<" minutes for play";
	}
	else
	{
		cout<<"Tom sleeps well"<<endl;
		cout<<hour<<" hours and "<<min<<" minutes less for play";
	}
}
main()
{
	int holidays;
	cout<<"Holidays: ";
	cin >>holidays;
	pet(holidays);
	
}
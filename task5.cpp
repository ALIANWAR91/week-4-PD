#include<iostream>
#include<windows.h>
using namespace std;

void possibleBonus(int yourPosition, int friendPosition)
{
	int position;
	position=friendPosition-yourPosition;
	if(position>6)
	{cout<<"false";}
	else
	{cout<<"true";}
}

main()
{
	int yourPosition,friendPosition;
	cout<<"Enter your position: ";
	cin>>yourPosition;
	cout<<"Enter your friend's position: ";
	cin>>friendPosition;
	possibleBonus(yourPosition,friendPosition);
}
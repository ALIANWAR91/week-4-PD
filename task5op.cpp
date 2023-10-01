#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void name()
{
	int x=x, y=y;
	system("cls");
	gotoxy(x/2,y/2);
	cout<<"ALI ANWAR KHAN";
}
main()
{
	name();
}
#include<iostream>
#include<windows.h>
using namespace std;
void h();
void a();
void n();
void s();
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
main()
{
	gotoxy(0,0);
	h();
	gotoxy(0,10);
	a();
	gotoxy(0,20);
	s();
	gotoxy(0,30);
	s();
	gotoxy(0,40);
	a();
	gotoxy(0,50);
	n();
}

void h()
{
	cout<<"#             #"<<endl;
	cout<<"#             #"<<endl;
	cout<<"#             #"<<endl;
	cout<<"#             #"<<endl;
	cout<<"###############"<<endl;
	cout<<"#             #"<<endl;
	cout<<"#             #"<<endl;
	cout<<"#             #"<<endl;
	cout<<"#             #"<<endl;
}

void a()
{
	cout<<"        #        "<<endl;
	cout<<"       # #       "<<endl;
	cout<<"      #   #      "<<endl;
	cout<<"     #     #     "<<endl;
	cout<<"    #########    "<<endl;
	cout<<"   #         #   "<<endl;
	cout<<"  #           #  "<<endl;
	cout<<" #             # "<<endl;
	cout<<"#               #"<<endl;
}

void s()
{ 
	cout<<"      #####        "<<endl;
	cout<<"     #             "<<endl;
	cout<<"    #              "<<endl;
	cout<<"     #             "<<endl;
	cout<<"      #####        "<<endl;
	cout<<"           #       "<<endl;
	cout<<"            #      "<<endl;
	cout<<"          #        "<<endl;
	cout<<"     #####         "<<endl;
}

void n()
{
	cout<<"#               #"<<endl;
	cout<<"# #             #"<<endl;
	cout<<"#   #           #"<<endl;
	cout<<"#     #         #"<<endl;
	cout<<"#       #       #"<<endl;
	cout<<"#         #     #"<<endl;
	cout<<"#           #   #"<<endl;
	cout<<"#             # #"<<endl;
	cout<<"#               #"<<endl;
}
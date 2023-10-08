#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x ,int y);
void hassan();
main()
{
	
	system("cls");
	hassan();
}

void gotoxy(int x ,int y)
{
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void hassan()
{
	gotoxy(6,7);
	cout<<"H"<<endl;
	gotoxy(6,8);
	cout<<"A"<<endl;
	gotoxy(6,9);
	cout<<"S"<<endl;
	gotoxy(6,10);
	cout<<"S"<<endl;
	gotoxy(6,11);
	cout<<"A"<<endl;
	gotoxy(6,12);
	cout<<"N"<<endl;
}
	
	
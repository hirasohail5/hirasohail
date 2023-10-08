#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x ,int y);


main()
{
	int x=4, y=7;
	system("cls");
	gotoxy(x,y);
	cout<<"HIRA SOHAIL";
	gotoxy(x,y);
	
}

void gotoxy(int x ,int y)
{
	
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
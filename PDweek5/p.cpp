#include<iostream>
#include<windows.h>
using namespace std;
void maze();
void player();
void removeplayer();
void moveplayerright();
void moveplayerleft();
void moveplayerup();
void moveplayerdown();
void enemy1();
void removeenemy1();
void moveenemy1();
void gotoxy(int x,int y);
int e1x=2,e1y=2;
int px=100,py=30;
main()
{
    system("cls");
    maze();
    enemy1();
    while(true)
    {
       moveenemy1();
       Sleep(200);

    }
}
void player()
{
    gotoxy(px,py);
    cout<<"        _0000000000_      "<<endl;
    gotoxy(px,py+1);
    cout<<"       / ___    ___ \\    "<<endl;
    gotoxy(px,py+2);
    cout<<"      | (___)  (___) |    "<<endl;
    gotoxy(px,py+3);
    cout<<"   ___|              |___ "<<endl;
    gotoxy(px,py+4);
    cout<<"  |  _|   \\_____/   |_  |"<<endl;
    gotoxy(px,py+5);
    cout<<"  |  ||              ||  |"<<endl;
    gotoxy(px,py+6);
    cout<<"  |  ||              ||  |"<<endl;
    gotoxy(px,py+7);
    cout<<"  |  ||              ||  |"<<endl;
    gotoxy(px,py+8);
    cout<<"  (__)|    ______    |(__)"<<endl;
    gotoxy(px,py+9);
    cout<<"      |   |      |   |    "<<endl;
    gotoxy(px,py+10);
    cout<<"      |   |      |   |    "<<endl;
    gotoxy(px,py+11);
    cout<<"      |___|      |___|    "<<endl;
    gotoxy(px,py+12);
    cout<<"      (___)      (___)    "<<endl;
}
void removeplayer()
{
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
    cout<<"                          "<<endl;
}

void moveplayerright()
{
    if(getCharAtxy(px+15,py)==' ')
    {
        removeplayer();
        px=px+1;
        player();
    }
}
void moveplayerleft()
{
    if(getCharAtxy(px-1,py)==' ')
    {
        removeplayer();
        px=px-1;
        player();
    }
}
void moveplayerup()
{
    if(getCharAtxy(px,py-1)==' ')
    {
        removeplayer();
        py=py-1;
        player();
    }
}
void moveplayerdown()
{
    if(getCharAtxy(px,py+12)==' ')
    {
        removeplayer();
        py=py+1;
        player();
    }
}
void moveenemy1()
{
    removeenemy1();
    e1x=e1x+1;
     if(e1x==180)
        {
            e1x=2;
        }
    enemy1();
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0,0};
    SMALL_RECT rect = {x,y,x,y};
    COORD coordBufSize;
    coordBufSize.X=1;
    coordBufSize.Y=1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}
void removeenemy1()
{
    gotoxy(e1x,e1y);
    cout<<"               "<<endl;
    gotoxy(e1x,e1y=1);
    cout<<"               "<<endl;
    gotoxy(e1x,e1y+2);
    cout<<"               "<<endl;
    gotoxy(e1x,e1y+3);
    cout<<"               "<<endl;
    gotoxy(e1x,e1y+4);
    cout<<"               "<<endl;
    gotoxy(e1x,e1y+5);
    cout<<"               "<<endl;
    gotoxy(e1x,e1y+6);
    cout<<"               "<<endl;
    gotoxy(e1x,e1y+7);
    cout<<"               "<<endl;
}
void enemy1()
{
    gotoxy(e1x,e1y);
    cout<<"   ____________"<<endl;
    gotoxy(e1x,e1y+1);
    cout<<" /              \\ "<<endl;
    gotoxy(e1x,e1y+2);
    cout<<"|    ()    ()    |"<<endl;
    gotoxy(e1x,e1y+3);
    cout<<"|                |"<<endl;
    gotoxy(e1x,e1y+4);
    cout<<"|       --       |  "<<endl;
    gotoxy(e1x,e1y+5);
    cout<<"|                |"<<endl;
    gotoxy(e1x,e1y+6);
    cout<<"| /\\  /\\  /\\  /\\ |   "<<endl;
    gotoxy(e1x,e1y+7);
    cout<<"|/  \\/  \\/  \\/  \\|"<<endl;
}
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void maze()
{
   cout<<" ________________________________________________________________________________________________________________________________________________________________________________________ "<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                  ____________________________________________________________                                                                                          |"<<endl;
   cout<<"|                                 |____________________________________________________________|                                                                                         |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                           _____________________________________________________________|"<<endl;
   cout<<"|                                                                                                                          |_____________________________________________________________|"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<"|                                                                                                                                                                                        |"<<endl;
   cout<<" ________________________________________________________________________________________________________________________________________________________________________________________ "<<endl;
}
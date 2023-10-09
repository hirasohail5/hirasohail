#include<iostream>
#include<windows.h>
using namespace std;
void move();
void player();
void enemy1();
void enemy2();
void enemy3();
void gotoxy(int x,int y);
void power();
int px=100,py=33;
int e1x=2,e1y=2;
main()
{
    system("cls");
    maze();
    player();
    while(true)
    {
        moveplayer();
        Sleep(200);
    }
    

  
}

    
void moveenemy1();
{
    eraseenemy1();
    e1x=e1x+1;
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
void enemy2()
{ 
    cout << "  __" << endl;
    cout << " /..\\" << endl;
    cout << " |  |" << endl;
    cout << " \\__/" << endl;
}
void enemy3()
{ 
    cout << "  O" << endl;
    cout << " /|\\" << endl;
    cout << " / \\" << endl;
}
void power()
{
    
    cout << "  *  " << endl;
    cout << " *** " << endl;
    cout << "*****" << endl;
    cout << " *** " << endl;
    cout << "  *  " << endl;
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
void removeenemy2()
{
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    cout<<"    "<<endl;
    cout<<"    "<<endl;
}
void removeenemy3()
{
    cout<<"   "<<endl;
    cout<<"   "<<endl;
    cout<<"   "<<endl;
    
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

void move()
{
    remove();
   
    

}
void maze();
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
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}









  


  












    






















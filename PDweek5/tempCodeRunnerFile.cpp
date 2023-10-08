#include<iostream>
#include<windows.h>
using namespace std;
void move();
void printplayer();
void printenemy1();
void printenemy2();
void printenemy3();
void gotoxy(int x,int y);
void printpower();
main()
{
    system("cls");
    gotoxy(1,1);
    printplayer();
    gotoxy(0,30);
    printenemy1();
    gotoxy(15,0);
    printenemy2();
    gotoxy(0,20);
    printenemy3();
    while(true)
    {
        
        
        Sleep(250);
    }
}
    


void printplayer()
{
    cout<<"              ____________  "<<endl;
    cout<<"             / ___    ___ \\ "<<endl;
    cout<<"            | (___)  (___) | "<<endl;
    cout<<"         ___|              |___"<<endl;
    cout<<"        |  _|     _____    |_  |"<<endl;
    cout<<"        |  ||              ||  |"<<endl;
    cout<<"        |  ||              ||  |"<<endl;
    cout<<"        |  ||              ||  |"<<endl;
    cout<<"        (__)|    ______    |(__)"<<endl;
    cout<<"            |   |      |   |"<<endl;
    cout<<"            |   |      |   |"<<endl;
    cout<<"            |___|      |___|"<<endl;
    cout<<"            (___)      (___)"<<endl;
}
  
void printenemy1()
{
    cout<<"           ____________"<<endl;
    cout<<"         /              \\ "<<endl;
    cout<<"        |    ()    ()    |"<<endl;
    cout<<"        |                |"<<endl;
    cout<<"        |       --       |  "<<endl;
    cout<<"        |                |"<<endl;
    cout<<"        | /\\  /\\  /\\  /\\ |   "<<endl;
    cout<<"        |/  \\/  \\/  \\/  \\|"<<endl;
}
void printenemy2()
{ 
    cout << "  __" << endl;
    cout << " /..\\" << endl;
    cout << " |  |" << endl;
    cout << " \\__/" << endl;
}
void printenemy3()
{ 
    cout << "    O" << endl;
    cout << "   /|\\" << endl;
    cout << "   / \\" << endl;
}
void printpower()
{
    
    cout << "  *  " << endl;
    cout << " *** " << endl;
    cout << "*****" << endl;
    cout << " *** " << endl;
    cout << "  *  " << endl;
}
void remove()
{
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
    cout<<"                                        "<<endl;
}

void move()
{
    remove();
   
    

}
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}









  


  












    






















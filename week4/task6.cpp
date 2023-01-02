#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void name();
main()
{
system("cls");
name();

}
void name()
{
gotoxy(25,2);
cout<<"    $$$        "<<endl;
gotoxy(25,3);
cout<<"   $$ $$        "<<endl;
gotoxy(25,4);
cout<<"  $$   $$       "<<endl;
gotoxy(25,5);
cout<<"  $$***$$       "<<endl;
gotoxy(25,6);
cout<<"  $$   $$      "<<endl;
gotoxy(25,8);
cout<<"  $$    $$       "<<endl;
gotoxy(25,9);
cout<<"  $$    $$       "<<endl;
gotoxy(25,10);
cout<<"  $$ ** $$        "<<endl;
gotoxy(25,11);
cout<<"  $$*  *$$       "<<endl;
gotoxy(25,12);
cout<<"  $$    $$       "<<endl;
gotoxy(25,14);
cout<<"    $$$       "<<endl;
gotoxy(25,15);
cout<<"   $$ $$        "<<endl;
gotoxy(25,16);
cout<<"  $$   $$       "<<endl;
gotoxy(25,17);
cout<<"  $$***$$          "<<endl;
gotoxy(25,18);
cout<<"  $$   $$       "<<endl;
gotoxy(25,20);
cout<<"    ****        "<<endl;
gotoxy(25,21);
cout<<"     $$       "<<endl;
gotoxy(25,22);
cout<<"     $$       "<<endl;
gotoxy(25,23);
cout<<"     $$       "<<endl;
gotoxy(25,24);
cout<<"     $$       "<<endl;
gotoxy(25,25);
cout<<"    ****        "<<endl;
gotoxy(25,27);
cout<<"     $$$       "<<endl;
gotoxy(25,28);
cout<<"    $$  $    "<<endl;
gotoxy(25,29);
cout<<"     $$       "<<endl;
gotoxy(25,30);
cout<<"      $$$      "<<endl;
gotoxy(25,31);
cout<<"    $    $    "<<endl;
gotoxy(25,32);
cout<<"     $$$$       "<<endl;

}







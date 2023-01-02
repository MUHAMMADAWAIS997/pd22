#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x , int y);
void printMaze();
void moveP(int x, int y);

  main()
   {
    system ("cls");
printMaze();
int x= 3;
int y = 3;
while(true)
{    
moveP(x,y);
if(x < 20)
  {
          x = x + 1;
  }    
if(x == 20)
  {
  gotoxy(x-1, y);
  cout<<" ";
  x = 3;
  }
}
}
void printMaze()
{
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$                                         $"<<endl;
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);


}
void moveP(int x, int y)
{

cout<<"P";
Sleep(200);
gotoxy(x-1, y);
cout<<" ";

}
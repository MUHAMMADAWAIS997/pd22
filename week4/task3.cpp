#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x , int y);
void moveP(int x, int y);

  main()
   {
    system ("cls");
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
    gotoxy(0,0);
    moveP(4,6)
    gotoxy(1,15);




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
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
   while(true)
{
   cout<<"p"<<endl; 
   if(x< 15)
  {
  x = x+1; 

}
   if(x == 15)
  {
   moveP(x-1,y);
   cout<<" ";


}
}
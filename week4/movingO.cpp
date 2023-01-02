#include <iostream>
#include <windows.h>
using namespace std;

void printPac(int x, int y);


main()
{
system("cls");
int x= 5;
int y= 5;
cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
cout<<"&&                                                 &&"<<endl;
cout<<"&&                                                 &&"<<endl;
cout<<"&&                                                 &&"<<endl;
cout<<"&&                                                 &&"<<endl;
cout<<"&&                                                 &&"<<endl;
cout<<"&&                                                 &&"<<endl;
cout<<"&&                                                 &&"<<endl;
cout<<"&&                                                 &&"<<endl;
cout<<"&&                                                 &&"<<endl;
cout<<"&&                                                 &&"<<endl;
cout<<"&&                                                 &&"<<endl;
cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
while(true)
{
Sleep(200);
printPac(x+1,y);
 if(x == 9)
  { x= 5;
  }
 if(x= x-1)
 cout<<" ";

}




}
void printPac(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
 cout<<"O";

}
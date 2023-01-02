#include <iostream>
#include <windows.h>
using namespace std;
void goToXY(int x, int y)
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
goToXY(20,5);
cout<<"             @@@   @@       @@    @@@    @@@@    @@@@                            "<<endl;
goToXY(20,6);
cout<<"            @@ @@  @@       @@   @@ @@    @@    @@  @@                       "<<endl;
goToXY(20,7);
cout<<"           @@   @@ @@       @@  @@   @@   @@     @@                         "<<endl;
goToXY(20,8);
cout<<"           @@@@@@@ @@  @@@  @@  @@@@@@@   @@      @@@@                           "<<endl;
goToXY(20,9);
cout<<"           @@   @@ @@ @@ @@ @@  @@   @@   @@         @@                          "<<endl;
goToXY(20,10);
cout<<"           @@   @@ @@@@   @@@@  @@   @@   @@         @@                         "<<endl;
goToXY(20,11);
cout<<"           @@   @@ @@@     @@@  @@   @@  @@@@  @@@@@@@                            "<<endl;
}







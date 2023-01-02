#include <iostream>
#include <windows.h>
using namespace std;
void state(int speed)
{
if(speed > 100)
  {
      cout<<"HALT...You will be CHALLANGED."<<endl;
  }
if(speed <= 100)
  {
      cout<<"Perfect...You are giong GOOD."<<endl;
  }
}
main()
{
while(true)
 {
 int speed;
 cout<<"enter the speed(Km/h): ";
  cin>>speed;
 
 state(speed);
 }
}
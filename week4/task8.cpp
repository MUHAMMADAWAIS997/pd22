#include <iostream>
#include <windows.h>
using namespace std;
void state(string num1)
{
if(num1 == "false")
  {
      cout<<"      true"<<endl;
  }
if(num1 == "true")
  {
      cout<<"      false"<<endl;
  }
}
main()
{
while(true)
 {
 string num1;
 cout<<"enter the condition(true/false): ";
  cin>>num1;
 
 state(num1);
 }
}
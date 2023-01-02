#include <iostream>
#include <windows.h>
using namespace std;
void state(int num1 , int num2)
{
if(num1 == num2)
  {
      cout<<"true"<<endl;
  }
if(num1 != num2)
  {
      cout<<"false"<<endl;
  }
}
main()
{
while(true)
 {
 int num1, num2;
 cout<<"enter 1st number: ";
  cin>>num1;
 cout<<"enter 2nd number: ";
  cin>>num2;
 state(num1, num2);
 }
}
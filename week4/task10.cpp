#include <iostream>
#include <windows.h>
using namespace std;
void price(float buy1,float buy2,float buy3)
{
float amount = (buy1 * 2) + (buy2 * 4.10) + (buy3 * 2.50);
if(amount >= 200)
  {
   int Afterdiscount = amount - (amount / 5);
      cout<<"your originol bill is: "<<amount<<endl;
      cout<<"your payable bill is: "<<Afterdiscount<<endl;
  }
if(amount< 200)
  {
      cout<<"your Bill is:"<<amount<<endl;
  }
}
main()
{
while(true)
 {
 float buy1,buy2,buy3;
 cout<<"enter the total red roses,you bought: ";
  cin>>buy1;
  cout<<"enter the total white roses,you bought: ";
cin>>buy3;
 cout<<"enter the total tulips roses,you bought: ";
cin>>buy2;
 price(buy1,buy2,buy3);
 }
}
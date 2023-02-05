#include <iostream>
using namespace std;

string fruit[4]= {"peach", "apple", "guava", "watermelon"};
int price[4] = {60, 70, 40, 30};
int bill(string name,int quantity);
main()
{
    string name;
    int quantity;
 cout<<"enter name of fruit: ";
 cin>>name;
 cout<<"Enter quantity in(Kgs): ";
 cin>>quantity; 
 int result1=bill(name,quantity);
 cout<<"Your payable bill is: "<<result1<<endl;

    
}
int bill(string name,int quantity)
{
    int result;
    for(int index=0;index<4;index++)
    {
        
        if(name==fruit[index])
        {
             result=quantity*price[index];
        }
        
    }
    return result;
}
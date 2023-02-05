#include<iostream>
using namespace std;
string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int price=500;
    int bill(string name);
main()
{
    
    string name;
    cout<<"Enter the name of movie you want to watch: ";
    cin>>name;
    int result1=bill(name);
    cout<<"Your ticket price after discount is: "<<result1;
}
int bill(string name)
{
    int result;
    for(int index=0;index<4;index++)
    {
        
        if(name==movies[index])
        {
            if(index%2==0)
             result=price-50;
             if(index%2!=0)
             result=price-25;
        }
        
    }
    return result;
}
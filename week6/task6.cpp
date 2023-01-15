#include <iostream>
using namespace std;
float appartment(string month,int stay);
float studio(string month,int stay);
int main()
{
string month;
int stay;
cout<<"Enter the month of your stay: ";
cin>>month;
cout<<"Enter the number of days you will stay(1...200): ";
cin>>stay;
float result=appartment(month ,stay);
float result1=studio(month,stay);
cout<<"FOR APPARTMENT: "<<result<<"$"<<endl;
cout<<"FOR STUDIO: "<<result1<<"$"<<endl;
}
float appartment(string month,int stay)
{
    float charges;
if(month=="May"||month=="October")
{
 if(stay>14)
{
    charges=65*stay-((65*stay)/10);
}
 if(stay<=14)
{
    charges=65*stay;
}
}
else if(month=="June"||month=="September")
{
if(stay>14)
{
    charges=68.70*stay-((68.70*stay)/10);
}
if(stay<=14)
{
    charges=68.70*stay;
}
}
else if(month=="July"||month=="August")
{
if(stay>14)
{
    charges=77*stay-((77*stay)/10);
}
if(stay<=14)
{
    charges=77*stay;
}
}
return charges;
}
float studio(string month,int stay)
{
 float charges1;
if(month=="May"||month=="October")
{
if(stay>7&&stay<=14)
{
    charges1=50*stay-((50*stay)/20);
}
if(stay<=7)
{
    charges1=50*stay;
}
}
if(month=="May"||month=="October")
{
if(stay>14)
{
    charges1=75.20*stay-((75.20*stay)/3.33);
}
}
 if(month=="June"||month=="September")
{
if(stay>14)
{
    charges1=76*stay-((76*stay)/5);
}
if(stay<=14)
{
    charges1=76*stay;
}
}
return charges1;

}
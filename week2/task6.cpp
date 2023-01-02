#include <iostream>
using namespace std;
main(){
string name;
cout<<"entre your name:";
cin>>name;
float SSC;
cout<<"entre your matric marks:";
cin>>SSC;
float percentage1;
percentage1 = (SSC / 1100) * 10;
float FSc;
cout<<"entre your intermediate marks (part 1):";
cin>>FSc;
float percentage2;
percentage2 = (FSc / 550) * 40;
float ecat;
cout<<"entre your ecat marks:";
cin>>ecat;
float percentage3;
percentage3 = (ecat / 400) * 50;
float aggregate;
aggregate = percentage1 + percentage2 + percentage3;
cout<<"your name is:"<<name<<endl;
cout<<"your aggregate is:"<<aggregate<<endl;



}
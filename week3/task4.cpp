#include <iostream>
using namespace std;
main(){
float mark1;
float mark2;
float mark3;
float mark4;
float mark5;
string name;
cout<<"entre your name:";
cin>>name;
cout<<"entre marks in PF:";
cin>>mark1;
cout<<"entre marks in ICT:";
cin>>mark2;
cout<<"entre marks in CALCULUS:";
cin>>mark3;
cout<<"entre marks in FE:";
cin>>mark4;
cout<<"entre marks in WP:";
cin>>mark5;
float sum;
sum = mark1 + mark2 + mark3 + mark4 + mark5;
float percentage;
percentage = (sum / 500) * 100;
cout<<"your name is:"<<name<<endl;
cout<<"your percentage is:"<<percentage<<endl;
}
#include <iostream>
using namespace std;
main(){
float velocity1;
float velocity2;
float acceleration;
float time;
cout<<"enter initial velocity:";
cin>>velocity1;
cout<<"enter acceleration:";
cin>>acceleration;
cout<<"enter time:";
cin>>time;
velocity2 = velocity1 + (acceleration * time);
cout<<"final velocity is:"<<velocity2<<endl;
}
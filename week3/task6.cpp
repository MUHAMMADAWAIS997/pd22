#include <iostream>
using namespace std;
main(){
float size;
float cost;
float area;
cout<<"entre bag size in pounds:";
cin>>size;
cout<<"entre cost of bag:";
cin>>cost;
cout<<"entre area covered by each bag in square feet:";
cin>>area;
float costPerPound;
costPerPound = cost / size;
float number;
number = cost / area;
cout<<"cost of the fertilzer per pound is:"<<costPerPound<<endl;
cout<<"cost of fertilizing the area per square feet is:"<<number<<endl;
}
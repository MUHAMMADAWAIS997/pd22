#include <iostream>
using namespace std;
main(){
string name;
float price1;
float price2;
float sold1;
float sold2;
cout<<"enter price of one kg vegitable:";
cin>>price1;
cout<<"enter price of one kg fruit:";
cin>>price2;
cout<<"enter vegitable sold(in kgs):";
cin>>sold1;
cout<<"enter fruit sold(in kgs):";
cin>>sold2;
float earning;
earning = (sold1 * price1) + (sold2 * price2);
float amountInPKR;
amountInPKR = earning / 1.94;
cout<<"your earnig in PKR is:"<<amountInPKR<<endl;
}
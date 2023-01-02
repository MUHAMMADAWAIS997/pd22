#include <iostream>
using namespace std;
main(){
string name;
float price1;
float price2;
float sold1;
float sold2;
float percentage;
cout<<"entre name of the movie:";
cin>>name;
cout<<"entre adult ticket price:";
cin>>price1;
cout<<"entre price of child ticket:";
cin>>price2;
cout<<"entre sold tickets(adult):";
cin>>sold1;
cout<<"entre sold tickets(child):";
cin>>sold2;
cout<<"entre percentage to donate:";
cin>>percentage;
float sum;
sum = (sold1 * price1) + (sold2 * price2);
float donation;
donation = sum * (percentage / 100);
float afterDonation;
afterDonation = sum - donation;
cout<<"total amount generated:"<<sum<<endl;
cout<<"amount after donation:"<<afterDonation<<endl;
}
#include <iostream>
using namespace std;
float payable(string fruit, string day, float amount);
string wronginfo(string fruit,string day);
int main()
{
    float amount;
    string fruit, day;
    cout << "Enter the name of fruit: ";
    cin >> fruit;
    cout << "Enter the day name on which you bought fruit: ";
    cin >> day;
    cout << "Enter quantity of fruit(in KGs): ";
    cin >> amount;
    float result = payable(fruit, day, amount);
    cout << result;
    string result1=wronginfo(fruit,day);
    cout<<result1;
}
float payable(string fruit, string day, float amount)
{
    float price;
    if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        if (fruit == "banana")
        {
            price = amount * 2.50;
        }
        if (fruit == "apple")
        {
            price = amount * 1.20;
        }
        if (fruit == "kiwi")
        {
            price = amount * 2.70;
        }
        if (fruit == "orange")
        {
            price = amount * 0.85;
        }

        if (fruit == "grapes")
        {
            price = amount * 3.85;
        }
        if (fruit == "pineapple")
        {
            price = amount * 5.50;
        }
        if (fruit == "grapefruit")
        {
            price = amount * 1.45;
        }
    }
    if (day == "saturday" || day == "sunday")
    {
        if (fruit == "banana")
        {
            price = amount * 2.70;
        }
        if (fruit == "apple")
        {
            price = amount * 1.25;
        }
        if (fruit == "kiwi")
        {
            price = amount * 3;
        }
        if (fruit == "orange")
        {
            price = amount * 0.9;
        }

        if (fruit == "grapes")
        {
            price = amount * 4.20;
        }
        if (fruit == "pineapple")
        {
            price = amount * 5.60;
        }
        if (fruit == "grapefruit")
        {
            price = amount * 1.60;
        }
    }
    return price;
    
}
string wronginfo(string fruit,string day)
{
if(day!="monday" && day != "tuesday" && day != "wednesday"  && day!= "thursday" && day != "friday"&&day != "saturday" && day != "sunday")
{
    return "ERROR";
}
    else if(fruit!="banana"&&fruit!="apple"&&fruit!="pineapple"&&fruit!="grapefruit"&&fruit!="grapes"&&fruit!="kiwi"&&fruit!="orange")
{
    return "ERROR";
}
}
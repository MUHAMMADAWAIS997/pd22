#include <iostream>
using namespace std;
string activity(string temp, string humidity);
int main()
{
    string temp, humidity;
    cout << "enter the temperature(warm/cold): ";
    cin >> temp;
    cout << "enter the weather condition(dry/humid): ";
    cin >> humidity; 
    string result= activity(temp, humidity);
    cout<<result;
}
string activity(string temp, string humidity)
{
    string exercise;
    if (temp == "warm" && humidity == "dry")
    {
        exercise = "play tennis";
    }
    if (temp == "warm" && humidity == "humid")
    {
        exercise = "swim";
    }
    if (temp == "cold" && humidity == "dry")
    {
        exercise = "play basketball";
    }
    if (temp == "cold" && humidity == "humid")
    {
        exercise = "watch TV";
    }
    return exercise;
}
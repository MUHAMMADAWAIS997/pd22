#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    int length=word.length();
    if(length%2==0)
    cout<<"TRUE";
    else
    cout<<"FALSE";

}
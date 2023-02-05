#include<iostream>
#include<string>
using namespace std;
main()
{
    string word[4]={"ss","sss","ssss","s"};
    if(word[0]==word[1]&&word[2]==word[1]&&word[3]==word[1])
    cout<<"ture";
    else
    cout<<"false";
}
#include<iostream>
using namespace std;
main()
{
    string word1,word2;
    cout<<"Enter first word:";
    cin>>word1;
    cout<<"Enter other word:";
    cin>>word2;
    int length1=word1.length();
    int length2=word2.length();
    int count=0;
    for(int index1=0;index1<length1;index1++)
    word1[index1];
    for(int index2=0;index2<length2;index2++)
    {
        word2[index2];
       for(int index1=0;index1<length1;index1++)
       {
           if(word1[index1]==word2[index2])
           {
            count++;
           } 
       } 
    }
cout<<count/2;
}
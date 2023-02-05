#include<iostream>
using namespace std;
main()
{
    int arrsize,num;
    cout<<"enter size of array:";
    cin>>arrsize;
    int numbers[arrsize];
    int count;  
    for(int index=0;index<arrsize;index++)
    {
        cout<<"Enter the number:";
        cin>>num;
        numbers[index]=num;
    }
    for(int index=0;index<arrsize;index++)
    {

        if(numbers[index]==7||numbers[index]%10==7  )
        {
            count++;
        }
        
        
    }
    if(count!=0)
    cout<<"BOOM!!!";
    else
    cout<<"the number 7 not found in array";
}
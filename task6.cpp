#include<iostream>
using namespace std;
main()
{
    int arrsize,num,time;
    cout<<"enter size of array:";
    cin>>arrsize;
    cout<<"Enter how many times you want apply even-odd transformation:";
    cin>>time;

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
        for(int j=1;j<=time;j++)
        {
            if(numbers[index]%2==0)
            {
                numbers[index]=numbers[index]-2;
            }
            if(numbers[index]%2!=0)
            {
               numbers[index]=numbers[index]+2; 
            }
        }
       int result=numbers[index];
       cout<<result<<endl;
    }
    
}
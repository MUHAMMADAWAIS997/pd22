#include <iostream>
using namespace std;
int main()
{
    int arrsize;
    cout<<"enter size of array: ";
    cin>>arrsize;
    string color[arrsize];
    int count1=2*arrsize;
    for(int i=0;i<arrsize;i++)
    {
        cout<<"Enter a color:";
cin>>color[i];
    }
    int count2=0;
    for(int i=0;i<arrsize;i++)
    {
        if(color[i]!=color[i+1])
        {
          count2=count2+1;
        }
        else
        count2;

    }
    cout<<count1+count2-1;

}
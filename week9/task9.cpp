#include<iostream>
using namespace std;
main()
{
    string MOVE[10]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
"Pop", "Lock", "Arabesque"};
int num, pin[4];
for(int index=0;index<4;index++)
{
    cout<<"Enter a number:";
    cin>>num;
    if(num!=0&&num!=1&&num!=2&&num!=3&&num!=4&&num!=5&&num!=6&&num!=7&&num!=8&&num!=9)
    {
        cout<<"Inavalid number.";
        break;
    }
    pin[index]=num;
    
}

int count=-1;
for(int index=0;index<4;index++)
{

    count=count+1;
    if(index<=1)
    {
if(pin[index]==0)
    {
        cout<<MOVE[count+0]<<" ";
    }
    else if(pin[index]==1)
    {
        cout<<MOVE[count+1]<<" ";
    }
    else if(pin[index]==2)
    {
        cout<<MOVE[count+2]<<" ";
    }
    else if(pin[index]==3)
    {
        cout<<MOVE[count+3]<<" ";
    }
    else if(pin[index]==4)
    {
        cout<<MOVE[count+4]<<" ";
    }
    else if(pin[index]==5)
    {
        cout<<MOVE[count+5]<<" ";
    }
    else if(pin[index]==6)
    {
        cout<<MOVE[count+6]<<" ";
    }
    else if(pin[index]==7)
    {
        cout<<MOVE[count+7]<<" ";
    }
    else if(pin[index]==8)
    {
        cout<<MOVE[count+8]<<" ";
    }
    else if(pin[index]==9)
    {
        cout<<MOVE[count+9]<<" ";
    }
    }
    else if (index==2)
    {
     if(pin[index]==0)
    {
        cout<<MOVE[count+0]<<" ";
    }
    else if(pin[index]==1)
    {
        cout<<MOVE[count+1]<<" ";
    }
    else if(pin[index]==2)
    {
        cout<<MOVE[count+2]<<" ";
    }
    else if(pin[index]==3)
    {
        cout<<MOVE[count+3]<<" ";
    }
    else if(pin[index]==4)
    {
        cout<<MOVE[count+4]<<" ";
    }
    else if(pin[index]==5)
    {
        cout<<MOVE[count+5]<<" ";
    }
    else if(pin[index]==6)
    {
        cout<<MOVE[count+6]<<" ";
    }
    else if(pin[index]==7)
    {
        cout<<MOVE[count+7]<<" ";
    }
    else if(pin[index]==8)
    {
        cout<<MOVE[count+8]<<" ";
    }
    else if(pin[index]==9)
    {
        cout<<MOVE[count+9-10]<<" ";
    }   
    }
    else if(index==3)
    {
        if(pin[index]==0)
    {
        cout<<MOVE[count+0]<<" ";
    }
    else if(pin[index]==1)
    {
        cout<<MOVE[count+1]<<" ";
    }
    else if(pin[index]==2)
    {
        cout<<MOVE[count+2]<<" ";
    }
    else if(pin[index]==3)
    {
        cout<<MOVE[count+3]<<" ";
    }
    else if(pin[index]==4)
    {
        cout<<MOVE[count+4]<<" ";
    }
    else if(pin[index]==5)
    {
        cout<<MOVE[count+5]<<" ";
    }
    else if(pin[index]==6)
    {
        cout<<MOVE[count+6]<<" ";
    }
    else if(pin[index]==7)
    {
        cout<<MOVE[count+7]<<" ";
    }
    else if(pin[index]==8)
    {
        cout<<MOVE[count+8-10]<<" ";
    }
    else if(pin[index]==9)
    {
        cout<<MOVE[count+9-10]<<" ";
    }
    }
    
    
}
}
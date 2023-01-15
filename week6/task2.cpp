#include <iostream>
using namespace std;
int totalMarks(int num1,int num2, int num3,int num4,int  num5,int sum);
int percentage(int result);
string grade(int result1);
int main()
{
    int num1,num2,num3,num4,num5,sum;
    string name;
    cout<<"Enter name of student: ";
    cin>>name;
    cout<<"Enter your marks in biology(out of 100): ";
    cin>>num1;
    cout<<"Enter your marks in social science(out of 100): ";
    cin>>num2;
    cout<<"Enter your marks in english(out of 100): ";
    cin>>num3;
    cout<<"Enter your marks in maths(out of 100): ";
    cin>>num4;
    cout<<"Enter your marks in chemistry(out of 100): ";
    cin>>num5;
    int result= totalMarks(num1,num2,num3,num4,num5,sum);
    int result1= percentage(result);
    string result2=grade(result1);
    cout<<"___________________________________________________________________________________"<<endl;
    cout<<"student name: "<<name<<endl;
    cout<<"your obtained marks are: "<<result<<endl;
    cout<<"your percentage of marks is: "<<result1<<endl;
    cout<<"you have obtained: "<<result2<<" GRADE"<<endl;
     
}
int totalMarks(int num1,int num2, int num3,int num4,int num5,int sum)
{
     sum= num1+num2+num3+num4+num5;
    return sum;
}
int percentage(int result)
{
    int percent=(result*100)/500;
    return percent;
}
string grade(int result1)
{
    string grd;
if(result1>=50&&result1<60)
{
   grd="          C"; 
}
else if(result1>=60&&result1<70)
{
   grd="          B"; 
}
else if(result1>=70&&result1<80)
{
   grd="          B+"; 
}
else if(result1>=80&&result1<90)
{
   grd="          A"; 
}
else if(result1>=90&&result1<=100)
{
   grd="          A+"; 
}
return grd;



}
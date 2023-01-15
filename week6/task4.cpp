#include <iostream>
using namespace std;
float charges(char servicetype, char time, int use);
main()
{
    char servicetype, time;
    int use;
    cout << "Entre which type of costumer you are(residential or premim) select(R/P): ";
    cin >> servicetype;
    cout << "press D for day time or N for night time:  ";
    cin >> time;
    cout << "Enter the number of minutes you have used the service: ";
    cin >> use;
    float result = charges(servicetype, time, use);
    cout << result << "$" << endl;
}
float charges(char servicetype, char time, int use)
{
    float payable;
    if (servicetype == 'P' && time == 'D')
    {
        if (use <= 75)
        {
            payable = 25;
        }
        if (use > 75)
        {
            payable = 25 + (use - 75) * 0.10;
        }
        
    }
    else if (servicetype == 'P' && time == 'N')
    {
        if (use <= 100)
        {
            payable = 25;
        }
        if (use > 100)
        {
            payable = 25 + (use - 100) * 0.05;
        }
        
    }
    else if (servicetype == 'R' && (time == 'D' || time == 'N'))
    {

        if (use <= 50)
        {
            payable = 10;
        }
        if (use > 75)
        {
            payable = 10 + (use - 50) * 0.20;
        }
    }
    return payable;
}
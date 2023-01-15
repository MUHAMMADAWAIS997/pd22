#include <iostream>
using namespace std;
string sign(int date, string month);
int main()
{
    int date;
    string month;
    cout << "Enter the date you was born: ";
    cin >> date;
    cout << "Enter the month you was born : ";
    cin >> month;
    string output = sign(date, month);
    cout << output << endl;
}
string sign(int date, string month)
{
    string explain;
    if (date >= 21 && date <= 31)
    {
        if (month == "March")
        {
            explain = "sign is: ARIES ; People born in this month have Zodiac aries";
        }
    }
    if (date >= 1 && date <= 19)
    {
        if (month == "April")
        {
            explain = "sign is: ARIES ; People born in this month have Zodiac aries";
        }
    }
    if (date >= 20 && date <= 30)
    {
        if (month == "April")
        {
            explain = "sign is: TAURUS ; People born in this month have Zodiac taurus.";
        }
    }
    if (date >= 1 && date <= 20)
    {
        if (month == "May")
        {
            explain = "sign is: TAURUS ; People born in this month have Zodiac taurus";
        }
    }
    if (date >= 21 && date <= 31)
    {
        if (month == "May")
        {
            explain = "sign is: GEMINI ; People born in this month have Zodiac gemini.";
        }
    }
    if (date >= 1 && date <= 20)
    {
        if (month == "June")
        {
            explain = "sign is: GEMINI ; People born in this month have Zodiac gemini.";
        }
    }
    if (date >= 21 && date <= 30)
    {
        if (month == "June")
        {
            explain = "sign is: CANCER ; People born in this month have Zodiac cancer.";
        }
    }
    if (date >= 1 && date <= 22)
    {
        if (month == "July")
        {
            explain = "sign is: Cancer ; People born in this month have Zodiac cancer.";
        }
    }
    if (date >= 23 && date <= 31)
    {
        if (month == "July")
        {
            explain = "sign is: LEO ; People born in this month have Zodiac leo.";
        }
    }

    if (date >= 1 && date <= 22)
    {
        if (month == "August")
        {
            explain = "sign is: LEO ; People born in this month have Zodiac leo.";
        }
    }
    if (date >= 23 && date <= 31)
    {
        if (month == "August")
        {
            explain = "sign is: VIRGO ; People born in this month have Zodiac virgo.";
        }
    }
    if (date >= 1 && date <= 22)
    {
        if (month == "September")
        {
            explain = "sign is: VIRGO ; People born in this month have Zodiac virgo.";
        }
    }
    if (date >= 23 && date <= 31)
    {
        if (month == "September")
        {
            explain = "sign is: LIBRA ; People born in this month have Zodiac libra.";
        }
    }
    if (date >= 1 && date <= 22)
    {
        if (month == "October")
        {
            explain = "sign is: LIBRA ; People born in this month have Zodiac libra.";
        }
    }
    if (date >= 23 && date <= 31)
    {
        if (month == "October")
        {
            explain = "sign is: SCORPIO ; People born in this month have Zodiac scorpio.";
        }
    }
    if (date >= 1 && date <= 21)
    {
        if (month == "November")
        {
            explain = "sign is: SCORPIO ; People born in this month have Zodiac scorpio.";
        }
    }
    if (date >= 22 && date <= 31)
    {
        if (month == "November")
        {
            explain = "sign is: SAGITTARIUS  ; People born in this month have Zodiac sagittarius";
        }
    }
    if (date >= 1 && date <= 21)
    {
        if (month == "December")
        {
            explain = "sign is: SAGITTARIUS ; People born in this month have Zodiac sagittarius";
        }
    }
    if (date >= 22 && date <= 31)
    {
        if (month == "December")
        {
            explain = "sign is: CAPRICORN ; People born in this month have Zodiac capricorn.";
        }
    }
    if (date >= 1 && date <= 19)
    {
        if (month == "January")
        {
            explain = "sign is: CAPRICORN ; People born in this month have Zodiac capricorn";
        }
    }
    if (date >= 20 && date <= 31)
    {
        if (month == "January")
        {
            explain = "sign is: AQUARIUS  ; People born in this month have Zodiac aquarius.";
        }
    }
    if (date >= 1 && date <= 18)
    {
        if (month == "February")
        {
            explain = "sign is: AQUARIUS ; People born in this month have Zodiac aquarius.";
        }
    }
    if (date >= 19 && date <= 29)
    {
        if (month == "February")
        {
            explain = "sign is: PISCES ; People born in this month have Zodiac pisces";
        }
    }
    if (date >= 1 && date <= 20)
    {
        if (month == "March")
        {
            explain = "sign is: PISCES ; People born in this month have Zodiac pisces.";
        }
    }
    return explain;
}
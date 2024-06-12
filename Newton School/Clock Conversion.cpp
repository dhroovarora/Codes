https : // my.newtonschool.co/playground/code/tcfvgc77ezwp

#include <bits/stdc++.h> // header file includes every Standard library
        using namespace std;

string convertTo12HourFormat(const string &time24)
{
    int hours, minutes;
    char colon;
    stringstream ss(time24);
    ss >> hours >> colon >> minutes;
    string period = (hours >= 12) ? "PM" : "AM";
    if (hours == 0)
    {
        hours = 12;
    }
    else if (hours > 12)
    {
        hours -= 12;
    }
    stringstream output;
    output << setw(2) << setfill('0') << hours << ":" << setw(2) << setfill('0') << minutes << " " << period;
    return output.str();
}

int main()
{
    string time24;
    cin >> time24;

    string time12 = convertTo12HourFormat(time24);
    cout << time12;

    return 0;
}
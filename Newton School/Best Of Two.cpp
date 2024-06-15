https : // my.newtonschool.co/playground/code/cw5xrhdonao4

#include <bits/stdc++.h> // header file includes every Standard library
        using namespace std;

int main()
{
    // Your code here
    int a1, a2, a3, b1, b2, b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    int a = 0, b = 0;
    if (a1 < a2)
    {
        if (a3 < a1)
        {
            a = (a2 + a1);
        }
        else
        {
            a = (a2 + a3);
        }
    }
    else
    {
        if (a2 < a3)
        {
            a = (a1 + a3);
        }
        else
        {
            a = (a2 + a1);
        }
    }
    if (b1 < b2)
    {
        if (b3 < b1)
        {
            b = (b2 + b1);
        }
        else
        {
            b = (b2 + b3);
        }
    }
    else
    {
        if (b2 < b3)
        {
            b = (b1 + b3);
        }
        else
        {
            b = (b2 + b1);
        }
    }
    (a == b) ? cout << "Tie" : (a > b) ? cout << "Ram"
                                       : cout << "Shyam";
    return 0;
}
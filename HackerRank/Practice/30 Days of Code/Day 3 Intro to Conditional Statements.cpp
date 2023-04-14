https://www.hackerrank.com/challenges/30-conditional-statements/problem?isFullScreen=true




#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "Weird";
    }
    else if (n % 2 == 0)
    {
        if (n > 5 && n < 21)
        {
            cout << "Weird";
        }
        else
        {
            cout << "Not Weird";
        }
    }
    return 0;
}
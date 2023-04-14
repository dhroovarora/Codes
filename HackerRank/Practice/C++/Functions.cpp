https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true




#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = max(a, b);
    c = max(c, d);
    a = max(a, c);
    cout << a;
    return 0;
}
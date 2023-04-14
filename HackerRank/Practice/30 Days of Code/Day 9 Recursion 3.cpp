https://www.hackerrank.com/challenges/30-recursion/problem?isFullScreen=true




#include <iostream>

using namespace std;

int c=1;
int factorial(int n)
{
    if ( n==0)
    {
        return c;
    }
    else if (n==1)
    {
        return c;
    }
    else
     {
    return n * factorial(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    cout <<factorial(n);
}

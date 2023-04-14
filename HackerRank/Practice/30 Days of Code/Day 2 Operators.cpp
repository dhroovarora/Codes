https://www.hackerrank.com/challenges/30-operators/problem?isFullScreen=true




#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    double m;
    int a,b;
    cin>>m>>a>>b;
    float tip = m*a/100;
    float tax = m*b/100;
    float w = m + tip + tax;
    cout<<round(w);
    return 0;
}
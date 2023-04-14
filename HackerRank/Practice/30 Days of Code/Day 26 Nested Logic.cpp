https://www.hackerrank.com/challenges/30-nested-logic/problem?isFullScreen=true




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    if(c > f)
        cout << 10000;
    else if(c < f)
        cout << 0;
    else if(b > e)
        cout << 500 * (b - e);
    else if(a > d)
        cout << 15 * (a - d);
    else
        cout << 0;    
    return 0;
}
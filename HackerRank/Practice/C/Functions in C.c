https://www.hackerrank.com/challenges/functions-in-c/problem?isFullScreen=true




#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max({a, b, c, d});
    printf("%d", ans);
    
    return 0;
}
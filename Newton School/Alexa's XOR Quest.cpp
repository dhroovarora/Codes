https://my.newtonschool.co/playground/code/yc11k6pb9yl3




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
long long xorRange(long long A, long long B) {
    long long xorB = 0;
    if (B % 4 == 0)
        xorB = B;
    else if (B % 4 == 1)
        xorB = 1;
    else if (B % 4 == 2)
        xorB = B + 1;
    
    long long xorAminus1 = 0;
    if ((A - 1) % 4 == 0)
        xorAminus1 = A - 1;
    else if ((A - 1) % 4 == 1)
        xorAminus1 = 1;
    else if ((A - 1) % 4 == 2)
        xorAminus1 = A;
    
    long long result = xorB ^ xorAminus1;
    return result;
}
int main() {
	// Your code here
    long long a,b;
    cin >> a >> b;
    long long ans = xorRange(a,b); 
    cout << ans;
    return 0;
}
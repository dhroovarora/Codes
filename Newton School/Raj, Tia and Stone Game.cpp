https://my.newtonschool.co/playground/code/ipqwjol2al0v




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int a,b,n;
    cin >> a >> b >> n;
    int ans = 1;
    int g = __gcd(a,n);
    while(n){
        n -= g;
        if(ans){
            g = __gcd(b,n);
            ans = 0;
        }
        else{
            g = __gcd(a,n);
            ans = 1;
        }
    }
    cout << ans;
    return 0;
}
https://www.hackerrank.com/contests/projecteuler/challenges/euler003/problem




#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long ans = 2;
        while (n % 2 == 0) { 
            n /= 2; 
        } 
        for (long long i = 3; i <= sqrt(n); i = i + 2) {
            while (n % i == 0) { 
                ans = i;
                n /= i;
            }
        } 
        if(n > 2)
            ans = n;
        cout << ans << "\n";
    }
    return 0;
}
https://my.newtonschool.co/playground/code/2b6q9fgkr9rr




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int ans = 0;
    int n;
    cin >> n;
    long long dp[n + 1] = {0};
    dp[2] = 1;
    dp[3] = 2;

    for (int i = 4; i <= n; i++) 
        dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]);

    cout << dp[n];
}
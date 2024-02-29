https://my.newtonschool.co/playground/code/59rh45b3vasz




#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin >> n;
    vector<int> dp(n+1, 0);
    for(int i = 1; i <= n; i++){
        int sum1 = i/2 + i/3 + i/4;
        int sum2 = dp[i/2] + dp[i/3] + dp[i/4];
        dp[i] = max({sum1, sum2, i});
    }
    cout << dp[n];
    return 0;
}
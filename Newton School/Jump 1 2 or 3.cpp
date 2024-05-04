https://my.newtonschool.co/playground/code/3t4t7sk6pau0




#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % 1000000007;
    }
    cout << dp[n] << endl;
    return 0;
}
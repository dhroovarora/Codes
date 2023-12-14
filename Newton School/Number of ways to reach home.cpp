https://my.newtonschool.co/playground/code/73g8gxd253hi




#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int countWays(int X, int K) {
    vector<int> dp(X + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= X; ++i) {
        for (int j = 1; j <= min(i, K); ++j) {
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }

    return dp[X];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, K;
        cin >> X >> K;
        int result = countWays(X, K);
        cout << result << endl;
    }

    return 0;
}
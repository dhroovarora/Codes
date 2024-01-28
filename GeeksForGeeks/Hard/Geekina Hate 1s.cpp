https://www.geeksforgeeks.org/problems/geekina-hate-1s/1




class Solution {
    private:
    struct Triple {
        long long x, y, z;
        Triple(long long a, long long b, long long c) : x(a), y(b), z(c) {}
    };

    vector<vector<vector<long long>>> dp;

    long long find(long long n, int k) {
        string s = bitset<64>(n).to_string();
        reset();
        return helper(s, s.length(), 1, k);
    }

    long long helper(string& s, int n, int index, int k) {
        if (k < 0)
            return 0;
        if (n == 0) {
            return 1;
        }
        if (dp[index][k][n] != -1)
            return dp[index][k][n];
        int ub = (index == 1 ? s[s.length() - n] - '0' : 1);
        long long ans = 0;
        for (int dig = 0; dig <= ub; dig++) {
            if (dig == ub)
                ans += helper(s, n - 1,index, k - dig);
            else
                ans += helper(s, n - 1, 0, k - dig);
        }
        return dp[index][k][n] = ans;
    }
    void reset() {
        for (int i = 0; i < 65; i++) {
            for (int j = 0; j < 65; j++) {
                dp[0][i][j] = -1;
                dp[1][i][j] = -1;
            }
        }
    }
    public:
    long long findNthNumber(int n, int k) {
        long long low = 0, high = 1e18;
        dp.resize(2, vector<vector<long long>>(65, vector<long long>(65)));
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long count = find(mid, k);
            if (count >= n)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return low;
    }
};
https://leetcode.com/problems/freedom-trail/description/?envType=daily-question&envId=2024-04-27




class Solution {
public:
    int findRotateSteps(string& ring, string& key) {
        vector<int> pos[26];
        const int r = ring.size(), k= key.size();

        for (int i = 0; i < r; i++) {
            pos[ring[i]-'a'].push_back(i);
        }

        int dp[2][200];
        fill(dp[0], begin(dp[0])+r, INT_MAX);

        for (int p : pos[key[0]-'a']) {
            dp[0][p] = min(p, r-p) + 1;
        }

        for (int i = 1; i < k; i++) {
            fill(dp[i&1], begin(dp[i&1])+r, INT_MAX);
            for (int j: pos[key[i-1]-'a']) {
                for (int p : pos[key[i]-'a']) {
                    int step = abs(p-j);
                    step = min(step, r-step);
                    dp[i&1][p] = min(dp[i&1][p], dp[(i-1)&1][j]+step+1);
                }
            }
        }
        return *min_element(dp[(k-1)&1], begin(dp[(k-1)&1])+r);
    }
};
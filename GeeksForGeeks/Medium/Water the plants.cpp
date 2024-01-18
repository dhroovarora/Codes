https://www.geeksforgeeks.org/problems/water-the-plants--170646/1




class Solution{
    public:
    int min_sprinklers(int gallery[], int n)
    {
        const int INF = INT_MAX;
        vector<int> coverage(n,-1);
        
        for (int i = 0; i < n; ++i) {
            if (gallery[i] != -1) {
                int left = max(0, i - gallery[i]);
                int right = min(n - 1, i + gallery[i]);
                for (int j = left; j <= right; ++j) {
                    coverage[j] = max(coverage[j], right);
                }
            }
        }

        int count = 0;
        int curr_end = -1;

        for (int i = 0; i < n; ++i) {
            if (coverage[i] == -1) {
                return -1;
            }

            if (i > curr_end) {
                ++count;
                curr_end = coverage[i];
            }
        }

        return count;
    }
};
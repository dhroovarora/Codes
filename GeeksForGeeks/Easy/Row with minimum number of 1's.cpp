https://www.geeksforgeeks.org/problems/row-with-minimum-number-of-1s5430/1




class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> a) {
        // code here
        int ans = 0;
        for(int i=0;i<n;++i){
            ans = 0;
            for(int j=0;j<m;++j){
                ans += a[i][j];
            }
            a[i][0] = ans;
        }
        ans = m;
        int res = 0;
        for(int i=0;i<n;++i){
            if(a[i][0] < ans){
                ans = a[i][0];
                res = i;
            }
        }
        return res+1;
    }
};
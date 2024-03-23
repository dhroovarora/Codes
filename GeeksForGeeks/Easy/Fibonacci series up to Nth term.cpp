https://www.geeksforgeeks.org/problems/fibonacci-series-up-to-nth-term/1




class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        vector<int> ans;
        int a = 0, b = 1;
        ++n;
        while(n--){
            ans.push_back(a);
            int c = (a + b)%1000000007;
            a = b;
            b = c;
        }
        return ans;
    }
};
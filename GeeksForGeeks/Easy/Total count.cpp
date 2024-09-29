https://www.geeksforgeeks.org/problems/total-count2415/1




class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        int ans = 0;
        for(int a : arr){
            ans += (a/k);
            if(a%k)
                ++ans;
        }
        return ans;
    }
};
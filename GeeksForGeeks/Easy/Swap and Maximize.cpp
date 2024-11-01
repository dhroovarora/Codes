https://www.geeksforgeeks.org/problems/swap-and-maximize5859/1




class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        long long sum = 0;
        int l = 0, r = n - 1;
        while(l < r){
            sum += abs(arr[r] - arr[l]);
            l++; r--;
        }
        
        return sum * 2 * 1LL;
    }
};
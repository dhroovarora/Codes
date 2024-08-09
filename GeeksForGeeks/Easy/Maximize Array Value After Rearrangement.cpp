https://www.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1




class Solution {
  public:
    int Maximize(vector<int> &arr) {
        // Complete the function
        int n = arr.size();
        sort(arr.begin(),arr.end());
        long long sum=0;
        long long int mod=1e9+7;
        for(long long i=0;i<n;i++){
            sum=sum+(arr[i]*i);
        }
        int ans=(int)(sum%mod);
        return ans;
    }
};
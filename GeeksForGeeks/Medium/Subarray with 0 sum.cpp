https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1




class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
     bool subArrayExists(int arr[], int n)
    {
        for(int i = 0;i<n;i++){
            if(arr[i] == 0) return true;
        }
        
        unordered_map<int,bool> mp;
        int sum = 0;
        
        for(int i = 0;i<n;i++){
            sum += arr[i];
            if(mp[sum] == true) return true;
            if(sum == 0) return true;
            mp[sum] = true;
        }
        
        return false;
    }
};
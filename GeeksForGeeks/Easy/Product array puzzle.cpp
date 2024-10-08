https://www.geeksforgeeks.org/problems/product-array-puzzle4525/1




class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
       
        //code here        
        int n = nums.size();
        vector<long long int> left(n),right(n),dhroov;
        left[0] = 1;
        for(int i=1;i<n;i++){
            left[i] = left[i-1] * nums[i-1];
        }
        right[n-1] = 1;
        for(int i=n-2;i>=0;i--){
            right[i] = right[i+1] * nums[i + 1];
        }
        for(int i=0;i<n;i++){
            dhroov.push_back(left[i] * right[i]);
        }
        return dhroov;
    }
};
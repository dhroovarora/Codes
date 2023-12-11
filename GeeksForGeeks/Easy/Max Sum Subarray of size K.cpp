https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1




class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &a , int n){
        // code here 
        long int i=0,dhroov = INT_MIN,sum=0;
        for(int j=0;j<n;j++){
            sum += a[j];
            
            if((j-i+1) ==k){
                dhroov = max(dhroov,sum);
                sum -= a[i];
                i++;
            }
        }
        return dhroov;
    }
};
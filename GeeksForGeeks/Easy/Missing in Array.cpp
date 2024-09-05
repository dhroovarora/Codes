https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1




class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        // Your code goes here
        int sum=0,sum1=0;
        for(int i=1;i<=n;i++){
            sum += i;
        }
        for(int i=0;i<n-1;i++){
            sum1 += arr[i];
        }
        return sum - sum1;
    }
};
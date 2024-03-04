https://www.geeksforgeeks.org/problems/maximum-index-1587115620/1




class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        int i=0;
        int j = n-1;
        int maxi = INT_MIN;
        while(i<=j){
            if(a[i]<=a[j]){
                int index_diff=j-i;
                maxi=max(maxi,index_diff);
                j=n-1;
                ++i;
            }
            else
                --j;
        }
        return maxi;
    }
};
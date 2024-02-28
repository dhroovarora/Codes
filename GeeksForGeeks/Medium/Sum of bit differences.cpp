https://www.geeksforgeeks.org/problems/sum-of-bit-differences2937/1




class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    long long ans = 0;
        for(int i=31;i>=0;i--){
           long long a = 0;
           for(int j=0;j<n;j++){
               a += (arr[j]>>i)&1;
           }
           ans += 2*a*(n-a);
        }
        return ans;
    }
};
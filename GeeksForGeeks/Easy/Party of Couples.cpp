https://www.geeksforgeeks.org/problems/alone-in-couple5507/1




class Solution{
    public:
    int findSingle(int n, int arr[]){
        // code here
        int ans = arr[0];
        for(int i=1;i<n;++i)
            ans ^= arr[i];
        return ans;
    }
};
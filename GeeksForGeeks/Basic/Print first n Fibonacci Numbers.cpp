https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1




class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long>ans(n,0);
        ans[0] = 1;
        ans[1] = 1;
        int i=2;
        while(i<n){
            ans[i] = ans[i-1] + ans[i-2];
            ++i;
        }
        return ans;
    }
};
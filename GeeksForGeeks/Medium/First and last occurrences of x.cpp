https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1




class Solution
{
    public:
    int helper(int i,int j,int arr[],int x,bool flag){
        int ans = -1;
        while(i<=j){
            int m = i + (j - i)/2;
            if(arr[m] == x){
                ans = m;
                if(flag)
                    j = m - 1;
                else
                    i = m + 1;
            }
            else if(arr[m] > x)
                j = m - 1;
            else
                i = m + 1;
        }
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int i=0,j=n-1;
        int a = helper(i,j,arr,x,1);
        int b = helper(i,j,arr,x,0);
        return {a,b};
    }
};
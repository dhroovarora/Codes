https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1




class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> ans(n);
        stack<long long> s;
        s.push(arr[n-1]);
        ans[n-1] = -1;
        for(int i=n-2;i>-1;i--){
            while(s.size() && s.top() <= arr[i])
                s.pop();
            if(s.size())
                ans[i] = s.top();
            else
                ans[i] = -1;
            s.push(arr[i]);
        }
        return ans;
    }
};
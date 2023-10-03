https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1




class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans;
        while(n){
            int c=(n-1)%26;
            ans.push_back(char('A'+c));
            n=(n-1)/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
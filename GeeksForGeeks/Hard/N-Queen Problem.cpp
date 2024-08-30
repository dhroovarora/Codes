https://www.geeksforgeeks.org/problems/n-queen-problem0315/1




class Solution{
public:
    bool can_place(int i,int j,int n,vector<int>ans){
        for(int k=0;k<i;k++){
            if(ans[k]==j || (ans[k]-i+k > 0 and ans[k]-i+k==j) || (ans[k]+i-k<n+1 and ans[k]+i-k==j)){
                return false;
            }
        }
        return true;
    }
    
    void help(int i,int n,vector<vector<int>>&ans,vector<int>&curr_ans){
        if(i==n){
            ans.push_back(curr_ans);
        }
        for(int j=0;j<n;j++){
            if(can_place(i,j+1,n,curr_ans)){
                curr_ans[i]=j+1;
                help(i+1,n,ans,curr_ans);
            }
        }
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>ans;
        vector<int>curr_ans(n);
        help(0,n,ans,curr_ans);
        return ans;
        
    }
};
https://www.geeksforgeeks.org/problems/exit-point-in-a-matrix0905/1




class Solution {
  public:
    int di[4]={0,1,0,-1};
    int dj[4]={1,0,-1,0};
    vector<int>ans;
    void solve(int i,int j,int dir,vector<vector<int>>& matrix,int n,int m){
        if(i>=n or j>=m or j<0 or i<0) {
            ans={i-di[dir],j-dj[dir]};
            return;
        }
        
        if(matrix[i][j]==1){
            matrix[i][j]=0;
            dir=(dir+1)%4;
            solve(i+di[dir],j+dj[dir],dir,matrix,n,m);
        }else{
            solve(i+di[dir],j+dj[dir],dir,matrix,n,m);
        }
    }
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        solve(0,0,0,matrix,n,m);
        return ans;
    }
};
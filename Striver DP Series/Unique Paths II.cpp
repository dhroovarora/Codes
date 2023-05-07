https://www.codingninjas.com/codestudio/problems/maze-obstacles_977241?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1




int mod = (int)(1e9 + 7);
int mazeObstacles(int n, int m, vector< vector< int> > &mat) {
    // Write your code here

    vector<int> dp(m,0);

	for(int i=0;i<n;i++){
		vector<int> temp(m,0);
		for(int j=0;j<m;j++){
            if(mat[i][j] == -1)
                temp[j] = 0;
			else if(i==0 && j==0)
				temp[j] = 1;
			else{
				int down = 0 ,right = 0;
				if(i>0) down = dp[j];
				if(j>0)	right = temp[j-1];	
				temp[j] = (down + right)%mod;
			}
		}
		dp = temp;
	}
	return dp[m-1];
}
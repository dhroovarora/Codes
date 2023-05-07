https://www.codingninjas.com/codestudio/problems/triangle_1229398?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0




#include <bits/stdc++.h> 
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
	vector<int> dp(n,0);
	for(int i=0;i<n;i++){
		vector<int> temp(n,0);
		for(int j=0;j<=i;j++){
			if(i==0)
				temp[j] = triangle[i][j];
			else{
				int up = INT_MAX,up_left = INT_MAX;
				if(j != i)
					up = dp[j];
				if(j>0)
					up_left = dp[j-1];
				temp[j] = triangle[i][j] + min(up,up_left);
			}
		}
		dp = temp;
	}
	return *min_element(dp.begin(),dp.end());
}
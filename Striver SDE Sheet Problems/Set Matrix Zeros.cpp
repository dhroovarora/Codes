https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=striver-sde-sheet-problems




#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n = matrix.size();
	int m = matrix[0].size();
	vector<pair<int,int>> top;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				pair<int,int> temp = {i,j};
				top.push_back(temp);
			}
		}
	}
	for(auto i : top){
		for(int k=0;k<n;k++){
			matrix[k][i.second] = 0;
		}
		for(int k=0;k<m;k++){
			matrix[i.first][k] = 0;
		}
	}
}
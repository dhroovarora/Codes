https://www.codingninjas.com/codestudio/problems/kth-smallest-and-largest-element-of-array_1115488?topList=striver-sde-sheet-problems&leftPanelTab=0




#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	sort(arr.begin(),arr.end());
	vector<int> ans;
	ans.push_back(arr[k-1]);
	ans.push_back(arr[n-k]);
	return ans;
}
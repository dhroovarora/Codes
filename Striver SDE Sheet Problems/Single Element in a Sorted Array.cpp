https://www.codingninjas.com/codestudio/problems/unique-element-in-sorted-array_1112654?topList=striver-sde-sheet-problems




#include <bits/stdc++.h> 
int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
	int i = 0;
	int j = arr.size()-1;
	if(n==1)
		return arr[0];
	if(arr[i] != arr[i+1])
		return arr[i];
	if(arr[j] != arr[j-1])
		return arr[j];
	while(i<=j){
		int m = i + (j-i)/2;
		if(arr[m] != arr[m+1] && arr[m] != arr[m-1])
			return arr[m];
		if((arr[m] == arr[m+1] && m%2 == 0) || (arr[m] == arr[m-1] && m%2 == 1))
			i = m + 1;
		else
			j = m - 1;
	}
	return -1;
}
https://www.codingninjas.com/codestudio/problems/majority-element_842495?topList=striver-sde-sheet-problems




#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
		if(m[arr[i]] > floor(n/2))
			return arr[i];
	}
	return -1;
}
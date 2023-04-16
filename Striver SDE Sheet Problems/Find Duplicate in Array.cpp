https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_1112602?topList=striver-sde-sheet-problems




#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	unordered_map<int,bool> m;
        for (int i = 0; i < n; i++) {
          if (m[arr[i]])
            return arr[i];
          m[arr[i]] = 1;
        }
}
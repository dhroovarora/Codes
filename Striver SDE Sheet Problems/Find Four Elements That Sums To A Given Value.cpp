https://www.codingninjas.com/codestudio/problems/find-four-elements-that-sums-to-a-given-value_983605?topList=striver-sde-sheet-problems&leftPanelTab=0




#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
            int k = j + 1;
            int l = n - 1;
            while(k < l){
                if(arr[i] + arr[j] + arr[k] + arr[l] == target)
                    return "Yes";
                else if(arr[i] + arr[j] + arr[k] + arr[l] > target)
                    l--;
                else
                    k++;
            }
        }
    }
    return "No";
}
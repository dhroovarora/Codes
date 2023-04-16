https://www.codingninjas.com/codestudio/problems/pair-sum_697295?topList=striver-sde-sheet-problems




#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<int> v;
    vector<vector<int>> ans;
    for(int i=0;i<arr.size()-1;i++){
        for(int j = i+1;j<arr.size();j++){
            if(arr[i] + arr[j] == s){
                if(arr[i] < arr[j]){
                    v.push_back(arr[i]);
                    v.push_back(arr[j]);
                 }
                else{
                    v.push_back(arr[j]);
                    v.push_back(arr[i]);
                }
                ans.push_back(v);
                v.clear();
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
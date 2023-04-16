https://www.codingninjas.com/codestudio/problems/majority-element-ii_893027?topList=striver-sde-sheet-problems




#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    unordered_map<int,int> m;
    for(int i=0;i<arr.size();i++)
        m[arr[i]]++;
    vector<int> ans;
    for(auto i :m){
        if(i.second > floor(arr.size()/3))
            ans.push_back(i.first);
    }
    return ans;
}
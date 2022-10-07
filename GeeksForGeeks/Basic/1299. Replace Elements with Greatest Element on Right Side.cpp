https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/




class Solution {
public:
    // vector<int> replaceElements(vector<int>& arr) {
        
    //     int n = arr.size();
    //     for(int i=0;i<n-1;i++){
    //         arr[i] = *max_element(arr.begin() + 1 + i,arr.end());
    //     }
    //     arr[n-1] = -1;
    //     return arr;
    // }
        
        vector<int> replaceElements(vector<int>& arr) {

    int n=arr.size(),temp,mx=-1;
    for(int i=n-1;i>=0;i--)
    {
        temp=arr[i];
        arr[i]=mx;
        mx=max(mx,temp);
    }
    return arr;
    }
};
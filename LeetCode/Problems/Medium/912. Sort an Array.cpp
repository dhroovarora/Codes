https://leetcode.com/problems/sort-an-array/description/




class Solution {
public:
    void merge(vector<int>& arr, int l, int m, int r)
    {
         // Your code here
        vector<int> mix;
        int i = l;
        int j = m+1;
        while(i <= m && j <= r){
            if(arr[i] < arr[j]){
                mix.push_back(arr[i]);
                i++;
            }
            else{
                mix.push_back(arr[j]);
                j++;
            }
        }
        while(i<=m){
            mix.push_back(arr[i]);
            i++;
        }
        while(j<=r){
            mix.push_back(arr[j]);
            j++;
        }
        for(int i=0;i<mix.size();i++)
            arr[l + i] = mix[i];
    }
    void mergeSort(vector<int>& arr, int l, int r)
    {
        //code here
        if(r <= l)
            return;
        
        int m = l + (r-l)/2;
        
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
    vector<int> sortArray(vector<int>& nums) {
        
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};
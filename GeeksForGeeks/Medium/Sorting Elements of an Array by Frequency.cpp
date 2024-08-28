https://www.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency-1587115621/1




class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.]
    bool static cmp(pair<int,int>&a,pair<int,int>&b){
        if(a.first != b.first) 
            return a.first > b.first;
        return a.second < b.second;
    }
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        unordered_map<int,int> m;
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++)
            ++m[arr[i]];
        for(auto i : m)
            temp.push_back({i.second,i.first});
        sort(temp.begin(),temp.end(),cmp);
        vector<int> ans;
        for(auto i : temp){
            int p = i.first;
            while(p--)
                ans.push_back(i.second);
        }
        return ans;
    }
};
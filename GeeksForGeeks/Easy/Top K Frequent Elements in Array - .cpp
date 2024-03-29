https://www.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1




class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        vector<int> ans; 
        unordered_map<int, int> m;
        priority_queue<pair<int, int>> q;
        for(auto i : nums) m[i]++;
        for(auto i : m) q.push({i.second, i.first});
        while(!q.empty() && k--){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
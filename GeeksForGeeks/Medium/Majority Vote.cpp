https://www.geeksforgeeks.org/problems/majority-vote/1




class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
        int n = nums.size();
        map<int, int> mp;
        for(auto it : nums)
        {
            mp[it]++;
        }
        vector<int> ans;
        for(auto it : mp)
        {
            if(it.second > n/3)
            {
                ans.push_back(it.first);
            }
        }
        if(ans.size())
        {
            return ans;
        }
        else
        {
            return {-1};
        }
    }
};
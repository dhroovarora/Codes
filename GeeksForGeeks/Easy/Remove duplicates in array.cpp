https://www.geeksforgeeks.org/problems/remove-duplicates-in-small-prime-array/1




class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        std::vector<int> ans;
        std::unordered_set<int> seen;
        
        for (int num : arr) {
            // Add to answer if not seen before
            if (seen.find(num) == seen.end()) {
                ans.push_back(num);
                seen.insert(num);
            }
        }
        return ans;
    }
};
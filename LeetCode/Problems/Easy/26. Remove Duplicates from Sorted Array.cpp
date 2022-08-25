https://leetcode.com/problems/remove-duplicates-from-sorted-array/




class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator it;
        for(auto it = nums.begin()+1; it != nums.end(); ++it){
            if(*it == *(it-1)){
                nums.erase(it);
                it--;
            }
        }
        return nums.size();
    }
};
https://leetcode.com/problems/maximum-product-difference-between-two-pairs/description/?envType=daily-question&envId=2023-12-18




class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int biggest = 0, secondBiggest = 0, smallest = INT_MAX, secondSmallest = INT_MAX;
        
        for (int num : nums) {
            secondBiggest = (num > biggest) ? exchange(biggest, num) : max(secondBiggest, num);
            secondSmallest = (num < smallest) ? exchange(smallest, num) : min(secondSmallest, num);
        }
        
        return biggest * secondBiggest - smallest * secondSmallest;
    }
};
https://leetcode.com/problems/single-number-iii/description/?envType=daily-question&envId=2024-05-31




class Solution {
    public int[] singleNumber(int[] nums) {
        int xor = 0;
        for(int num : nums)
            xor ^= num;
        
        int first_unmatch = xor & (-xor);

        int[] ans = new int[2];
        for(int num : nums){
            if((first_unmatch & num) == 0)
                ans[0] ^= num;
            else
                ans[1] ^= num;
        }
        return ans;
    }
}
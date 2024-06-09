https://leetcode.com/problems/subarray-sums-divisible-by-k/description/?envType=daily-question&envId=2024-06-09




class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        int n = nums.length;
        int[] sums = new int[k];
        sums[0]++;
        int cnt = 0;
        int currSum = 0;
        for(int i = 0; i<n; i++) {
            currSum = (currSum + nums[i]%k + k)%k;
            cnt += sums[currSum];
            sums[currSum]++;
        }
        return cnt;
    }
}
https://leetcode.com/problems/count-triplets-that-can-form-two-arrays-of-equal-xor/description/?envType=daily-question&envId=2024-05-30




class Solution {
    public int countTriplets(int[] arr) {
        int count = 0;
        for(int i=0;i<arr.length;++i){
            int val = arr[i];
            for(int k=i+1;k<arr.length;++k){
                val ^= arr[k];

                if(val == 0)
                    count += (k-i);
            }
        }
        return count;
    }
}
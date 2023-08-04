https://leetcode.com/problems/find-in-mountain-array/description/




/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int get_maxindex(int i,int j,MountainArray &mountainArr){
        while(i<=j){
            int m = i + (j-i)/2;
            if(m==0)
                return m + 1;
            if( m == mountainArr.length() - 1)
                return m - 1;
            int p = mountainArr.get(m);
            if(m!=0 && m!=mountainArr.length() && p > mountainArr.get(m-1) && p > mountainArr.get(m+1))
                return m;
            if(p > mountainArr.get(m-1))
                i = m + 1;
            else
                j = m - 1;
        }
        return -1;
    }
    int helper(int i,int j,int target, MountainArray &mountainArr,bool flag){
        while(i<=j){
            int m = i + (j-i)/2;
            int p = mountainArr.get(m);
            if(p == target)
                return m;
            else if(p < target){
                if(flag)
                    i = m + 1;
                else
                    j = m - 1;
            }
            else{
                if(flag)
                    j = m - 1;
                else
                    i = m + 1;
            }
        }
        return -1;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        int i = 0;
        int j = mountainArr.length() - 1;
        int maxi = get_maxindex(i,j,mountainArr);

        int ans1 = helper(i,maxi,target,mountainArr,true);
        int ans2 = helper(maxi+1,j,target,mountainArr,false);
        if(ans1 == -1)
            return ans2;
        return ans1;
    }
};
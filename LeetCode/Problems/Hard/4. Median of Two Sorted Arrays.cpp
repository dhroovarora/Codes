https://leetcode.com/problems/median-of-two-sorted-arrays/description/




class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0;
        int count = 0;
        int i = 0;
        int j = 0;
        int n = nums1.size();
        int m = nums2.size();
        while(i < n && j < m){
            if(nums1[i] < nums2[j]){
                ans = nums1[i++];
            }
            else{
                ans = nums2[j++];
            }
            ++count;
            if((n+m)%2){
                if(count - 1 == (n+m)/2){
                    return ans;
                }
            }
            else{
                if(count == (n+m)/2){
                    if(i == n)
                        ans += nums2[j];
                    else if(j == m)
                        ans += nums1[i];
                    else if(nums1[i] < nums2[j])
                        ans += nums1[i];
                    else 
                        ans += nums2[j];
                    return ans/2;
                }
            }
        }
        while(i < n){
            ans = nums1[i++];
            ++count;
            if((n+m)%2){
                if(count - 1 == (n+m)/2){
                    return ans;
                }
            }
            else{
                if(count == (n+m)/2){
                    ans += nums1[i];
                    return ans/2;
                }
            }
        }
        while(j < m){
            ans = nums2[j++];
            ++count;
            cout << count;
            if((n+m)%2){
                if(count - 1 == (n+m)/2){
                    return ans;
                }
            }
            else{
                if(count == (n+m)/2){
                    ans += nums2[j];
                    cout << ans/2;
                    return ans/2;
                }
            }
        }
        return ans;
    }
};
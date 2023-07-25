https://leetcode.com/problems/peak-index-in-a-mountain-array/description/




class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        int j = n - 1;
        while(i <= j){
            int mid = i + (j-i)/2;
            if( (mid == 0 || arr[mid] > arr[mid - 1]) && (mid == n-1 || arr[mid] > arr[mid + 1]) )
                return mid;
            if(mid > 0 && arr[mid] < arr[mid - 1])
                j = mid - 1;
            else
                i = mid + 1;
        }
        return -1;
    }
};
https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/description/?envType=daily-question&envId=2023-12-11




class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int temp = arr.size()/4;
        for(int i=0; i<arr.size()-temp; i++)
            if(arr[i] == arr[i+temp])
                return arr[i];
        return -1;
    }
};
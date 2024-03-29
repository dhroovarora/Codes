https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/description/?envType=daily-question&envId=2023-10-30




class Solution {
public:

    static int countBits(int num) {
        int count = 0;
        
        while (num > 0) {
            count++;
            num &= (num - 1);
        }
        
        return count;
    }
    
    static bool compare(int a, int b) {
        int bitCountA = countBits(a);
        int bitCountB = countBits(b);
        
        if (bitCountA == bitCountB) {
            return a < b;
        }
        
        return bitCountA < bitCountB;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);
        return arr;
    }
};
https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/




class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i = 0;
        int j = letters.size() -1;
        int ans = 0;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(letters[mid] <= target){
                i = mid + 1;
            }
            else{
                ans = mid;
                j = mid - 1;
            }
        }
        return letters[ans];
    }
};
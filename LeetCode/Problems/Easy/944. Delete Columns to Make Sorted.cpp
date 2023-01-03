https://leetcode.com/problems/delete-columns-to-make-sorted/description/




class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int s = strs[0].size();
        int count = 0;
        for(int j=0;j<s;j++){
            char a = strs[0][j];
            for(int i=1;i<n;i++){
                if(strs[i][j] >= a)
                    a = strs[i][j];
                else{
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
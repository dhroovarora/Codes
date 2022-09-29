https://leetcode.com/problems/pascals-triangle/




class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int a = 1;
        vector<int> temp;
        vector<int> god;
        god.push_back(1);
        ans.push_back(god);
        numRows--;
        while(numRows--){
            temp.push_back(1);
            for(int i =0;i<god.size()-1;i++){
                temp.push_back(god[i] + god[i+1]);
            }
            temp.push_back(1);
            god = temp;
            ans.push_back(god);
            temp.clear();
        }
        return ans;
    }
};
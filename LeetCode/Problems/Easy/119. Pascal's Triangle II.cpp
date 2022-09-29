https://leetcode.com/problems/pascals-triangle-ii/




class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int a = 1;
        vector<int> temp;
        vector<int> god;
        god.push_back(1);
        while(rowIndex--){
            temp.push_back(1);
            for(int i =0;i<god.size()-1;i++){
                temp.push_back(god[i] + god[i+1]);
            }
            temp.push_back(1);
            god = temp;
            temp.clear();
        }
        return god;
    }
};
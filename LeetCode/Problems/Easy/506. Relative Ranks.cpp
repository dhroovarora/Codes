https://leetcode.com/problems/relative-ranks/description/




class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> temp = score;
        vector<string> ans;
        sort(temp.begin(),temp.end(),greater<int>());
        unordered_map<int,int> m;
        for(int i=0;i<temp.size();i++)
            m[temp[i]] = i;
        for(int i=0;i<score.size();i++){
            if(m[score[i]] == 0)
                ans.push_back("Gold Medal");
            else if(m[score[i]] == 1)
                ans.push_back("Silver Medal");
            else if(m[score[i]] == 2)
                ans.push_back("Bronze Medal");
            else
                ans.push_back(to_string(m[score[i]] + 1));
        }
        return ans;
    }
};
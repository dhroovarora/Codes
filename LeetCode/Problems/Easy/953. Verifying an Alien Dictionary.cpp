https://leetcode.com/problems/verifying-an-alien-dictionary/description/




class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> m;
        for(int i=0;i<order.size();i++)
            m[order[i]] = i;
        for(int i=0;i<words.size()-1;i++){
            bool flag = 0;
            for(int j=0;j<min(words[i].size(),words[i+1].size());j++){
                if(m[words[i][j]] < m[words[i+1][j]]){
                    flag = 1;
                    break;
                }
                else if(m[words[i][j]] > m[words[i+1][j]])
                    return 0;
            }
            if(flag == 0 && words[i].size() > words[i+1].size())
                return 0;
        }
        return 1;
    }
};
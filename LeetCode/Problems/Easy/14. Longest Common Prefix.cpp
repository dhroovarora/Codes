https://leetcode.com/problems/longest-common-prefix/




class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            return strs[0];
        }
        int min=strs[0].size();
        for(int i=1;i<strs.size();i++){
            if(strs[i].size() < min){
                min = strs[i].size();
            }
        }
        for(int i=0;i<strs.size()-1;i++){
            if(strs[i].substr(0,min)==strs[i+1].substr(0,min)){
                if(i == strs.size()-2){
                    return strs[0].substr(0,min);
                }
                else{
                continue;
                }
            }
            else{
                min--;
                i=-1;
            }
        }
        return "";
    }
};
https://leetcode.com/problems/ransom-note/




class Solution {
public:
    bool canConstruct(string a, string b) {
        int m[26] = {};
        for(int i=0;i<b.size();i++){
            m[b[i] - 'a']++;
        }
        
        for(int i=0;i<a.size();i++){
            m[a[i] - 'a']--;
            if(m[a[i] - 'a']==-1){
                return 0;
            }
        }
        return 1;
    }
};
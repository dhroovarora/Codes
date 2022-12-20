https://leetcode.com/problems/most-common-word/description/




class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> m;
        string s;
        for(int i=0;i<paragraph.size();i++){
            if((paragraph[i] >= 'a' && paragraph[i] <= 'z') || (paragraph[i] >= 'A' && paragraph[i] <= 'Z'))
                s += tolower(paragraph[i]);
            else{
                if(s.size()>0)
                    m[s]++;
                s.erase();
            }
        }
        if(s.size()){
            m[s]++;
        }
        for(int i=0;i<banned.size();i++){
            m[banned[i]] = 0;
        }
        int p=0;
        string ans;
        for(auto i:m){
            if(i.second > p){
                ans = i.first;
                p = i.second;
            }
        }
        return ans;
    }
};
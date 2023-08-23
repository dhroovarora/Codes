https://leetcode.com/problems/reorganize-string/description/




class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> m;
        for(char i : s){
            ++m[i];
        }
        vector<char> temp;
        for(auto i : m)
            temp.push_back(i.first);
        sort(temp.begin(), temp.end(), [&](char a, char b) {
            return m[a] > m[b];
        });

        if (m[temp[0]] > (s.length() + 1) / 2) 
            return "";
            
        int k=0;
        string as(s.size(),' ');
        for(auto i : temp){
            for(int j=0;j<m[i];j++){
                if(k >= s.size())
                    k = 1;
                as[k] = i;
                k += 2;
            }
        }
        return as;
    }
};
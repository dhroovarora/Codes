https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/




class Solution {
public:
    bool isvowel(string k){
        if((k[0] == 'a' || k[0] == 'e' || k[0] == 'i' || k[0] == 'o' || k[0] == 'u') && (k[k.size()-1] == 'a' || k[k.size()-1] == 'e' || k[k.size()-1] == 'i' || k[k.size()-1] == 'o' || k[k.size()-1] == 'u' ))
            return 1;
        return 0;
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int ans = 0;
        for(int i=left;i<=right;i++){
            if(isvowel(words[i]))
                ans++;
        }
        return ans;
    }
};
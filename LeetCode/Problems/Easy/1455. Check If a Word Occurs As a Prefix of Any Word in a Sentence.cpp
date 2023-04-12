https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/description/




class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int p = 1;
        int ans = -1;
        string temp = "";
        for(int i=0;i<sentence.size();i++){
            if(sentence[i] == ' '){
                if(temp.size() >= searchWord.size() && temp.substr(0,searchWord.size()) == searchWord){
                    return p;
                    break;
                }
                temp = "";
                p++;
            }
            else{
                temp += sentence[i];
            }
        }
        if(temp.size() >= searchWord.size() && temp.substr(0,searchWord.size()) == searchWord)
            return p;
        return -1;
    }
};
https://leetcode.com/problems/goat-latin/description/




class Solution {
public:
    string toGoatLatin(string sentence) {
        string s = "";
        string ans = "";
        int count = 0;
        for(int i=0;i<sentence.size()+1;i++){
            if(i == sentence.size() || sentence[i] == ' '){
                count++;
                if(s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u' || s[0] == 'A' || s[0] == 'E' || s[0] == 'I' || s[0] == 'O' || s[0] == 'U'){
                    s += "ma";
                }
                else{
                    s += s[0];
                    s += "ma"; 
                    s.erase(s.begin());
                }
                int temp = count;
                while(temp--){
                    s += 'a';
                }
                ans += s;
                if(i !=sentence.size())
                    ans += " ";
                s.erase();
            }
            else{
                s += sentence[i];
            }
        }
        return ans;
    }
};
https://leetcode.com/problems/backspace-string-compare/description/?envType=daily-question&envId=2023-10-19




class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a;
        for(int i=0;i<s.size();++i){
            if(s[i] == '#'){
                if(a.empty())
                    continue;
                else
                    a.pop();
            }
            else
                a.push(s[i]);
        }
        stack<char> b;
        for(int i=0;i<t.size();++i){
            if(t[i] == '#'){
                if(b.empty())
                    continue;
                else
                    b.pop();
            }
            else
                b.push(t[i]);
        }
        string c;
        while(!a.empty()){
            c += a.top();
            a.pop();
        }
        string d;
        while(!b.empty()){
            d += b.top();
            b.pop();
        }
        return (c==d);
    }
};
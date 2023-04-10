https://leetcode.com/problems/valid-parentheses/




class Solution {
public:
    bool isValid(string s) {
        stack<char> d;
    for(int i=0;i<s.size();i++){
        if(d.size() == 0)
            d.push(s[i]);
        else{
            if(d.top() == '(' && s[i] == ')')
                d.pop();
            else if(d.top() == '[' && s[i] == ']')
                d.pop();
            else if(d.top() == '{' && s[i] == '}')
                d.pop();
            else if((d.top() == '(' && (s[i] == ']' || s[i] == '}')) || (d.top() == '[' && (s[i] == ')' || s[i] == '}')) || (d.top() == '{' && (s[i] == ']' || s[i] == ')')))
                return 0;
            else
                d.push(s[i]);
        }
    }
    if(d.size())
        return 0;
    return 1;
    }
};
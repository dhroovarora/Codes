https://leetcode.com/problems/evaluate-reverse-polish-notation/description/?envType=daily-question&envId=2024-01-30




class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(auto it : tokens){
            if(it[it.size()-1] == '+' || it[it.size()-1] == '-' || it[it.size()-1] == '*' || it[it.size()-1] == '/'){
                int top1 = s.top();
                s.pop();
                int top2 = s.top();
                s.pop();
                if(it[0] == '+')
                    s.push(top2 + top1);
                else if(it[0] == '-')
                    s.push(top2 - top1);
                else if(it[0] == '*')
                    s.push(top2 * top1);
                else
                    s.push(top2 / top1);
            }
            else{
                s.push(stoi(it));
            }
        }
        int ans = s.top();
        s.pop();
        return ans;
    }
};
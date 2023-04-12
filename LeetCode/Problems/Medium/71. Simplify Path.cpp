https://leetcode.com/problems/simplify-path/description/




class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;
        for(int i=0;i<path.size();i++){
            if(path[i] == '/'){
                continue;
            }
            string t;
            while(i<path.size() && path[i] != '/'){
                t += path[i];
                ++i;
            }
            if(t == ".")
                continue;
            if(t == ".."){
                if(!s.empty())
                    s.pop();
            }
            else
                s.push(t);
        }
        string ans = "";
        while(s.size() != 0){
            ans = "/" + s.top() + ans;
            s.pop();
        }
        if(ans.size() == 0)
            return "/";
        return ans;
    }
};